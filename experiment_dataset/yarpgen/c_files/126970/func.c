/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126970
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
    var_10 = ((/* implicit */long long int) var_4);
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) var_6)))))) / (var_0)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    arr_8 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) -954614700)) ? (((/* implicit */unsigned long long int) 287948901175001088LL)) : (16100810141416435983ULL)))))));
                    arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)204)) - (((/* implicit */int) (unsigned char)204))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_15 [i_2] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */long long int) (-(arr_12 [i_3] [i_3] [i_0] [i_3] [i_4])));
                                arr_16 [i_0] [i_0] [i_2] [i_1] [i_4 + 1] [i_2] = ((/* implicit */long long int) arr_14 [i_2] [i_4 + 1] [i_4 - 1] [i_2] [i_2]);
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */int) (unsigned char)211);
                                var_12 = ((/* implicit */unsigned long long int) ((((arr_14 [i_2] [i_2] [i_2] [i_2] [i_2]) && (((/* implicit */_Bool) 954614702)))) && (((/* implicit */_Bool) -1))));
                                var_13 = ((/* implicit */long long int) arr_13 [i_4 + 1] [i_2] [i_1]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_5]);
                        var_15 = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [14ULL])) ? (((/* implicit */unsigned long long int) 954614703)) : (var_3))))) << ((((-(arr_1 [i_0] [i_1]))) - (15030465515876693886ULL)))));
                        var_16 = ((/* implicit */unsigned long long int) var_9);
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min((5833004927668213086LL), (2758679130781181887LL))))));
                    }
                }
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    arr_24 [i_6] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7460806725864966854ULL)) ? (((long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) 954614702)) : (3154109040U)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5)))));
                    var_18 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(var_0)))) / (var_3)));
                    var_19 = ((((/* implicit */_Bool) 7352825202434724346ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))) : (2758679130781181887LL));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        arr_27 [i_0] [i_1 + 1] [i_1 + 1] [i_0] = ((/* implicit */long long int) (-(min((arr_26 [i_1 - 1] [i_1]), (((/* implicit */unsigned long long int) arr_18 [i_1 + 1] [i_6] [i_6] [i_7] [i_1 + 1] [i_6]))))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))))));
                        var_21 &= arr_14 [i_6] [10ULL] [i_6] [i_6] [i_6];
                    }
                    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    var_23 = ((/* implicit */signed char) min((var_23), (var_7)));
                    var_24 = (((~(3154109066U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((arr_29 [i_0] [i_8]) < (0LL))))));
                    arr_31 [i_0] [i_8] [i_8] = ((/* implicit */long long int) (~(var_1)));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 2; i_9 < 19; i_9 += 3) 
                    {
                        arr_35 [6LL] [i_8] [i_1] [6LL] [6LL] &= ((/* implicit */unsigned char) ((int) 0U));
                        var_25 = ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */unsigned long long int) ((long long int) 0ULL))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [16ULL] [i_0] [i_0]))) : (var_3))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) (-(((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_22 [i_0] [i_0] [i_10] [i_9])))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-556532846)))) ? (((/* implicit */unsigned long long int) 1522396778U)) : (var_3)));
                        }
                        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            var_28 -= (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_4))))));
                            arr_43 [i_8] [14] [i_8] [i_1] [i_1] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (-(0ULL))))));
                        }
                    }
                }
                var_29 = min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) || (((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_42 [i_0] [10LL] [i_0] [10LL] [i_0])))))));
                var_30 = ((/* implicit */unsigned char) (~(arr_40 [i_0] [i_0] [16LL] [i_1] [i_1 + 1] [i_0])));
                /* LoopSeq 4 */
                for (long long int i_12 = 1; i_12 < 20; i_12 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 2; i_13 < 20; i_13 += 1) 
                    {
                        for (int i_14 = 3; i_14 < 18; i_14 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned long long int) -695914676);
                                arr_52 [i_0] [i_1] [i_12 + 1] [i_12 + 1] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-2147483647 - 1))) - (1044837652971729650LL)));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (((_Bool)1) ? (2147483640) : (((/* implicit */int) (signed char)-108)))))));
                    arr_53 [i_0] [i_12] = ((/* implicit */int) arr_45 [i_12] [i_1] [i_12]);
                    var_33 = ((/* implicit */long long int) var_1);
                    var_34 = ((/* implicit */unsigned long long int) ((int) var_4));
                }
                for (long long int i_15 = 1; i_15 < 20; i_15 += 2) /* same iter space */
                {
                    arr_56 [i_15] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1610612736U)), (959989124032397460ULL)));
                    var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [5ULL] [i_15] [i_0] [i_1] [i_0] [i_0]))))) ? (((((/* implicit */unsigned long long int) -9)) + (9657205767902265834ULL))) : (((/* implicit */unsigned long long int) 2250700302057472LL)))), ((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_15] [i_0]))) : (var_3))))))))));
                    arr_57 [i_0] [i_0] [i_1] [i_15] = ((/* implicit */unsigned char) arr_6 [i_1] [i_1] [i_15]);
                }
                /* vectorizable */
                for (long long int i_16 = 1; i_16 < 20; i_16 += 2) /* same iter space */
                {
                    var_36 ^= ((/* implicit */int) arr_34 [i_1 - 1] [(_Bool)1] [i_1 + 1] [(_Bool)1]);
                    var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (+(var_2))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 1; i_17 < 17; i_17 += 1) 
                    {
                        var_38 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_1)) ? (18137267285381574732ULL) : (arr_36 [i_0] [i_0] [i_16] [i_17]))));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_1 - 1] [i_1] [i_17 + 4])) != (((/* implicit */int) arr_32 [i_17] [i_16 - 1] [i_1] [i_1] [i_17]))));
                        arr_66 [i_17] [i_17] [i_16 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) / (arr_13 [i_17 + 4] [i_16 + 1] [i_1 + 1])));
                        var_40 = ((/* implicit */long long int) max((var_40), (((long long int) ((arr_21 [i_17] [17ULL] [(signed char)6]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_18 = 0; i_18 < 21; i_18 += 3) 
                    {
                        var_41 -= ((/* implicit */unsigned char) arr_44 [10] [i_1] [i_16 - 1] [(signed char)18]);
                        arr_70 [i_0] = ((/* implicit */unsigned long long int) ((long long int) arr_69 [0ULL] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_19 = 0; i_19 < 21; i_19 += 1) 
                    {
                        var_42 = ((/* implicit */long long int) ((((/* implicit */int) arr_65 [i_19] [i_19] [7LL] [i_0] [i_1 - 1] [i_0])) & (((/* implicit */int) var_7))));
                        var_43 += ((/* implicit */unsigned int) var_8);
                        /* LoopSeq 1 */
                        for (int i_20 = 0; i_20 < 21; i_20 += 3) 
                        {
                            arr_77 [i_0] [i_1] [i_19] [i_1] [i_20] = (~(var_2));
                            var_44 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (474223084) : (((/* implicit */int) (signed char)-101))));
                            var_45 = ((/* implicit */int) ((arr_11 [i_16 - 1] [i_16 - 1] [i_16] [i_16]) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)214))))) : ((~(var_3)))));
                            var_46 = ((/* implicit */_Bool) var_2);
                            var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */long long int) var_9)) >= (var_6)))))));
                        }
                    }
                }
                for (unsigned char i_21 = 0; i_21 < 21; i_21 += 2) 
                {
                    var_48 = ((/* implicit */long long int) (+(max((arr_5 [i_1]), (1073741823ULL)))));
                    var_49 = ((/* implicit */int) ((unsigned int) min((((_Bool) arr_67 [i_0] [i_0] [i_1] [i_1] [i_0] [i_21])), (((_Bool) var_1)))));
                }
                /* LoopNest 2 */
                for (unsigned int i_22 = 0; i_22 < 21; i_22 += 3) 
                {
                    for (long long int i_23 = 0; i_23 < 21; i_23 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_24 = 0; i_24 < 21; i_24 += 2) 
                            {
                                arr_89 [i_24] [i_23] [i_23] [i_23] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_60 [i_0] [i_1])) - (((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (5099603476680900936LL)))) ? (min((var_2), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((0LL) >> (((((/* implicit */int) (signed char)-64)) + (80))))))))));
                                var_50 = ((/* implicit */unsigned long long int) ((signed char) ((min((var_1), (((/* implicit */unsigned long long int) var_5)))) << (((/* implicit */int) (_Bool)1)))));
                                var_51 ^= ((/* implicit */_Bool) min((((long long int) ((((/* implicit */int) arr_23 [i_0] [i_1 + 1] [i_23])) % (((/* implicit */int) arr_87 [i_0] [i_24] [i_22] [i_22] [i_23] [i_24] [i_24]))))), (max((((/* implicit */long long int) arr_65 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])), (var_0)))));
                                arr_90 [i_24] [i_1 + 1] [i_23] [i_23] [i_1 + 1] [i_1] [(unsigned char)15] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (-2147483647 - 1))))));
                            }
                            var_52 ^= ((/* implicit */signed char) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
}
