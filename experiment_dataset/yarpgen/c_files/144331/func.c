/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144331
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
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0 - 1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */int) (unsigned short)23291)) - (arr_1 [i_0 - 3]))) : (((/* implicit */int) arr_2 [1U] [4LL] [15]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42245))) : (2477753861U))) & (min((1817213455U), (((/* implicit */unsigned int) arr_2 [i_2 + 1] [i_1] [i_0 - 1]))))));
                                arr_13 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_2] = ((/* implicit */int) (unsigned short)42255);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 - 1]))), (max((((/* implicit */int) arr_4 [i_0] [i_1])), (var_4))))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_0 [i_0]) - (var_9)))) + (((arr_15 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0 - 2] [i_0])))))));
                        var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) ((arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2 + 1]) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_2 + 1])) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_2 + 1]))))) ? (((arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_2 + 1]) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_2 + 1])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_2 + 1])))) : (((-1) | (((/* implicit */int) arr_9 [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_2 + 1]))))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        arr_21 [(_Bool)1] [(_Bool)1] [13] [i_2] [i_1] [i_0 - 3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1817213450U)) ? (7427621803201867035ULL) : (((/* implicit */unsigned long long int) 2139095040U))))) ? (min((min((((/* implicit */unsigned long long int) var_18)), (2084540708206096538ULL))), (((((/* implicit */_Bool) arr_15 [i_0 - 1] [(signed char)9] [i_1] [(signed char)9] [i_6] [i_6])) ? (arr_15 [i_0 - 1] [i_0] [i_1] [8] [i_2] [i_6]) : (((/* implicit */unsigned long long int) arr_8 [i_6] [i_2 + 1] [i_1] [i_0] [i_0] [i_0 - 3])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) * (var_5)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 1; i_7 < 19; i_7 += 1) 
                        {
                            arr_24 [i_7] [14] [i_7] = ((/* implicit */signed char) arr_9 [i_0 - 2] [i_1] [i_2 + 1] [i_6] [i_7]);
                            var_24 -= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0 + 1])) && (((/* implicit */_Bool) arr_14 [i_0 - 3]))))), (((((/* implicit */_Bool) arr_14 [i_0 - 2])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)96)))))));
                            var_25 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [14] [i_6] [i_6] [i_2] [i_1] [i_0 + 1]))) - (var_15)))) ? (((((/* implicit */int) arr_23 [i_7 + 2] [(_Bool)1] [(_Bool)1] [i_1])) + (((/* implicit */int) arr_22 [i_6] [i_6] [i_2] [i_1] [i_1] [(short)11])))) : (max((-3), (-2)))))) + (var_11)));
                        }
                        for (unsigned int i_8 = 2; i_8 < 18; i_8 += 3) 
                        {
                            arr_27 [i_8] [i_8] [i_2] [i_6] [i_0] [i_8 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_8 [i_8 + 1] [i_6] [i_2 + 1] [(signed char)9] [(_Bool)1] [i_0 - 1])) | (((((/* implicit */_Bool) arr_26 [i_8] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) var_5)) : (6968658584937782873ULL)))))) ? (((unsigned long long int) arr_25 [i_0 - 3] [i_0 - 3] [i_8] [i_8 + 1] [i_8] [i_8])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_11 [i_2 + 1] [i_8 + 2] [i_0 + 1])) <= (((((/* implicit */unsigned long long int) -1)) | (11478085488771768734ULL)))))))));
                            arr_28 [i_8] [(signed char)21] [i_2] [i_6] [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_8 + 2] [i_2 + 1] [i_0 - 1])) ? (arr_26 [i_8 - 2] [i_2 + 1] [i_0 - 2]) : (arr_26 [i_8 - 2] [i_2 + 1] [i_0 - 3])));
                            var_26 = ((((/* implicit */unsigned long long int) 1LL)) | (2084540708206096530ULL));
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (((arr_17 [i_0 - 3] [i_1] [i_2 + 1] [i_6] [i_8]) - (-1821278145))))))));
                        }
                        arr_29 [i_0] [i_1] [i_1] [i_2] [12] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)48054))));
                        arr_30 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)55)) | (((/* implicit */int) (signed char)-57)))) <= (((/* implicit */int) (_Bool)1))));
                    }
                    for (long long int i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_12) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)416))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6376528702947646253ULL)) ? (((/* implicit */int) arr_2 [(signed char)20] [i_1] [i_2])) : (-1))))))) ? (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [i_9] [i_2] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0 - 2] [(signed char)2])))) | (arr_19 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]))) : (((/* implicit */int) var_1))));
                        arr_33 [i_2] = ((((/* implicit */int) arr_32 [i_0] [i_1] [i_2 + 1] [i_0])) - (((/* implicit */int) max((arr_25 [i_0 + 1] [i_0] [i_1] [i_2] [i_0 + 1] [i_9]), (((/* implicit */unsigned short) arr_22 [i_2 + 1] [i_1] [i_0 - 2] [7] [i_0 - 2] [i_2]))))));
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_0] [16] [i_2] [i_0 - 1])) ? (((/* implicit */int) max((arr_23 [i_0] [6LL] [i_2 + 1] [i_0 - 1]), (arr_23 [(_Bool)1] [(short)6] [i_1] [i_0 - 1])))) : (((((/* implicit */_Bool) arr_23 [i_0] [(signed char)14] [i_2 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_23 [i_0] [(signed char)16] [i_2] [i_0 - 1])) : (((/* implicit */int) arr_23 [i_0] [(signed char)2] [i_2] [i_0 - 1])))))))));
                        var_30 = ((/* implicit */int) (+(((((/* implicit */unsigned int) ((int) -12))) / (127U)))));
                    }
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */int) max((var_0), (((/* implicit */unsigned long long int) ((signed char) arr_11 [i_2] [i_1] [i_0 - 2])))));
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */long long int) ((int) var_1))) | (((long long int) arr_7 [i_0] [17U] [i_0 - 1] [i_2 + 1] [i_2 + 1] [i_10])))))));
                    }
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2 + 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_10))))))) : (var_8)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 1) 
    {
        for (unsigned int i_12 = 1; i_12 < 16; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        var_34 *= ((/* implicit */long long int) arr_5 [i_14] [i_12]);
                        var_35 &= ((/* implicit */unsigned int) 1999750028);
                        var_36 = ((/* implicit */unsigned int) arr_19 [i_11] [i_12] [i_12] [i_13] [i_13] [i_14]);
                    }
                    var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_32 [i_11] [(signed char)15] [i_11] [i_11]))) ? (((/* implicit */unsigned long long int) max((arr_3 [i_12 + 3] [i_12] [i_12 + 2]), (((/* implicit */int) arr_32 [i_11] [i_12] [i_11] [i_12]))))) : (((((/* implicit */_Bool) arr_3 [i_11] [(unsigned short)17] [i_13])) ? (arr_44 [i_11] [i_11]) : (((/* implicit */unsigned long long int) var_14)))))))));
                    arr_47 [i_11] [i_13] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */int) arr_12 [13] [13] [i_13] [i_13] [i_12])), (1460846273)))) ? (((/* implicit */int) arr_2 [i_13] [i_12 - 1] [i_12 - 1])) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_18)))))), (max((arr_3 [i_13] [i_12 + 1] [i_11]), ((~(((/* implicit */int) arr_23 [i_13] [i_11] [i_13] [i_11]))))))));
                    arr_48 [i_11] [i_11] [i_11] = 2147483647;
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        for (int i_16 = 0; i_16 < 19; i_16 += 1) 
                        {
                            {
                                arr_55 [i_11] [i_12 + 3] [i_15] = ((/* implicit */long long int) ((arr_49 [i_13] [i_11] [i_12 - 1] [i_13] [i_11] [i_11]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (signed char)60)) + (((/* implicit */int) arr_9 [i_11] [i_12] [i_13] [i_15] [i_16])))) <= (arr_11 [i_11] [i_12 - 1] [17])))))));
                                var_38 += ((/* implicit */signed char) ((((((var_12) ? (var_6) : (((/* implicit */int) var_19)))) <= (((/* implicit */int) max((((/* implicit */signed char) arr_5 [i_16] [i_15])), (var_10)))))) ? (((((arr_11 [i_16] [i_11] [i_11]) + (arr_1 [i_11]))) | (((/* implicit */int) arr_10 [i_16] [i_15] [i_13] [i_12 + 3] [i_11])))) : (min((((int) var_11)), (((int) arr_4 [i_11] [i_11]))))));
                                arr_56 [i_16] [i_11] [i_11] [13LL] = ((/* implicit */long long int) ((((int) ((((/* implicit */_Bool) arr_34 [i_12] [18] [i_16])) ? (arr_37 [i_11] [i_12] [i_12] [i_15]) : (((/* implicit */unsigned int) arr_51 [i_15] [14] [i_12 + 2] [i_11]))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483647)) ? (1950167819) : (((/* implicit */int) (short)-401))))) ? (1962780678) : (((/* implicit */int) (unsigned short)30355))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
