/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129739
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
    var_11 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2374686222604141217LL)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (unsigned char)40))))) == ((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) | (var_8)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_12 &= ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (unsigned char)5))));
        arr_2 [i_0] = ((/* implicit */long long int) (signed char)58);
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [20LL] [16LL]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0 + 1] [(unsigned char)1]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_0 [0U] [i_0])) : (7675495242025784759LL)))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned char i_3 = 3; i_3 < 19; i_3 += 1) 
            {
                {
                    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)5)) >> (((((/* implicit */int) arr_6 [i_3])) + (44)))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1102803423)) || (((/* implicit */_Bool) ((((min((((/* implicit */long long int) (unsigned char)48)), (-1380746418743898463LL))) + (9223372036854775807LL))) << (((((((int) (signed char)-115)) + (134))) - (19))))))));
                        var_16 = ((/* implicit */int) ((long long int) var_9));
                        var_17 *= ((/* implicit */unsigned char) 1102803424);
                        arr_15 [i_4] [i_4] [i_4] = (~((~(arr_8 [i_3 - 2]))));
                    }
                    for (int i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_14 [i_3 + 3] [i_5 - 2] [i_5] [i_5] [i_5] [i_5 + 1])) > (var_3))) || (((/* implicit */_Bool) 1102803420))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */long long int) var_5);
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((long long int) arr_17 [(unsigned char)3] [i_3] [i_3] [i_3 + 4])))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)118)) ? (var_3) : (arr_12 [i_5] [i_5 - 1] [i_5 + 1] [13LL])));
                        }
                        arr_21 [(unsigned char)1] [0] = ((/* implicit */unsigned int) ((var_3) / (((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */long long int) var_6)) : ((+(arr_9 [2LL] [i_2])))))));
                        var_22 = arr_19 [i_5] [18] [12LL] [i_1] [i_2] [i_1];
                    }
                    var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) 3190172428U)) ? (((/* implicit */unsigned int) var_6)) : (arr_18 [9] [11LL] [i_3 - 3] [i_3 - 2] [i_3] [i_3 + 3] [i_2]))) << (((min((arr_18 [i_3 + 3] [i_3 + 4] [i_3 + 2] [i_3 - 3] [i_3 + 2] [i_3] [i_3]), (((/* implicit */unsigned int) 1271911259)))) - (1271911252U)))));
                }
            } 
        } 
        arr_22 [i_1] = ((/* implicit */signed char) ((((((unsigned int) (unsigned char)208)) & ((-(12U))))) > (((/* implicit */unsigned int) arr_16 [i_1] [i_1] [i_1] [i_1]))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1])) ? (arr_8 [i_1]) : (((/* implicit */unsigned int) arr_16 [i_1] [i_1] [i_1] [i_1]))))) ? (arr_16 [i_1] [(signed char)14] [i_1] [i_1]) : (((int) var_7)))))));
    }
    for (unsigned int i_7 = 1; i_7 < 16; i_7 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_8 = 2; i_8 < 15; i_8 += 3) 
        {
            for (unsigned int i_9 = 1; i_9 < 15; i_9 += 4) 
            {
                for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    {
                        var_25 = ((/* implicit */long long int) arr_7 [20U] [i_8] [i_8]);
                        var_26 = ((/* implicit */signed char) arr_16 [i_9 + 2] [8U] [i_9 + 1] [i_8 + 1]);
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 1; i_11 < 14; i_11 += 3) 
                        {
                            var_27 *= ((/* implicit */unsigned int) ((-1102803420) < (((/* implicit */int) ((var_2) > (((/* implicit */long long int) (-(((/* implicit */int) arr_34 [i_7] [i_8] [(unsigned char)1] [i_11]))))))))));
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (-9223372036854775807LL - 1LL)))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */long long int) var_6)) & (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [8LL] [i_7] [14] [14] [(unsigned char)11] [15LL])) ? (((/* implicit */int) arr_7 [i_8] [i_9] [i_11])) : (((/* implicit */int) var_1)))))))) && (((/* implicit */_Bool) ((-5471932122624524409LL) + (((/* implicit */long long int) -2000568740))))))))));
                            var_30 = ((/* implicit */unsigned char) (~(var_10)));
                            var_31 = ((/* implicit */signed char) ((arr_14 [i_7] [i_8] [i_9] [i_10] [i_10] [i_11]) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_5), (arr_10 [18U] [i_10] [14] [i_8])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_10] [i_10]))) <= (arr_30 [i_7] [6U] [(unsigned char)12])))) : ((+(((/* implicit */int) (unsigned char)116)))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            arr_40 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_20 [i_7] [i_9 - 1] [i_8] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19)))));
                            var_32 = ((/* implicit */unsigned char) ((((arr_28 [i_7 - 1]) + (2147483647))) << (((((arr_28 [i_12]) + (1339120866))) - (5)))));
                        }
                        arr_41 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((((min((-5471932122624524409LL), (arr_23 [i_7 + 1]))) + (9223372036854775807LL))) << (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3060263221081894819LL)) || (((/* implicit */_Bool) 457721404U)))))) & ((-(arr_35 [7U] [i_10] [i_10] [7U]))))));
                        /* LoopSeq 2 */
                        for (long long int i_13 = 0; i_13 < 17; i_13 += 4) 
                        {
                            var_33 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */unsigned int) -27249085)) : (max((3221225472U), (((/* implicit */unsigned int) var_1))))))));
                            var_34 = ((/* implicit */long long int) min((var_34), (((-7585204666878830789LL) - (((/* implicit */long long int) arr_18 [4LL] [12U] [i_9] [4LL] [i_9] [i_9] [(unsigned char)18]))))));
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) min((arr_12 [(signed char)18] [(signed char)11] [i_9] [0LL]), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)73))) - (((3060263221081894819LL) << (((((arr_16 [i_10] [i_8] [i_10] [i_10]) + (647264462))) - (48))))))))))));
                            var_36 = ((/* implicit */unsigned int) arr_23 [i_8]);
                            var_37 = ((/* implicit */int) ((((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)110))))) / (arr_30 [i_7] [i_7] [i_7]))) + (((((/* implicit */_Bool) 457721406U)) ? (arr_4 [i_9 + 1] [i_9 + 1]) : (arr_4 [i_9 - 1] [i_9 + 2])))));
                        }
                        for (unsigned int i_14 = 2; i_14 < 16; i_14 += 1) 
                        {
                            arr_47 [2LL] [13] [12U] [(unsigned char)12] [i_10] [13LL] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_12 [i_8 - 2] [i_7 - 1] [10LL] [i_7])) ? (arr_12 [i_8 - 2] [i_7 - 1] [i_7] [i_7]) : (arr_12 [i_8 + 1] [i_7 - 1] [i_7 + 1] [i_7]))));
                            var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_7 + 1] [i_7 + 1]))) : (((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7] [i_10])) ? (arr_29 [i_8] [i_8] [i_9]) : (((/* implicit */long long int) arr_35 [5LL] [i_7] [i_8] [i_7]))))))) ? (((arr_13 [i_10] [i_8] [i_8] [i_10]) + (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) ((arr_35 [i_7 - 1] [i_7 - 1] [i_9] [i_10]) - (arr_0 [i_14 - 1] [20])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-58))) : ((~(arr_24 [i_7])))))));
                        }
                    }
                } 
            } 
        } 
        var_39 *= ((/* implicit */signed char) ((((/* implicit */int) var_1)) + ((+(((/* implicit */int) (unsigned char)4))))));
        var_40 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_7] [i_7] [i_7])) / (((/* implicit */int) arr_42 [i_7] [i_7] [i_7 + 1] [i_7] [i_7]))))) / (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (570221955U) : (3365366382U))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) 443191778U))) - (((/* implicit */int) (unsigned char)173)))))));
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 13; i_15 += 2) 
    {
        var_41 = ((/* implicit */long long int) ((int) arr_4 [i_15] [i_15]));
        arr_52 [i_15] [i_15] = ((/* implicit */unsigned char) arr_12 [i_15] [(unsigned char)10] [0LL] [(unsigned char)4]);
    }
}
