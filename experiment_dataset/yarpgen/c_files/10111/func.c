/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10111
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 = ((((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) arr_4 [i_0])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (arr_4 [i_0]))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (arr_4 [i_0]))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2])) ? (arr_4 [i_0]) : (arr_4 [i_0]))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (arr_3 [i_0] [i_0 + 4])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_2 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2])))))) ? (((/* implicit */long long int) (((_Bool)1) ? (4191004729U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4191004729U)) ? (arr_2 [i_2]) : (((/* implicit */long long int) 4191004729U))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2]))) : (((((/* implicit */long long int) var_6)) & (9223372036854775807LL)))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 15; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_3 - 2] [i_3] [i_4]))));
                        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) arr_13 [i_2] [6LL] [i_2]))));
                        arr_21 [i_4] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) 4292017963U);
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) << (((arr_6 [i_2] [i_2] [(unsigned char)11]) - (79890323U)))))) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3] [i_2])) && (((/* implicit */_Bool) arr_5 [i_2] [i_2])))))))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_6 = 2; i_6 < 13; i_6 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_3] [i_3] [i_3 + 1])) * (((/* implicit */int) (!(arr_10 [i_2])))))))));
                        arr_26 [i_3] [i_4] [i_6 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_23 [i_3 + 1] [i_3] [i_6 - 1]) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (arr_3 [i_2] [i_2])))) : (((((/* implicit */_Bool) (unsigned char)193)) ? (arr_16 [i_4] [i_4] [i_2] [i_4]) : (((/* implicit */long long int) var_9))))))) ? (arr_4 [i_4]) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)110))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64)))))));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3 - 1] [i_4] [i_4] [i_6 - 1])) ? (((/* implicit */int) arr_19 [i_3 - 1] [i_3 - 1] [i_4] [i_6 - 1])) : (((/* implicit */int) arr_19 [i_3 - 1] [i_3] [i_4] [i_6 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6] [i_6 - 1] [i_4] [i_4] [i_6] [i_6]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_6])) ? (var_1) : (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_15 [i_2])) : (((/* implicit */int) (signed char)-15))))) : (arr_16 [i_6 + 2] [i_6 + 2] [i_3] [i_4])))));
                        arr_27 [i_2] [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_3 - 2])) / (((/* implicit */int) arr_0 [i_3 - 1]))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_25 [i_6] [i_6] [i_4] [i_6 + 2] [i_3])) : (arr_16 [i_4] [i_6] [i_6 + 2] [i_4])))));
                        arr_28 [i_6] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_4] [i_6 + 3])) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) arr_23 [i_6 - 2] [i_4] [i_2]))))) ^ (var_10)));
                    }
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 1; i_8 < 12; i_8 += 4) 
                        {
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2]))))))));
                            arr_33 [i_2] [i_2] [i_4] [i_2] [i_2] = var_10;
                            arr_34 [i_2] [i_2] [i_4] [i_4] [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_8 + 3]))) * (arr_3 [i_2] [i_3 - 2])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_24 [i_8] [i_4] [i_8 + 1] [i_7] [i_4] [i_2]))))) : (((arr_18 [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) arr_5 [i_3] [i_7]))))) : (((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) : (var_3)))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_39 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_3 - 2] [i_4])) ? (((((/* implicit */_Bool) arr_14 [i_2] [i_3 + 1] [i_4])) ? (((/* implicit */int) arr_14 [i_9] [i_3 - 2] [i_9])) : (((/* implicit */int) arr_14 [i_2] [i_3 + 1] [i_4])))) : (((((/* implicit */int) arr_14 [i_2] [i_3 + 1] [13LL])) % (((/* implicit */int) arr_14 [i_7] [i_3 - 2] [i_3]))))));
                            var_18 = ((/* implicit */unsigned char) var_10);
                        }
                        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            arr_44 [i_2] [i_2] [(_Bool)1] |= ((/* implicit */long long int) arr_5 [i_3 - 2] [i_3 - 2]);
                            var_19 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 65472U)) ? (arr_40 [(unsigned char)12] [i_3] [i_3 - 1] [i_3] [i_3 - 1]) : (arr_40 [(signed char)6] [i_3] [i_3 - 1] [(signed char)6] [i_10])))) ? (var_6) : (((((/* implicit */_Bool) arr_40 [10U] [i_3] [i_3 - 1] [i_7] [i_10])) ? (arr_40 [(unsigned char)10] [i_3] [i_3 - 1] [i_7] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))))));
                        }
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_3 + 1] [i_3 - 2] [i_4] [i_7] [i_7] [i_7])) ? (arr_41 [i_2] [i_3] [i_3 - 1] [i_3] [i_7] [i_7]) : (arr_41 [i_7] [(unsigned char)3] [i_3] [i_3] [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) arr_9 [i_7] [i_3 + 1])))) : (((((/* implicit */int) arr_9 [i_2] [i_2])) << (((arr_41 [(_Bool)1] [i_3] [i_4] [i_4] [i_4] [i_4]) - (3537339944U))))))))));
                        var_21 = ((((((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_3 - 1] [i_2]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_2] [i_3] [i_3] [i_3] [i_3] [i_3 + 1] [i_3])) && (((/* implicit */_Bool) arr_36 [i_3] [i_3] [i_3] [i_3] [i_3 - 2] [i_3 - 1] [(unsigned char)4])))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_8) <= (var_6)))) << ((((+(((/* implicit */int) var_2)))) + (99)))))) ? (((((/* implicit */int) arr_0 [i_3 - 1])) - (((/* implicit */int) var_0)))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))))));
                    }
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        var_23 -= ((/* implicit */unsigned char) ((var_7) ? ((~(((/* implicit */int) (unsigned char)0)))) : (((((/* implicit */int) arr_31 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) << (((/* implicit */int) (signed char)14))))));
                        arr_49 [i_4] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_3] [i_3 + 1] [i_3] [i_4])) ? (arr_16 [i_4] [(signed char)1] [(unsigned char)3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_2] [i_3] [i_3] [i_4] [i_3])))));
                        arr_50 [i_4] = ((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_17 [i_3 - 1])) : (((/* implicit */int) arr_24 [(unsigned char)13] [i_4] [i_4] [13LL] [i_4] [i_2])))) == (((/* implicit */int) arr_30 [(_Bool)1] [3LL] [i_4] [(unsigned char)12] [i_11])));
                    }
                    arr_51 [i_4] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) arr_8 [i_4]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_10 [i_3 - 1]) ? (((/* implicit */int) arr_45 [(unsigned char)8] [(unsigned char)4] [i_3] [i_4])) : (((/* implicit */int) arr_14 [i_4] [i_3 + 1] [i_2]))))) && (((/* implicit */_Bool) arr_19 [i_2] [i_3] [i_4] [i_2]))))) : (((/* implicit */int) var_7))));
                    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4])) ? (arr_4 [i_4]) : (arr_4 [i_4])))) && (((/* implicit */_Bool) arr_4 [i_4])));
                }
            } 
        } 
    }
    var_26 = ((((/* implicit */_Bool) (unsigned char)129)) ? (var_6) : (var_3));
    var_27 = ((/* implicit */unsigned char) (signed char)-15);
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (0U)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-1)))))))) : (((/* implicit */int) var_5))));
}
