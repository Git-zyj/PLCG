/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107346
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_10 = ((/* implicit */short) min((((int) arr_0 [i_0 - 2])), ((~(((/* implicit */int) arr_1 [i_0 + 2]))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)11899)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 3]))) : (602686676U))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)32512)) / (((/* implicit */int) arr_0 [i_0])))))))) ? (max((((/* implicit */long long int) (short)32539)), (6759706302508603392LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2505693723960652107LL)))))))))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) arr_5 [i_2]);
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            {
                                var_13 |= 3765107739510265176ULL;
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_5 [i_4]))));
                                var_15 |= (short)5813;
                            }
                        } 
                    } 
                    arr_15 [i_1] |= ((/* implicit */unsigned short) arr_13 [i_1] [i_2 + 1] [(short)2] [i_3] [i_3]);
                    arr_16 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((int) (short)2378));
                }
            } 
        } 
        arr_17 [i_1] [i_1] = ((/* implicit */short) var_3);
        var_16 |= max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 16777215))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_11 [i_1] [i_1] [i_1] [(unsigned short)4] [i_1])) : (var_3)))))));
    }
    for (short i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((arr_8 [i_6] [i_6] [i_6] [i_6]) & (arr_8 [i_6] [i_6] [i_6] [i_6])))), (min((((((/* implicit */_Bool) arr_4 [i_6] [i_6])) ? (arr_5 [i_6]) : (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) arr_19 [i_6] [i_6]))))));
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_18 = ((/* implicit */short) (+(arr_10 [i_6] [i_7] [7U])));
            var_19 |= ((/* implicit */unsigned short) arr_10 [i_6] [9ULL] [i_6]);
        }
        var_20 = ((/* implicit */short) max((var_20), ((short)-32512)));
        /* LoopNest 3 */
        for (unsigned short i_8 = 1; i_8 < 11; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    {
                        var_21 |= ((/* implicit */long long int) ((short) ((arr_30 [i_6]) | (arr_30 [i_8 - 1]))));
                        var_22 = ((/* implicit */short) max((max(((-(14039945281304868255ULL))), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) (short)-31030))));
                        var_23 = ((/* implicit */int) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    var_24 = min((((long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_9))))), (var_7));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) arr_7 [i_11] [i_11]);
        arr_35 [0U] |= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_12 [2U])) ? (var_6) : (var_6))));
        /* LoopSeq 1 */
        for (unsigned short i_12 = 2; i_12 < 12; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_13 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_12 + 1] [i_12 - 2] [i_12 - 2] [i_12] [i_12 - 2]))) : (3765107739510265169ULL))))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (var_8)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_15 = 0; i_15 < 13; i_15 += 3) /* same iter space */
            {
                arr_48 [i_11] [i_11] [i_12] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1575250652U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30756)) ? (17439027178176489742ULL) : (((/* implicit */unsigned long long int) 5468190559621034507LL)))))));
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 33554431ULL)) ? (2505693723960652096LL) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_11])))));
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    for (long long int i_17 = 0; i_17 < 13; i_17 += 1) 
                    {
                        {
                            arr_54 [i_11] [i_12 + 1] [i_16] [8] [i_16] |= ((/* implicit */unsigned int) ((short) arr_28 [i_12 + 1] [i_12 + 1] [i_11] [i_11]));
                            arr_55 [i_17] [i_11] [i_15] [i_15] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((unsigned int) -1));
                            var_29 = ((/* implicit */unsigned int) ((unsigned short) (short)1413));
                        }
                    } 
                } 
            }
            for (short i_18 = 0; i_18 < 13; i_18 += 3) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned short) arr_7 [i_11] [i_11]);
                var_31 |= ((/* implicit */unsigned int) ((int) arr_24 [i_12 - 2]));
                /* LoopSeq 4 */
                for (unsigned int i_19 = 3; i_19 < 12; i_19 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_20 = 1; i_20 < 9; i_20 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_18] [i_19 - 2] [i_19] [i_19] [i_20 - 1] [i_18])))));
                        var_33 = ((/* implicit */unsigned int) ((arr_49 [i_20 + 3] [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_11]) > (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    }
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) 21))));
                }
                for (short i_21 = 0; i_21 < 13; i_21 += 4) 
                {
                    var_35 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-5813)) != (var_2))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_34 [i_21]))))) : (arr_61 [i_12] [i_12] [i_11] [i_12] [i_12] [i_12] [i_12 - 1])));
                    arr_67 [i_11] [i_11] = ((/* implicit */unsigned short) ((arr_26 [i_12 - 2] [i_12 - 1]) != (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_12 + 1] [i_11])))));
                    var_36 = var_1;
                }
                for (int i_22 = 0; i_22 < 13; i_22 += 3) 
                {
                    var_37 |= ((/* implicit */long long int) 1826772114);
                    arr_71 [i_11] [(unsigned short)7] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (-(arr_50 [i_11])))) : (((((/* implicit */_Bool) 949052314U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_11] [i_12] [i_12] [i_11]))) : (18446744073675997168ULL)))));
                    arr_72 [i_12] |= ((/* implicit */short) var_9);
                }
                for (short i_23 = 2; i_23 < 10; i_23 += 2) 
                {
                    arr_77 [i_11] [i_12] [i_23] [i_18] [i_23] [i_23 - 2] |= ((/* implicit */unsigned short) ((unsigned int) arr_53 [i_12] [i_12 - 1] [i_23 + 3] [i_23] [i_23] [i_23 + 2]));
                    var_38 |= ((/* implicit */unsigned short) (-(var_8)));
                    var_39 = ((/* implicit */unsigned int) ((short) var_5));
                }
                /* LoopSeq 2 */
                for (unsigned int i_24 = 0; i_24 < 13; i_24 += 3) /* same iter space */
                {
                    arr_80 [i_11] [i_12] [i_11] [i_24] [i_24] [i_24] = ((/* implicit */short) (-(var_3)));
                    arr_81 [i_12] [i_12] [i_12] [i_12] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_12 - 1] [i_12 + 1])) / (var_2)));
                    var_40 |= ((/* implicit */unsigned int) var_2);
                }
                for (unsigned int i_25 = 0; i_25 < 13; i_25 += 3) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 22)) ? (2719716663U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7904)))));
                    var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((short) arr_82 [i_11] [i_11] [i_18] [i_25])))));
                }
                /* LoopNest 2 */
                for (short i_26 = 0; i_26 < 13; i_26 += 1) 
                {
                    for (int i_27 = 1; i_27 < 9; i_27 += 2) 
                    {
                        {
                            arr_90 [i_11] [i_11] [i_11] [(short)2] [i_12] [i_11] [i_11] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_61 [i_11] [i_27 + 4] [i_12] [i_11] [i_27 + 4] [i_12] [i_27]))));
                            var_43 |= ((/* implicit */int) 10128635388148988576ULL);
                        }
                    } 
                } 
            }
        }
    }
    for (short i_28 = 0; i_28 < 24; i_28 += 4) 
    {
        arr_93 [(short)15] = ((/* implicit */short) var_7);
        var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) var_7))));
    }
}
