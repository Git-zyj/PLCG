/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130582
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
    var_17 &= var_6;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    var_18 = ((/* implicit */unsigned short) (((~(var_6))) == (((/* implicit */int) arr_5 [i_0 + 3] [i_2] [i_2]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2106104399))));
                        var_20 -= ((/* implicit */long long int) (-(var_6)));
                        arr_11 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */_Bool) ((int) 7ULL));
                    }
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        arr_15 [i_2] [i_2] [17ULL] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned int) ((signed char) arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 2]));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (arr_14 [i_0] [i_1] [(unsigned char)12])))))))));
                        var_22 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2])) ? (10450789698367222184ULL) : (13288215941548573879ULL))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_23 ^= (~(268427264));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [(_Bool)1] [i_0])) ? (arr_14 [i_0 + 1] [i_1] [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)111)) * (((/* implicit */int) var_11))))))))));
                                var_25 = ((/* implicit */long long int) (+(((/* implicit */int) arr_20 [i_0 + 2] [i_0 - 1]))));
                                var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_5] [i_5])) ? (var_13) : (((/* implicit */int) arr_3 [i_0]))))));
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_7 [i_0]);
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 1; i_7 < 22; i_7 += 2) 
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (-(10450789698367222184ULL)))) ? (10132876041427654613ULL) : (((arr_20 [i_0 + 3] [i_0 + 1]) ? (arr_6 [(_Bool)1]) : (((/* implicit */unsigned long long int) 268427264))))));
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), ((((!(((/* implicit */_Bool) max(((unsigned short)32256), (var_11)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_20 [i_0] [i_1]) ? (((/* implicit */int) var_11)) : (268427260)))) ? (((long long int) 2251799813677056ULL)) : (((/* implicit */long long int) ((var_12) - (((/* implicit */int) arr_17 [i_0] [i_0] [(unsigned short)23] [i_7 + 3] [i_7])))))))) : (((arr_9 [i_0 - 1] [i_1] [i_7] [i_1] [i_1]) ? (arr_14 [i_0 - 1] [i_1] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 2] [(_Bool)1] [i_1] [i_1] [i_1])))))))));
                }
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */int) arr_7 [i_0]))))) / (((unsigned long long int) var_11))))) || (((/* implicit */_Bool) max((arr_21 [i_0] [i_0 + 2] [i_0] [i_1] [i_1]), (arr_21 [i_1] [i_0 + 3] [i_0] [i_1] [i_0]))))));
            }
        } 
    } 
}
