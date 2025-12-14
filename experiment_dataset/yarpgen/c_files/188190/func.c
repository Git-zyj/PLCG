/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188190
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)13136)) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]))))) - (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_4])))))));
                                arr_18 [i_2] [i_0] [i_2] [i_0] [i_2] = ((min((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) var_7)))) % (((/* implicit */int) var_8)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 3) 
                    {
                        var_14 *= ((/* implicit */short) var_10);
                        arr_21 [i_0] [(unsigned short)17] [2] [i_0] = ((/* implicit */_Bool) var_10);
                    }
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        arr_25 [i_0] [i_1] [8LL] [i_6] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((+(arr_12 [(short)12] [i_1] [i_2] [(signed char)0]))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_20 [i_6] [i_6] [(unsigned char)14] [i_6] [i_6] [i_6])), (arr_9 [i_0] [(unsigned short)10] [i_2] [i_6]))))));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((((long long int) (short)-31745)) <= (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)31745)))))))) != (((/* implicit */int) max((var_11), (arr_14 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]))))));
                    }
                    var_16 = ((/* implicit */unsigned short) max((min((arr_24 [i_0] [i_1] [i_2]), (arr_24 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned int) ((short) arr_24 [i_0] [i_1] [i_2])))));
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((((/* implicit */int) max((arr_1 [(unsigned short)20]), (arr_1 [2U])))), ((-(((/* implicit */int) (unsigned char)86)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 1; i_8 < 10; i_8 += 2) 
        {
            for (int i_9 = 1; i_9 < 9; i_9 += 3) 
            {
                {
                    arr_35 [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_9])) ? (((/* implicit */unsigned int) 860887802)) : (arr_31 [i_8 + 1])))) - (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (short)-31746)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8066989833904965510ULL))) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
                    var_18 ^= ((/* implicit */unsigned char) ((((arr_2 [(unsigned char)10]) - (arr_2 [(unsigned short)18]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                }
            } 
        } 
        arr_36 [i_7] = ((unsigned short) (-(var_12)));
    }
    for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            arr_42 [i_10] = ((/* implicit */unsigned char) max((arr_5 [i_10] [(unsigned short)18]), (((/* implicit */int) ((((/* implicit */int) min((var_7), (arr_4 [(unsigned char)10] [i_11])))) != (((/* implicit */int) var_1)))))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-31752)) != (((/* implicit */int) ((((/* implicit */int) (signed char)-126)) == (((/* implicit */int) (_Bool)0)))))));
            /* LoopSeq 1 */
            for (unsigned short i_12 = 1; i_12 < 10; i_12 += 2) 
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_13 [2ULL] [2ULL] [i_12] [2ULL] [i_12 + 2]))));
                arr_46 [i_10] [i_11] [i_11] [i_10] = ((/* implicit */_Bool) (signed char)-18);
            }
        }
        for (int i_13 = 1; i_13 < 12; i_13 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned short) (signed char)-17);
                arr_52 [i_13] [i_13 + 1] [i_13 + 1] [i_13] = ((((/* implicit */_Bool) (short)31760)) && (((/* implicit */_Bool) arr_23 [i_14 - 1] [i_14 - 1] [i_14] [i_14] [i_14 - 2])));
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_0))));
                var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [(signed char)6] [i_13 + 1] [(signed char)6] [i_13 - 1] [(signed char)6] [i_14 + 1])) * ((-(((/* implicit */int) (_Bool)1))))));
            }
            /* vectorizable */
            for (unsigned long long int i_15 = 2; i_15 < 12; i_15 += 1) /* same iter space */
            {
                arr_57 [i_10] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((arr_10 [i_10] [i_15 + 1] [i_15 + 1] [i_13 - 1]) != (arr_10 [i_10] [i_13 - 1] [i_15 - 2] [i_13 - 1])));
                arr_58 [i_13] = ((((/* implicit */int) arr_0 [i_13] [i_13])) - (arr_39 [i_13 - 1] [i_13]));
                /* LoopSeq 4 */
                for (long long int i_16 = 0; i_16 < 13; i_16 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_10] [i_16] [i_15] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((unsigned int) (unsigned short)14592))));
                    arr_61 [i_13 + 1] [(unsigned short)9] [i_13] [i_13 + 1] [i_13] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (short)32746))))));
                }
                for (long long int i_17 = 0; i_17 < 13; i_17 += 2) /* same iter space */
                {
                    arr_64 [i_10] [i_10] [i_10] [i_13] = ((/* implicit */unsigned int) ((short) (-2147483647 - 1)));
                    var_25 = ((/* implicit */signed char) arr_50 [i_10] [i_17]);
                    /* LoopSeq 3 */
                    for (signed char i_18 = 0; i_18 < 13; i_18 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) - (arr_9 [i_15 - 2] [i_13 - 1] [i_18] [i_17])));
                        arr_68 [i_10] [i_13] [i_15 + 1] [i_17] [i_18] [i_10] = ((/* implicit */_Bool) ((int) arr_41 [i_13 + 1]));
                        arr_69 [(_Bool)1] [i_13] [i_15] [i_13] [i_13] = ((/* implicit */long long int) ((unsigned short) arr_0 [i_10] [i_10]));
                        var_27 = ((/* implicit */signed char) var_7);
                    }
                    for (signed char i_19 = 0; i_19 < 13; i_19 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */int) ((signed char) arr_3 [i_13] [i_13 + 1]));
                        arr_72 [i_10] [i_10] [i_13] [i_17] [i_19] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_10] [i_15 + 1] [i_15] [i_13 + 1]))));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 2) 
                    {
                        arr_75 [i_10] [2] [i_10] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_53 [i_15 - 2] [i_13 + 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3892954507749571269ULL)) ? (var_0) : (arr_56 [i_10] [i_10] [(unsigned short)12] [i_13]))))));
                        var_29 = ((/* implicit */unsigned short) arr_51 [i_15 - 1] [i_15 - 1] [i_15 - 2]);
                        var_30 = ((/* implicit */int) ((arr_73 [i_10] [i_10] [i_13 + 1] [i_13 - 1] [i_13]) ? (((((/* implicit */unsigned long long int) arr_24 [i_13] [i_13] [i_15])) - (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        arr_76 [10U] [i_15] [10U] [i_15] [i_13] [i_15 - 2] = ((/* implicit */_Bool) arr_6 [i_10] [i_10]);
                    }
                }
                for (unsigned char i_21 = 0; i_21 < 13; i_21 += 2) 
                {
                    var_31 = ((/* implicit */int) min((var_31), (arr_39 [i_13 - 1] [i_13 + 1])));
                    var_32 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)19)) > (2147483647)));
                }
                for (unsigned char i_22 = 0; i_22 < 13; i_22 += 2) 
                {
                    arr_84 [i_13] [i_10] [i_10] [i_10] = arr_44 [i_10] [i_22];
                    arr_85 [i_22] [i_22] [i_15] [i_15 - 1] &= ((/* implicit */_Bool) arr_40 [i_10] [i_13]);
                    var_33 = ((/* implicit */int) arr_0 [i_10] [i_10]);
                    arr_86 [i_13] = var_0;
                    arr_87 [i_10] [i_13] [i_10] [i_22] [i_13] [i_15] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) & (var_9))) >> (((var_12) - (1389080406))));
                }
                var_34 = ((/* implicit */signed char) ((arr_83 [i_13 - 1] [i_13] [i_13 - 1] [i_13] [i_13]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (0ULL)));
                arr_88 [i_10] [i_10] [i_15] [i_13] = var_11;
            }
            /* LoopSeq 2 */
            for (unsigned char i_23 = 2; i_23 < 10; i_23 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_24 = 0; i_24 < 13; i_24 += 2) /* same iter space */
                {
                    arr_95 [i_10] [i_13] [i_23] = ((/* implicit */unsigned short) (~(max((((/* implicit */int) max((((/* implicit */unsigned short) (short)-1581)), (var_4)))), (((int) var_3))))));
                    arr_96 [i_10] [i_10] [i_13] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((int) min((((((/* implicit */_Bool) 1374761678)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35217))) : (var_3))), (((/* implicit */long long int) arr_47 [i_10] [i_13])))));
                }
                for (unsigned short i_25 = 0; i_25 < 13; i_25 += 2) /* same iter space */
                {
                    var_35 = ((/* implicit */short) (+(arr_55 [i_13 + 1] [i_13 + 1] [i_13 + 1])));
                    var_36 = ((/* implicit */_Bool) (short)32758);
                    arr_100 [6LL] [i_13] [i_13] [6LL] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)5914)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_2))))) : (arr_56 [i_10] [i_13] [i_13 - 1] [i_13])))));
                    arr_101 [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_63 [i_10] [i_10] [i_10] [i_25]) ^ (((/* implicit */int) (signed char)113))))) < (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_3 [i_13] [i_13])) : (14553789565959980346ULL)))))) << (((arr_7 [i_10] [i_13] [i_23]) - (16897976223615102699ULL)))));
                    arr_102 [i_13] [i_13] [i_13 - 1] [i_13 - 1] [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)5345)) == (((/* implicit */int) (unsigned char)128)))) ? (((/* implicit */int) min((arr_14 [i_13] [i_13] [i_13] [i_25] [i_23] [i_25]), (((/* implicit */unsigned short) ((short) (unsigned short)5345)))))) : (((/* implicit */int) min((arr_13 [i_13] [i_23 + 1] [i_13] [i_23] [i_23 + 1]), (arr_13 [i_13] [i_23 + 2] [i_13] [i_23 + 2] [i_23 + 3]))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */unsigned short) max((var_37), (var_7)));
                    arr_106 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_26 - 1] [i_13] [i_26 - 1] [i_26 - 1] [i_26 - 1] [i_26 - 1])) ? (arr_11 [i_26 - 1] [i_26 - 1] [i_26 - 1] [i_26 - 1] [i_26 - 1] [i_26 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_26 - 1] [i_13] [i_26 - 1] [i_26 - 1] [i_26 - 1] [i_26 - 1])))));
                }
                for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_109 [i_10] [i_13 + 1] [i_27 - 1] [i_27 - 1] [i_27 - 1] [i_13 + 1])))));
                    /* LoopSeq 3 */
                    for (short i_28 = 0; i_28 < 13; i_28 += 3) 
                    {
                        arr_113 [i_10] [i_10] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) max(((unsigned short)63319), (arr_4 [i_13] [i_13])))), (arr_53 [i_10] [i_10]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [(_Bool)1] [i_13]))))))));
                        var_39 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (short)1602))))) ? (((/* implicit */unsigned long long int) ((arr_38 [i_10]) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) arr_73 [i_10] [i_13] [i_23] [i_27] [i_13]))))) : (((((/* implicit */_Bool) arr_48 [i_13] [i_13] [i_27 - 1])) ? (arr_2 [i_13]) : (((/* implicit */unsigned long long int) 3044848177U))))))));
                        var_40 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((3092702824U) >> (((((/* implicit */int) arr_23 [i_27 - 1] [i_13 - 1] [i_23] [i_13 - 1] [7U])) - (40301))))))));
                    }
                    for (short i_29 = 2; i_29 < 9; i_29 += 3) /* same iter space */
                    {
                        arr_116 [i_13] [i_13 + 1] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) var_6);
                        arr_117 [i_13] [(unsigned short)8] = ((/* implicit */unsigned int) ((var_0) != (var_0)));
                    }
                    for (short i_30 = 2; i_30 < 9; i_30 += 3) /* same iter space */
                    {
                        var_41 *= ((/* implicit */unsigned short) arr_8 [i_23]);
                        arr_120 [i_13] [i_23] = arr_55 [i_10] [i_13 + 1] [i_27 - 1];
                    }
                    var_42 -= ((/* implicit */short) (-(max(((+(((/* implicit */int) var_7)))), (var_12)))));
                }
            }
            /* vectorizable */
            for (short i_31 = 4; i_31 < 12; i_31 += 3) 
            {
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 13; i_32 += 3) 
                {
                    for (int i_33 = 4; i_33 < 10; i_33 += 1) 
                    {
                        {
                            arr_129 [i_10] [i_13 - 1] [i_13] [i_32] [i_10] = ((unsigned short) arr_22 [i_13 - 1] [i_32] [i_33] [i_33] [i_33 + 3] [i_33]);
                            arr_130 [i_13] [i_13] [i_32] [i_33 + 3] = ((/* implicit */unsigned long long int) var_7);
                            arr_131 [(signed char)11] [i_13 - 1] [i_13] [i_13] = ((/* implicit */int) ((unsigned short) var_10));
                        }
                    } 
                } 
                arr_132 [i_13] = ((/* implicit */long long int) var_10);
            }
            var_43 = ((/* implicit */signed char) max((((((/* implicit */int) max((arr_109 [i_10] [i_10] [i_10] [i_10] [i_13] [(signed char)8]), (arr_1 [i_13])))) + (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (var_6))))), (arr_54 [i_10] [i_10])));
        }
        arr_133 [i_10] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_51 [i_10] [i_10] [i_10])), (((((/* implicit */_Bool) arr_37 [i_10])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-17015))))));
        /* LoopNest 2 */
        for (long long int i_34 = 0; i_34 < 13; i_34 += 4) 
        {
            for (long long int i_35 = 3; i_35 < 11; i_35 += 3) 
            {
                {
                    arr_139 [i_10] [(short)11] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_54 [i_10] [i_35 + 2]))) * (arr_54 [i_10] [i_35 - 1])));
                    var_44 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_66 [i_35 - 2] [i_34]), (((/* implicit */unsigned int) arr_136 [i_35] [i_34] [i_35 + 2] [i_35 - 2])))))));
                }
            } 
        } 
    }
    var_45 = ((/* implicit */int) min((var_9), (((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) (signed char)17)))), (((_Bool) var_4)))))));
    var_46 = ((/* implicit */unsigned char) var_11);
}
