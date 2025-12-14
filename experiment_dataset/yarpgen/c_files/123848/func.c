/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123848
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_12))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))) | (min((((/* implicit */unsigned long long int) var_11)), (var_15))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-108))))) < (((unsigned int) (unsigned char)255))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) arr_3 [i_0] [i_2] [i_3 + 4]);
                        var_18 = ((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) 1515401166)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)191))))))));
                        arr_13 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [21]);
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_4 = 3; i_4 < 10; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (signed char i_6 = 3; i_6 < 10; i_6 += 3) 
            {
                {
                    var_19 |= ((/* implicit */unsigned char) min((max(((-2147483647 - 1)), (((/* implicit */int) (signed char)-108)))), (((/* implicit */int) ((short) (-(1363917891U)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_4] [i_4 + 1] [i_4 - 1] [i_6 - 2] [i_4])) || (((/* implicit */_Bool) arr_10 [i_4] [i_5] [i_4 + 2] [i_6 - 3] [i_4 + 2]))));
                        var_21 |= ((/* implicit */unsigned char) (((((_Bool)1) ? (arr_9 [i_7] [i_4 - 1] [i_5] [i_4 - 1]) : (arr_16 [i_4] [i_4]))) <= (((/* implicit */unsigned long long int) ((unsigned int) var_4)))));
                        arr_27 [i_4] [i_7] [4LL] [i_7] [i_5] |= -2035534365;
                    }
                    arr_28 [i_6] [(signed char)0] [(signed char)0] [i_4] |= ((/* implicit */signed char) ((unsigned char) (short)8708));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_0))));
                                var_23 |= ((/* implicit */unsigned short) min((((int) max((arr_26 [i_8] [i_8] [(signed char)0] [i_8]), (arr_16 [i_8] [i_5])))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? ((+(((/* implicit */int) arr_24 [i_4] [i_5] [i_5] [i_6] [i_8] [7U])))) : (((/* implicit */int) var_14))))));
                                arr_33 [i_4 + 2] [(unsigned short)4] [i_8] [(signed char)4] [(_Bool)0] [(signed char)4] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_4 - 1])) ? (((unsigned long long int) 16458099288940691170ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0)))))) - ((~(((((/* implicit */_Bool) var_7)) ? (18330380469935897753ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                                arr_34 [i_4] [i_5] [i_6 - 1] [i_8] [11] = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) arr_31 [i_4] [i_4] [i_4] [i_6] [i_8] [i_9])) ? (((/* implicit */int) arr_23 [i_8] [i_4] [i_4])) : (1515401166))) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_5 [i_6 + 1])))))), (((/* implicit */int) arr_7 [i_4] [i_5]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) arr_17 [10U])), (((((/* implicit */_Bool) arr_29 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) var_7)) : (arr_25 [i_4 - 1]))))))))));
    }
    for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_11 = 1; i_11 < 16; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                for (long long int i_13 = 1; i_13 < 17; i_13 += 3) 
                {
                    {
                        arr_44 [i_10] = arr_11 [i_10];
                        /* LoopSeq 2 */
                        for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) 
                        {
                            arr_47 [i_10] [i_11 + 2] [i_10] [i_13] [i_14] = ((/* implicit */unsigned int) min(((unsigned char)255), ((unsigned char)255)));
                            arr_48 [i_10] [i_13] [(short)0] [i_11] [i_10] = ((/* implicit */long long int) var_4);
                        }
                        for (signed char i_15 = 0; i_15 < 19; i_15 += 3) 
                        {
                            arr_53 [i_10] [i_10] [i_11] [2LL] [i_13] [i_13] [i_15] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((2147483626) % (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_50 [i_10] [i_11] [i_12] [i_13] [i_10] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_10] [i_10] [i_12] [i_13 + 1] [i_10] [i_12]))) : (arr_52 [i_15] [i_15] [i_13] [i_13] [i_12] [(signed char)11] [i_10]))))) == (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) 2147483647)) : (arr_3 [i_13 + 2] [i_11] [i_15])))), (arr_9 [i_12] [i_12] [i_12] [i_12])))));
                            var_25 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_14)), (arr_51 [i_10] [i_10] [i_12] [i_13] [i_15]))))) ^ (max((var_0), (arr_1 [i_10]))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned char)230), (((/* implicit */unsigned char) (_Bool)1))))))))));
                        }
                        arr_54 [(_Bool)1] |= ((/* implicit */unsigned int) arr_50 [i_11 - 1] [i_11] [i_11 - 1] [i_13 - 1] [(signed char)6] [i_13 + 2]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_16 = 3; i_16 < 18; i_16 += 3) 
        {
            for (long long int i_17 = 4; i_17 < 17; i_17 += 3) 
            {
                for (unsigned short i_18 = 0; i_18 < 19; i_18 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 3) 
                        {
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) var_9)) != (min((((/* implicit */int) var_13)), (arr_36 [i_10] [i_10])))))))))));
                            var_27 |= ((/* implicit */signed char) var_3);
                        }
                        for (int i_20 = 0; i_20 < 19; i_20 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_6))));
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (~(max((arr_6 [i_20] [i_17] [i_17]), (((/* implicit */unsigned long long int) arr_65 [i_16 - 2] [i_17 - 2] [i_20] [i_16 - 2] [i_20])))))))));
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) max((min(((((_Bool)1) ? (var_0) : (((/* implicit */unsigned long long int) arr_39 [i_16])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (unsigned char)214))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [i_10] [i_10] [i_10] [i_18] [i_20] [i_17])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_11 [i_10])))))))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_10] [i_10]))))))))));
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((int) (~(1152921496016912384LL)))))));
                        }
                        arr_70 [i_10] [i_16] [4] [i_18] |= ((/* implicit */_Bool) max(((-(((/* implicit */int) max((var_8), (((/* implicit */short) (unsigned char)99))))))), (max((max((var_10), (((/* implicit */int) var_4)))), (((/* implicit */int) (unsigned char)115))))));
                        arr_71 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) (_Bool)1);
                        arr_72 [i_10] [(short)12] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) + (arr_10 [i_10] [i_16] [i_17 + 1] [i_16] [i_16])));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_22 = 0; i_22 < 24; i_22 += 3) 
    {
        /* LoopSeq 4 */
        for (signed char i_23 = 0; i_23 < 24; i_23 += 3) 
        {
            var_33 = ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) var_12)))));
            var_34 |= ((/* implicit */unsigned char) ((_Bool) ((2147483647) - (((/* implicit */int) (signed char)45)))));
            arr_80 [i_23] [i_23] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_73 [i_23]))));
            arr_81 [i_22] |= ((/* implicit */_Bool) arr_75 [(_Bool)1]);
        }
        for (short i_24 = 0; i_24 < 24; i_24 += 3) 
        {
            var_35 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_76 [i_22])) ? (((/* implicit */int) arr_74 [i_24] [i_24])) : (((/* implicit */int) arr_74 [i_22] [i_24]))));
            arr_85 [i_24] = ((arr_78 [i_22] [i_24]) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) arr_78 [i_24] [i_22])));
        }
        for (short i_25 = 0; i_25 < 24; i_25 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_26 = 0; i_26 < 24; i_26 += 3) 
            {
                for (unsigned long long int i_27 = 0; i_27 < 24; i_27 += 3) 
                {
                    for (unsigned int i_28 = 1; i_28 < 20; i_28 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */short) ((((((/* implicit */int) arr_87 [i_22] [i_22] [i_22])) + (2147483647))) << (((((/* implicit */int) var_4)) - (1)))));
                            arr_96 [i_25] [i_25] [i_26] [i_26] [i_26] = ((((var_0) << (((((/* implicit */int) arr_79 [i_22] [i_26] [i_28])) + (138))))) == (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_86 [i_28] [i_26])) + (2147483647))) >> (((/* implicit */int) var_4))))));
                            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((unsigned long long int) (_Bool)0)))));
                            var_38 = ((/* implicit */_Bool) (+(((var_4) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (unsigned char)166))))));
                        }
                    } 
                } 
            } 
            var_39 = ((((/* implicit */unsigned long long int) arr_75 [i_22])) <= (1988644784768860446ULL));
            /* LoopNest 2 */
            for (unsigned long long int i_29 = 3; i_29 < 21; i_29 += 3) 
            {
                for (short i_30 = 2; i_30 < 23; i_30 += 3) 
                {
                    {
                        var_40 |= ((/* implicit */_Bool) ((unsigned int) arr_94 [(_Bool)1] [i_29 + 2] [i_30 - 1] [i_30 - 1] [i_30] [i_30]));
                        var_41 = ((/* implicit */unsigned char) arr_98 [i_22] [i_25] [(signed char)18] [(signed char)18]);
                    }
                } 
            } 
            var_42 = ((/* implicit */int) arr_78 [i_22] [i_25]);
            var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_84 [i_22] [i_25]))) >= (((((/* implicit */_Bool) arr_88 [i_25] [i_25] [i_25] [i_25])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (7313976014390128153LL))))))));
        }
        for (unsigned long long int i_31 = 0; i_31 < 24; i_31 += 3) 
        {
            var_44 = ((/* implicit */signed char) ((((/* implicit */int) arr_76 [i_22])) & (((int) (signed char)-57))));
            /* LoopSeq 1 */
            for (short i_32 = 2; i_32 < 21; i_32 += 3) 
            {
                /* LoopNest 2 */
                for (int i_33 = 1; i_33 < 20; i_33 += 3) 
                {
                    for (unsigned short i_34 = 0; i_34 < 24; i_34 += 3) 
                    {
                        {
                            var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) -783311181))))))));
                            arr_113 [i_22] [i_22] [i_22] [i_33] = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                            var_46 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3)))) * (((((/* implicit */_Bool) 2147483627)) ? (1015616382U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                            var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_4))) && (((/* implicit */_Bool) arr_112 [i_33 + 4] [i_33 + 4] [i_33 + 1])))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_35 = 4; i_35 < 21; i_35 += 3) 
                {
                    var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_102 [i_35] [i_32] [i_31])) ? (((/* implicit */int) arr_106 [i_35] [i_31] [i_22])) : (((/* implicit */int) var_4)))))))));
                    var_49 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_111 [i_32 + 2] [i_32 + 3] [i_32] [i_32] [i_32 + 2] [i_32 - 1] [i_32 + 3])) ? (((/* implicit */int) arr_111 [i_32 + 3] [i_32 - 2] [i_32] [i_32] [i_32 - 2] [i_32] [i_32 - 2])) : (((/* implicit */int) arr_111 [i_32 + 2] [i_32 + 3] [(_Bool)1] [i_32] [i_32 - 1] [i_32 + 1] [i_32 + 2]))));
                    var_50 = ((/* implicit */int) max((var_50), (((/* implicit */int) ((((/* implicit */_Bool) (short)-19673)) ? (((/* implicit */long long int) 2147483647)) : ((-9223372036854775807LL - 1LL)))))));
                    var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) -1LL))) ? (((((/* implicit */_Bool) arr_95 [i_22] [i_22] [(unsigned short)8] [i_32 - 1] [i_22] [i_35])) ? (var_0) : (((/* implicit */unsigned long long int) 1515401168)))) : (((/* implicit */unsigned long long int) (+(var_5))))));
                    /* LoopSeq 2 */
                    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                    {
                        var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_13))))))));
                        var_53 = ((/* implicit */unsigned long long int) ((((long long int) 4331641657452276277ULL)) >= (((/* implicit */long long int) ((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_88 [i_22] [i_31] [i_35] [i_35])))))))));
                    }
                    for (signed char i_37 = 0; i_37 < 24; i_37 += 3) 
                    {
                        var_54 |= ((/* implicit */unsigned int) var_7);
                        var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_95 [i_22] [i_37] [i_37] [i_37] [i_22] [i_22])) || (((/* implicit */_Bool) ((signed char) (unsigned char)166)))));
                        arr_123 [i_32 - 2] [(signed char)0] [i_32] [i_35 + 2] [i_32 - 2] [i_35 - 2] |= ((/* implicit */unsigned int) var_6);
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_38 = 1; i_38 < 23; i_38 += 3) 
                {
                    for (unsigned short i_39 = 0; i_39 < 24; i_39 += 3) 
                    {
                        {
                            arr_132 [i_22] [i_31] [(short)10] [i_38] |= ((unsigned short) arr_124 [i_32] [i_32 - 1] [i_32 - 1] [i_32 - 1]);
                            arr_133 [i_22] [i_39] [i_39] [i_38] [i_39] [i_39] [i_39] = ((/* implicit */short) var_0);
                            arr_134 [(unsigned short)12] [i_31] [(unsigned short)12] [i_31] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_126 [i_32 + 3]))));
                            arr_135 [i_39] [i_31] = ((/* implicit */unsigned int) arr_99 [i_22] [8LL] [i_22] [i_22]);
                        }
                    } 
                } 
                var_56 |= ((/* implicit */int) arr_117 [i_22] [i_31] [i_32]);
                var_57 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? (arr_75 [i_31]) : (var_5)))) ? (((((/* implicit */int) arr_79 [i_32] [i_32] [i_32])) | (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) arr_91 [i_22] [i_22] [i_31] [i_32] [i_32] [(_Bool)1])) != (((/* implicit */int) var_9)))))));
            }
        }
        var_58 = ((/* implicit */unsigned int) max((var_58), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_117 [i_22] [i_22] [i_22])) ? (((/* implicit */unsigned long long int) ((int) arr_90 [i_22] [i_22] [i_22]))) : (var_15))))));
    }
    var_59 |= ((/* implicit */short) var_15);
}
