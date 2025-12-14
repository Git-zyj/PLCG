/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159210
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) var_8);
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0 + 1]);
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0])) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 + 1]))))))) ? (((/* implicit */int) max((var_7), (arr_3 [i_0 + 1])))) : (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_1 + 2])) > (((/* implicit */int) var_9))))), (arr_4 [i_0 + 1]))))));
            var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (min((var_12), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_16)), (arr_3 [i_0 - 1])))) : (((/* implicit */int) max((var_9), (((/* implicit */short) arr_0 [i_0 + 1])))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            arr_14 [i_4] [(_Bool)1] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_7 [i_0] [i_0 + 1])), (arr_5 [i_0 + 1]))) & (min((arr_5 [i_0 + 1]), (((/* implicit */unsigned int) arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_4 + 1] [i_4 + 1]))))));
                            var_21 = ((/* implicit */unsigned short) var_15);
                            arr_15 [i_4] = ((/* implicit */int) ((min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))) ? (((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) arr_10 [5LL] [i_2] [19LL] [i_4 + 1] [(short)21])), (arr_8 [i_2] [i_2] [i_2] [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))))) : (max((((/* implicit */unsigned long long int) arr_7 [i_5] [i_3])), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_5)))))));
                            arr_16 [i_4] = ((/* implicit */unsigned short) arr_1 [i_3]);
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            arr_19 [15U] [i_4 + 1] [i_4] [(short)17] [i_4] [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_11 [i_4 + 1]), (arr_11 [i_4 + 1])))) ? (min((((/* implicit */unsigned long long int) 3802169881U)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                            arr_20 [i_0] [i_0] [i_0] [i_4] [(short)12] [(unsigned short)13] [i_4 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_4 + 1] [i_0 - 1] [i_0] [i_0 - 1]))) * (var_5)))) ? (((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 + 1]))))) : (max((((/* implicit */unsigned long long int) -921054446)), (0ULL)))));
                        }
                        for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            arr_23 [(_Bool)1] [i_2] [i_4] [i_4] = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)-12)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60999))))), (((18446744073709551588ULL) + (var_5)))));
                            var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_11 [i_2])), (arr_9 [i_3] [i_2] [i_4] [i_0] [i_4]))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_17 [i_7] [i_4] [i_3] [i_2] [i_0] [i_0])), (var_11))))))) ? (((/* implicit */unsigned long long int) ((min((var_2), (((/* implicit */unsigned int) arr_17 [i_7] [i_2] [i_0] [i_4] [i_0] [7])))) + (((/* implicit */unsigned int) max((-1), (((/* implicit */int) (signed char)-1)))))))) : (min((arr_13 [5LL] [i_7] [(unsigned short)21] [i_3] [5LL] [5LL]), (arr_13 [i_3] [i_2] [i_3] [i_3] [i_7] [6LL])))));
                            arr_24 [i_4] [21LL] [(unsigned short)14] [i_0 - 1] [i_7] = ((((((/* implicit */_Bool) max((((/* implicit */short) arr_4 [(signed char)9])), (var_1)))) || (((/* implicit */_Bool) arr_1 [i_0 + 1])))) ? (((((/* implicit */_Bool) var_6)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31080)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) arr_10 [(unsigned char)13] [(signed char)8] [(signed char)8] [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_2])) + (2147483647))) >> (((var_0) - (1492206776)))))));
                        }
                        for (int i_8 = 4; i_8 < 22; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) var_11);
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_25 [i_4] [21ULL] [i_4 + 1] [17U])), (min((((/* implicit */int) var_7)), (var_15)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_8 - 1] [i_3] [i_4 + 1] [i_8] [i_4])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_8 [i_0] [(_Bool)0] [i_0] [i_8]))) : (((/* implicit */long long int) var_15))))));
                        }
                        arr_28 [i_4] [i_2] [i_3] [14ULL] [i_0 - 1] = ((/* implicit */_Bool) var_17);
                    }
                } 
            } 
        } 
        arr_29 [i_0 - 1] = ((/* implicit */unsigned short) var_0);
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        arr_32 [i_9] [i_9] |= ((/* implicit */unsigned char) arr_4 [(unsigned short)19]);
        /* LoopSeq 1 */
        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_21 [i_10] [i_10] [i_9] [i_10]))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_13 [i_10] [i_10] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) arr_9 [(short)4] [i_10] [i_10] [i_10] [i_9])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_9] [i_9] [i_9] [i_10]))));
            arr_35 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_9] [i_9] [(unsigned short)17] [i_10] [i_9] [i_10])) | (((/* implicit */int) arr_17 [i_9] [i_10] [i_9] [i_10] [i_9] [i_9]))));
        }
        arr_36 [i_9] = ((((/* implicit */_Bool) arr_18 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (arr_18 [i_9] [i_9] [i_9] [21LL] [i_9]) : (arr_18 [i_9] [i_9] [i_9] [19ULL] [i_9]));
        var_26 = ((((/* implicit */int) arr_7 [8LL] [i_9])) << (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4)))));
        var_27 = ((/* implicit */unsigned short) var_5);
    }
    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) 
    {
        arr_41 [i_11] [i_11] = ((/* implicit */int) arr_21 [i_11] [i_11] [i_11] [i_11]);
        arr_42 [i_11] [i_11] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_17 [i_11] [i_11] [i_11] [(_Bool)1] [i_11] [i_11])), (((((/* implicit */_Bool) arr_11 [i_11])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_13 = 3; i_13 < 19; i_13 += 3) 
        {
            for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 3) 
                {
                    {
                        var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_15)) : (max((((((/* implicit */_Bool) arr_45 [i_12])) ? (arr_8 [(unsigned short)1] [i_14] [i_13] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) arr_21 [i_14] [i_13 - 1] [i_13] [i_15]))))));
                        arr_57 [i_15] [i_14] [i_14] [i_13] [i_12] [i_12] = max((var_12), (((/* implicit */long long int) min((((/* implicit */int) min((var_7), (arr_44 [13LL])))), (max((arr_18 [i_12] [i_12] [i_12] [i_12] [11ULL]), (((/* implicit */int) var_7))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            for (long long int i_17 = 0; i_17 < 23; i_17 += 3) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        arr_65 [i_16] [i_16] [i_17] = ((/* implicit */int) min((((/* implicit */unsigned int) var_11)), (min((min((((/* implicit */unsigned int) var_14)), (arr_5 [i_18]))), (((((/* implicit */_Bool) var_6)) ? (arr_5 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                        var_29 -= ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_44 [i_16 - 1]), (((/* implicit */unsigned short) min((arr_25 [i_12] [i_17] [i_16] [i_12]), (((/* implicit */unsigned char) var_16)))))))) <= (var_0)));
                        arr_66 [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_18] [i_18] [(unsigned char)12] [i_16] [i_16 - 1] [i_12])) ? (((/* implicit */int) arr_50 [(signed char)8] [i_16] [i_17] [11LL])) : (((/* implicit */int) arr_11 [19ULL]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_19 = 3; i_19 < 22; i_19 += 3) 
        {
            for (unsigned int i_20 = 2; i_20 < 22; i_20 += 4) 
            {
                {
                    arr_72 [i_12] [i_12] = var_13;
                    var_30 = ((/* implicit */int) max((((/* implicit */unsigned int) max((((/* implicit */int) arr_70 [21LL])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_26 [i_12] [i_19] [(_Bool)1] [i_20]))))))), (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_11)) : (arr_5 [i_12]))) % (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 23; i_21 += 4) 
                    {
                        for (signed char i_22 = 0; i_22 < 23; i_22 += 2) 
                        {
                            {
                                arr_80 [i_12] [i_12] [i_20] [(_Bool)1] [i_21] [9ULL] [i_22] = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_13)), (min((var_12), (((/* implicit */long long int) ((arr_0 [i_21]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_76 [i_12] [i_12] [14] [i_12] [i_12])))))))));
                                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (min((var_6), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                                arr_81 [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_78 [i_19 + 1] [i_19 - 3] [i_19 - 2] [i_19 - 2])) ? (((((/* implicit */_Bool) arr_59 [i_20 - 2] [i_19 - 3] [i_19 - 1])) ? (((/* implicit */int) arr_59 [i_20 - 2] [i_19 - 2] [i_19 - 3])) : (((/* implicit */int) arr_59 [i_20 - 2] [i_19 - 2] [i_19 - 2])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_46 [i_20 - 1])) : (var_11)))));
                                arr_82 [i_12] [i_19 - 2] [i_20 + 1] [i_21] [i_19] = ((/* implicit */unsigned long long int) max((((arr_18 [i_20 - 2] [i_20 - 2] [i_20 - 2] [i_20] [i_20 + 1]) | (arr_18 [i_20] [i_20 + 1] [i_20 - 1] [8ULL] [10ULL]))), (max((arr_18 [i_20] [i_20 - 1] [i_20 - 1] [i_20] [22]), (arr_18 [i_20] [i_20 - 1] [i_20 + 1] [i_20 + 1] [i_20 - 1])))));
                            }
                        } 
                    } 
                    arr_83 [5ULL] [i_19] [5ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_25 [i_12] [i_19] [i_19] [i_19])), (((7805018534813925457ULL) + (18446744073709551597ULL)))))) ? (((/* implicit */int) arr_26 [i_12] [i_19] [i_19] [i_12])) : (((((/* implicit */_Bool) (unsigned short)34454)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) arr_54 [i_20 - 1]))))));
                    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) min((18446744073709551597ULL), (0ULL))))));
                }
            } 
        } 
        arr_84 [i_12] = ((/* implicit */signed char) arr_21 [i_12] [i_12] [i_12] [i_12]);
    }
    /* vectorizable */
    for (unsigned int i_23 = 2; i_23 < 18; i_23 += 1) 
    {
        arr_87 [i_23 + 3] [i_23 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_0)) : (var_5)));
        arr_88 [i_23] = ((((/* implicit */int) (unsigned char)174)) - (18));
        var_33 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) var_10)) - (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_26 [i_23] [i_23] [0ULL] [(short)2])) ? (((/* implicit */int) arr_50 [i_23] [i_23 + 1] [i_23] [6LL])) : (((/* implicit */int) var_3))))));
        /* LoopSeq 1 */
        for (unsigned char i_24 = 2; i_24 < 18; i_24 += 3) 
        {
            arr_91 [i_23] [i_24] [i_23] = ((/* implicit */unsigned char) ((arr_0 [i_23 + 1]) ? (arr_5 [i_24 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_78 [i_23 + 2] [i_23 + 2] [i_23 - 1] [i_23 - 2])))));
            arr_92 [(signed char)9] = ((/* implicit */unsigned short) arr_6 [i_24 + 3] [i_23]);
            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_24 + 3] [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24 + 2])) ? (((arr_86 [i_23 - 2] [i_23 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(short)22] [i_23] [i_24] [(unsigned short)18] [(short)22]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_23] [i_24 + 2]))))))));
            arr_93 [i_23] [i_23 + 1] [i_23] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_24 - 1] [i_24] [i_23 - 1] [i_23 + 1])) ? (arr_8 [i_24 - 2] [i_24] [i_24 - 2] [i_23 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_24 + 1] [18LL] [i_24 + 3])))));
        }
    }
    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) var_8))));
}
