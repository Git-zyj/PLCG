/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16445
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (((~(((/* implicit */int) var_11)))) ^ (((/* implicit */int) min((var_3), (((/* implicit */short) ((_Bool) var_0)))))))))));
    var_16 = ((/* implicit */_Bool) ((unsigned short) ((short) var_8)));
    var_17 = ((/* implicit */short) max((var_17), (var_7)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (unsigned short)14970))));
        var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_13)) > (max((((/* implicit */unsigned long long int) (short)26654)), (var_4)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 4; i_3 < 19; i_3 += 2) 
                    {
                        var_20 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26672)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [3LL]))) : (18446744073709551615ULL)))) ? (arr_7 [i_1] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26650))))) & (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [(short)12]), (((/* implicit */short) ((((/* implicit */_Bool) 11041303035423648802ULL)) || (((/* implicit */_Bool) var_14))))))))));
                        arr_9 [i_0] = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */long long int) (unsigned char)76)), (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1] [i_2] [(short)9] [i_2 - 1]))))) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [(short)15] [(unsigned char)7] [i_2 + 1])) : (((((((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [15U] [i_2 - 1] [i_2 - 1])) + (19754))) - (21)))))));
                        arr_12 [i_4] [i_4] [8ULL] = max((arr_3 [i_0]), (((/* implicit */unsigned short) var_7)));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)16383)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_23 |= ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1] [(_Bool)1]))))), (arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [0ULL] [(signed char)1])));
                        var_24 |= ((/* implicit */signed char) ((unsigned int) (~(arr_0 [i_2 - 1]))));
                        var_25 = ((_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18425520228656493029ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_14 [i_0] [i_0] [17ULL] [i_5] [14ULL] [17ULL]))))), (((((/* implicit */_Bool) var_7)) ? (134914054096292481ULL) : (((/* implicit */unsigned long long int) var_13))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            arr_22 [i_6] [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_6] [i_6] [i_2 - 1]))) * (var_8))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_6] [i_2 + 1])) * (((/* implicit */int) arr_21 [(short)18] [(unsigned short)2] [i_2] [(short)0] [i_2 - 1])))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_19 [i_2 - 1] [i_2 + 1] [i_6] [i_2 - 1] [(unsigned char)19])), (4ULL)))) ? (max((arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_1]), (((/* implicit */long long int) arr_21 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [(unsigned short)8])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_1]))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_2 - 1] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_10 [i_0] [i_2 - 1] [i_6] [i_6] [(_Bool)0])) : (((/* implicit */int) arr_8 [(short)14] [i_1] [(short)14] [(unsigned char)0] [i_2 - 1]))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22411)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1812563689U)))) ? (max((((/* implicit */unsigned long long int) var_7)), (6710826712022134022ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
                        }
                        arr_23 [i_6] = arr_3 [17ULL];
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (+(((long long int) arr_1 [i_2 + 1])))))));
                    }
                    arr_24 [i_0] [12U] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) % (((arr_5 [(short)12] [i_1] [i_1] [i_1]) & (((/* implicit */long long int) 1006388234U)))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_2 + 1] [i_2 + 1] [(short)19] [i_2 + 1] [i_2 + 1] [i_2 - 1])))))));
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_2 + 1] [12LL] [i_0] [(unsigned char)10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (arr_18 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [(short)18])));
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned short) (((+(0ULL))) / (var_2)));
}
