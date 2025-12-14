/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170516
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)8192))))) : (((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))));
    var_12 = ((/* implicit */unsigned short) min((((/* implicit */int) var_3)), ((-((+(((/* implicit */int) var_0))))))));
    var_13 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(18446744073709551609ULL)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)575))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4])))));
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_8))));
                                var_16 = ((/* implicit */unsigned short) var_2);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_2] [i_2] [12] = (+((+(((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_0] [i_2] [i_1 - 1] [i_2])))));
                        arr_18 [(unsigned short)8] [i_2] = ((/* implicit */short) (((+(((/* implicit */int) arr_15 [i_0] [i_1 + 1])))) & (((/* implicit */int) arr_15 [(signed char)1] [i_1 + 1]))));
                        arr_19 [i_5] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_2)), (var_10)))))) ? (max((((/* implicit */unsigned long long int) arr_9 [i_1 - 1] [i_1 - 1] [i_2] [i_2] [i_2] [i_1 - 1])), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)169))))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        arr_23 [i_0] [i_0] [i_1] [i_1] [i_2] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0])) ? (arr_16 [i_0] [i_2]) : (((/* implicit */unsigned long long int) (+(arr_22 [i_0] [(unsigned char)11] [i_2] [i_2] [i_6]))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (403639200072773092LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [14ULL] [i_0])))));
                        var_18 = ((((((/* implicit */unsigned long long int) arr_22 [i_0] [i_6] [i_2] [1LL] [i_0])) > (((((/* implicit */_Bool) arr_14 [i_6] [(unsigned short)9] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))) : (var_9))))) ? (((unsigned long long int) (-(((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) max(((~(arr_1 [i_0]))), (((/* implicit */unsigned int) arr_10 [i_2]))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)122))) : (((/* implicit */int) ((((/* implicit */int) arr_20 [i_1 - 1] [7] [i_1] [i_1] [i_1] [i_1 - 1])) <= (arr_22 [i_1 + 1] [i_1 - 1] [i_1 + 1] [4U] [i_1 + 1]))))));
                        arr_26 [i_0] [(unsigned char)7] [(unsigned char)7] [i_0] [i_7] [i_7] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)238)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) arr_4 [i_7])))))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (max((arr_1 [i_1]), (((/* implicit */unsigned int) arr_3 [i_7] [i_2]))))))));
                        arr_27 [i_7] [i_2] = ((/* implicit */long long int) (-(max(((~(arr_13 [i_7]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))))));
                    }
                    for (short i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        arr_30 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)125)) ^ (((/* implicit */int) (unsigned char)10))))))) || (((/* implicit */_Bool) 2783660147U))));
                        arr_31 [i_0] [i_0] = ((/* implicit */int) (((~(((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)63198)))))) > (((/* implicit */int) ((signed char) var_6)))));
                    }
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_5))));
                    arr_32 [i_0] [i_1] [i_0] [i_2] = ((((arr_22 [13ULL] [i_1 + 1] [i_1 - 1] [i_1] [i_1]) <= (((/* implicit */int) var_3)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_1 + 1]) <= (arr_1 [i_1 - 1]))))));
                }
            } 
        } 
    } 
}
