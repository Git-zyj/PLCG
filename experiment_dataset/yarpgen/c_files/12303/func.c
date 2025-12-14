/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12303
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
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_12 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0]))) : ((((((+(var_3))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0]) : (((/* implicit */int) var_1)))) - (134971499))))));
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_13 = ((/* implicit */int) var_11);
        var_14 = ((/* implicit */int) ((max((((/* implicit */long long int) var_11)), (1862227266917245007LL))) >= (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) arr_4 [i_1])))))));
    }
    for (short i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        arr_7 [i_2] = ((/* implicit */short) min((min((((/* implicit */long long int) var_6)), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) - (arr_3 [i_2] [(short)1]))))), (((/* implicit */long long int) arr_4 [i_2]))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (short i_4 = 2; i_4 < 8; i_4 += 2) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_4 [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_2]), (((/* implicit */unsigned short) var_9)))))) : (min((5554394200981676190LL), (((/* implicit */long long int) var_5)))));
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        arr_14 [i_2] [i_2] [i_2] [i_4] [i_5] [(short)8] = -9223372036854775789LL;
                        arr_15 [i_2] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */short) ((unsigned short) min(((-2147483647 - 1)), (((arr_8 [i_2]) | (7))))));
                        arr_16 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_4] [(unsigned short)10] [4LL] [i_4 + 3] [i_4 + 1] [i_2])) ? (((/* implicit */int) ((((/* implicit */int) ((short) arr_4 [i_2]))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (min((((var_2) - (3))), (((/* implicit */int) var_9))))));
                    }
                    for (int i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((61612286) == (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */int) ((((/* implicit */int) (short)-2)) <= (((/* implicit */int) var_0))))) : (-1427178032))))));
                        arr_19 [i_2] [i_2] = ((/* implicit */int) var_5);
                        var_17 = ((/* implicit */int) min((var_17), (var_4)));
                    }
                    for (int i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                    {
                        var_18 ^= ((/* implicit */long long int) arr_5 [6LL]);
                        arr_22 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) var_9);
                        var_19 = var_11;
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_2] [i_8] [i_4] [i_3] [i_3] [i_2] = max((((/* implicit */long long int) min((var_0), (((/* implicit */unsigned short) ((-737009748) >= (var_4))))))), (max((((/* implicit */long long int) min((((/* implicit */int) var_5)), (-17)))), (min((arr_12 [i_2] [i_3] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */long long int) var_2)))))));
                        var_20 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (arr_25 [i_4] [i_4 - 2] [i_4 + 3] [i_3]) : (((/* implicit */int) var_11)))) == (var_2)));
                    }
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_2] [i_2] [i_4] [i_9] [i_2] [i_9] = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9] [i_3] [i_4] [i_4 + 1]))) & (arr_12 [i_2] [i_2] [4] [i_3] [i_4] [i_2])))));
                        /* LoopSeq 1 */
                        for (short i_10 = 3; i_10 < 10; i_10 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), ((unsigned short)10726)));
                            var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) arr_9 [i_4])))) : (min((((/* implicit */int) (unsigned short)30857)), (arr_25 [i_2] [i_2] [i_4 + 4] [i_3])))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) min((-1427178050), (arr_32 [i_10] [i_3] [i_3] [(unsigned short)2] [i_3] [i_3] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_13 [i_2] [i_4 - 1] [i_4 - 2] [i_3]), (arr_13 [(short)0] [i_4 - 1] [i_4] [i_3]))))) : (-1LL))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_11 = 3; i_11 < 10; i_11 += 3) /* same iter space */
                        {
                            var_24 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
                            var_25 ^= ((/* implicit */int) arr_13 [(unsigned short)0] [i_3] [(short)2] [i_3]);
                            var_26 = ((/* implicit */short) ((int) (~(((/* implicit */int) var_8)))));
                        }
                        for (long long int i_12 = 3; i_12 < 10; i_12 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) max((((((/* implicit */int) arr_5 [i_9])) - (var_6))), (((/* implicit */int) arr_35 [(short)9] [i_3] [i_4 + 2] [10] [i_12 + 2]))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_11), (arr_11 [i_4])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_12])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-9590))))) ? (var_4) : ((~(((/* implicit */int) var_8)))))) : (-896846385))))));
                            var_29 = ((-256) & (((/* implicit */int) (short)-2)));
                        }
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (unsigned short)0))));
                    }
                    arr_41 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_8), (arr_17 [i_4 + 1] [i_2] [(short)4] [(unsigned short)0] [i_2] [i_4 - 2])))) ? (var_10) : (var_2)));
                    var_31 = ((/* implicit */short) (+((+(((/* implicit */int) ((((/* implicit */int) (short)32767)) != (var_4))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
        {
            arr_45 [i_2] [i_2] = ((/* implicit */unsigned short) var_7);
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                for (int i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        {
                            arr_54 [i_2] [i_13] [i_14] [i_14] [i_16] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (arr_10 [i_2]) : (arr_10 [i_16])))) ? ((+(arr_10 [i_16]))) : (((arr_10 [i_2]) - (arr_10 [i_2]))));
                            var_32 = ((/* implicit */short) -1);
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (short)32767))));
                            var_34 = ((/* implicit */short) (~(-1396793543808841979LL)));
                            var_35 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_4 [i_2])) && (((/* implicit */_Bool) arr_4 [i_16])))), (((((/* implicit */_Bool) arr_4 [i_16])) || (((/* implicit */_Bool) arr_4 [i_16]))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
        {
            var_36 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_40 [0] [i_17] [i_17])) : (((/* implicit */int) var_0)))) << (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2]))))) : (((((/* implicit */_Bool) arr_47 [i_2] [i_2] [i_17])) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) var_7))))))));
            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((var_10) > (((int) ((var_4) << (((((((/* implicit */int) arr_49 [(unsigned short)9] [(unsigned short)9] [i_17] [i_17] [i_17] [3])) + (20))) - (3)))))))))));
            arr_59 [i_2] = ((((/* implicit */int) ((short) -475713654))) - (((((/* implicit */_Bool) arr_53 [i_17] [i_17] [i_2] [i_2] [i_2] [i_17] [i_2])) ? (arr_53 [i_2] [i_17] [i_2] [i_17] [i_2] [i_17] [4]) : (((/* implicit */int) (short)10593)))));
        }
        for (int i_18 = 1; i_18 < 10; i_18 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_19 = 0; i_19 < 12; i_19 += 2) 
            {
                var_38 &= ((/* implicit */long long int) arr_58 [i_19]);
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 12; i_20 += 2) 
                {
                    for (long long int i_21 = 0; i_21 < 12; i_21 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */short) min((((((var_6) + (2147483647))) >> (((((/* implicit */int) var_11)) - (1165))))), (((/* implicit */int) arr_48 [i_18 + 1] [i_2]))));
                            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (-(2147483628))))));
                            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_6) & (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) max((((/* implicit */int) var_8)), (var_6)))) : (max((((((/* implicit */long long int) ((/* implicit */int) var_7))) & (arr_63 [i_2]))), (((/* implicit */long long int) ((((/* implicit */int) arr_67 [i_2] [i_2] [i_2] [(short)6] [i_2] [i_18])) & (((/* implicit */int) var_0)))))))));
                            var_42 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((-471706173) | (-1019321440)))), (((arr_37 [i_18 - 1] [i_18 + 2] [i_18 + 1] [i_18 + 2] [i_18 + 2] [i_18 - 1] [i_18 + 2]) & (arr_37 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 + 2] [i_18 - 1] [i_18 + 2] [i_18 + 1])))));
                        }
                    } 
                } 
            }
            for (short i_22 = 2; i_22 < 9; i_22 += 1) 
            {
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 12; i_23 += 2) 
                {
                    for (long long int i_24 = 0; i_24 < 12; i_24 += 2) 
                    {
                        {
                            arr_78 [i_2] [i_18] [i_22] [i_18] [i_2] = 1427178040;
                            var_43 -= max((arr_76 [i_24] [i_24] [i_23] [6] [i_24] [i_2]), (((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) -2147483628)))))));
                            arr_79 [i_24] [i_18] [(short)4] [i_23] [8LL] &= ((/* implicit */long long int) (~(((/* implicit */int) ((arr_51 [i_23] [i_22 + 2] [i_22 + 1] [i_23]) > (((/* implicit */int) (short)-20061)))))));
                        }
                    } 
                } 
                var_44 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)32767)), (arr_4 [i_18 + 2]))))) * (-1LL)));
                var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) <= (min((arr_39 [i_2] [11] [i_18] [i_18 + 1] [11] [(unsigned short)8] [(short)9]), (var_4)))));
                arr_80 [(short)2] [i_2] [(short)1] [i_2] = (+((-(((/* implicit */int) arr_33 [i_18] [i_18 - 1] [i_18 + 2] [i_22 + 2])))));
                /* LoopNest 2 */
                for (int i_25 = 4; i_25 < 10; i_25 += 2) 
                {
                    for (short i_26 = 0; i_26 < 12; i_26 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) arr_63 [i_25]))));
                            var_47 |= ((/* implicit */long long int) var_8);
                            var_48 = ((/* implicit */short) (((-((~(((/* implicit */int) arr_38 [i_2] [i_18] [i_22] [i_25] [i_26] [i_2] [i_2])))))) != (((((/* implicit */_Bool) arr_44 [i_2] [i_22 + 1] [i_2])) ? (arr_44 [i_2] [i_22 + 1] [i_2]) : (var_2)))));
                        }
                    } 
                } 
            }
            var_49 = ((/* implicit */int) min((var_49), (min((((/* implicit */int) min((arr_17 [i_2] [(short)2] [4LL] [i_2] [10] [i_18 - 1]), (arr_69 [(unsigned short)2] [(short)6] [i_2] [i_2] [(unsigned short)2])))), (((int) (unsigned short)65527))))));
        }
        var_50 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_84 [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */int) (unsigned short)63488)) : (min((arr_24 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */int) var_1))))));
    }
    /* LoopSeq 1 */
    for (short i_27 = 0; i_27 < 13; i_27 += 1) 
    {
        var_51 -= ((/* implicit */unsigned short) var_3);
        var_52 += var_1;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_28 = 3; i_28 < 11; i_28 += 2) 
        {
            arr_94 [i_27] [i_27] &= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_91 [i_28])) ? (((/* implicit */int) var_0)) : (arr_92 [i_27] [i_28]))));
            var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_6))) > (((/* implicit */int) arr_89 [i_28 - 1] [i_28])))))));
            /* LoopSeq 1 */
            for (long long int i_29 = 1; i_29 < 11; i_29 += 1) 
            {
                var_54 += ((short) arr_89 [i_27] [i_28 + 2]);
                /* LoopNest 2 */
                for (short i_30 = 0; i_30 < 13; i_30 += 1) 
                {
                    for (long long int i_31 = 0; i_31 < 13; i_31 += 3) 
                    {
                        {
                            var_55 = -17;
                            var_56 = ((/* implicit */short) min((var_56), (((/* implicit */short) ((((/* implicit */_Bool) arr_89 [i_30] [i_31])) ? (arr_91 [i_28 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_96 [(short)8] [i_29] [i_29] [i_29])))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 13; i_32 += 3) 
                {
                    for (long long int i_33 = 0; i_33 < 13; i_33 += 1) 
                    {
                        {
                            arr_105 [i_27] &= ((/* implicit */int) (short)-25281);
                            var_57 &= ((/* implicit */short) 1591751228987073753LL);
                            var_58 |= ((/* implicit */int) ((long long int) arr_91 [i_33]));
                        }
                    } 
                } 
            }
            arr_106 [i_28] [i_27] = ((/* implicit */int) ((arr_100 [i_27] [i_27] [i_28] [(unsigned short)11] [i_27]) > (((int) (unsigned short)25080))));
        }
    }
}
