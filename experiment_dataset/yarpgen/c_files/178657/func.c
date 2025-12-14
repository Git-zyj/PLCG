/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178657
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) min((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_3)) : (var_7))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_4)))))))), (var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_12 = ((((/* implicit */_Bool) 0ULL)) ? (1038584900273541973ULL) : (((/* implicit */unsigned long long int) -561293028328991071LL)));
                    arr_7 [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 2] [i_0] [i_0 - 1]);
                    /* LoopSeq 2 */
                    for (short i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        var_13 |= ((/* implicit */int) arr_0 [i_2]);
                        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_2 [i_1] [i_2] [i_3 + 1]))))));
                    }
                    for (unsigned short i_4 = 3; i_4 < 22; i_4 += 4) 
                    {
                        arr_12 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) - (((var_6) ? (((/* implicit */unsigned long long int) arr_9 [10] [i_1])) : (arr_8 [i_0] [i_1] [21] [21] [i_0])))))) && (((/* implicit */_Bool) var_3))));
                        var_15 = ((/* implicit */int) var_2);
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_9 [i_0 - 1] [i_0 + 3]), (arr_9 [i_0 - 1] [i_0 + 3])))) ? (((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (arr_3 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(var_9)))) || (((/* implicit */_Bool) min((arr_11 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]), (arr_2 [i_0] [i_1] [i_0]))))))))));
                    }
                    arr_13 [i_0 - 1] [i_0] = ((18446744073709551606ULL) - (((/* implicit */unsigned long long int) -1)));
                }
                for (int i_5 = 3; i_5 < 22; i_5 += 2) 
                {
                    arr_16 [i_0] = ((/* implicit */unsigned short) (-(4398046511040ULL)));
                    arr_17 [i_0 + 1] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5 - 3])) ? (arr_8 [i_5 - 2] [i_1] [i_0 + 3] [i_0 + 3] [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5 - 3] [i_0] [i_5 - 2] [i_0 - 1])))))) ? (((/* implicit */int) ((_Bool) arr_8 [i_5 - 1] [i_1] [i_5 + 1] [i_0 - 1] [i_5]))) : (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) -1436175715))))));
                    var_17 ^= ((/* implicit */int) arr_15 [9] [i_1] [i_5]);
                }
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 19; i_7 += 4) 
                    {
                        for (int i_8 = 2; i_8 < 20; i_8 += 1) 
                        {
                            {
                                arr_25 [i_0 + 2] [i_0] [8] [(unsigned short)1] [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_14 [i_0] [i_6] [i_7 + 1])))))) > (((((/* implicit */_Bool) max((-2147483631), (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [7ULL] [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 3]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (21ULL)))))));
                                arr_26 [i_0 + 3] [i_0] [i_6] [i_6] [i_8 + 2] [i_1] = ((_Bool) var_2);
                                var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (1436175711) : (((/* implicit */int) (unsigned short)65523))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1] [i_0 + 3] [i_0 - 1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) arr_9 [i_6] [i_1])))) > (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) arr_8 [(_Bool)1] [17] [(_Bool)1] [i_7 + 3] [(_Bool)1])) ? (arr_8 [i_8 + 3] [(short)4] [i_7] [i_7 + 3] [i_6]) : (arr_8 [i_8] [i_8] [i_7 + 3] [i_7 + 3] [18LL])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) var_9);
                    var_20 = ((/* implicit */unsigned long long int) (unsigned short)29739);
                    var_21 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_14 [i_0 + 1] [16ULL] [i_6])) ? (2147483647) : (((/* implicit */int) var_6)))), (((((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_1] [i_6] [(short)14] [i_6])) & (((/* implicit */int) var_10))))))) ? (((min((18446744073709551615ULL), (arr_4 [i_0 + 1] [i_1] [i_6] [i_0 + 2]))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (9223372036854775786LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                }
                arr_27 [i_1] [i_1] |= ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_3)) ? (18446744073709551615ULL) : (arr_22 [0LL] [i_0 - 1] [(short)8] [(short)8] [i_1] [i_1] [i_1]))))) >> (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_1] [(_Bool)1])) || (((/* implicit */_Bool) arr_6 [1ULL] [16LL] [i_0] [16LL]))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_3 [i_0])))))));
                arr_28 [i_0 + 2] [i_0 + 2] [i_1] |= ((((/* implicit */_Bool) min(((short)-1), (((/* implicit */short) (_Bool)1))))) || (((/* implicit */_Bool) ((min(((_Bool)1), ((_Bool)1))) ? (((((/* implicit */_Bool) arr_4 [18] [i_1] [18] [i_0 - 1])) ? (4999350732009841160ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (13295127610426371943ULL)))));
            }
        } 
    } 
}
