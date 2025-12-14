/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163026
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                {
                    var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)14)), (arr_2 [i_2]))))))) ? (min((13766504272412358756ULL), (((/* implicit */unsigned long long int) arr_6 [i_2 + 2] [i_2 - 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned short) arr_0 [i_0])), (((/* implicit */unsigned short) arr_7 [i_0] [i_0] [(unsigned short)7] [i_0]))))))));
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (~((~(((/* implicit */int) min(((unsigned short)32768), (((/* implicit */unsigned short) var_11))))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_2 + 3] [i_2 - 1])), (arr_9 [i_0] [i_1] [i_2 + 1] [i_2 - 1] [i_3] [i_3])))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [2LL] [i_2 + 3] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) -2086122071)) : (11ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_3])))))))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 137438953471LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_10 [i_0] [i_0] [9U] [i_0])))), (((/* implicit */int) var_1))))) : ((+(arr_6 [i_1] [i_1])))));
                            var_18 = ((/* implicit */int) max((var_18), ((-(((/* implicit */int) (unsigned short)65535))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [3U] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) arr_2 [i_0])), (arr_4 [i_0] [i_3] [i_5])))))), (var_14)));
                            var_19 += ((((var_13) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28434))))) << (((13766504272412358743ULL) - (13766504272412358742ULL))));
                            arr_18 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_5] [i_1] |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((4294967290U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        arr_23 [i_0] [i_0] [i_0] [(_Bool)1] [(unsigned short)9] [(unsigned short)9] = ((/* implicit */unsigned short) arr_8 [i_2 + 2] [i_2] [i_2] [i_2 + 2]);
                        var_20 -= ((/* implicit */unsigned long long int) (-(arr_19 [i_6 - 1] [i_6] [(signed char)4] [i_6] [i_6 - 1])));
                    }
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        for (int i_8 = 2; i_8 < 6; i_8 += 1) 
                        {
                            {
                                arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) arr_4 [i_8 + 1] [i_8 - 2] [i_8 + 4])))));
                                arr_29 [(signed char)6] [i_1] [(signed char)6] [i_7] [i_1] = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) arr_19 [i_0] [i_8] [i_2 + 2] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551597ULL))), (((/* implicit */unsigned long long int) 21)))), (((/* implicit */unsigned long long int) (-(923046839U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)65527))))));
}
