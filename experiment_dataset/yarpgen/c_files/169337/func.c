/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169337
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) ((unsigned short) 14895495173216120203ULL));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned long long int) (+(var_7)));
            arr_5 [i_0] = ((/* implicit */_Bool) 4294967295U);
        }
        for (int i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            arr_8 [i_2] [i_2 - 1] [i_0] |= (~(max((arr_0 [i_2 + 1]), (((/* implicit */long long int) var_8)))));
            arr_9 [i_2 - 1] = min((((/* implicit */long long int) 2715638974U)), (1148417904979476480LL));
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        {
                            var_16 -= ((/* implicit */long long int) ((unsigned short) (+(max((((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0] [i_4] [i_5])), (23LL))))));
                            arr_21 [i_0] [i_2] [i_3] [i_3] [i_3] [i_4] [3LL] = ((/* implicit */unsigned short) min((((/* implicit */int) var_10)), (max(((~(((/* implicit */int) (unsigned short)504)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)243)) != (((/* implicit */int) (unsigned short)20979)))))))));
                        }
                    } 
                } 
            } 
            arr_22 [i_2 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_15 [i_0] [i_0 + 3] [i_2 - 1] [i_2 + 1]))))) ? (((/* implicit */int) ((unsigned char) arr_15 [i_0] [i_0 - 1] [i_2 + 1] [i_2 + 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0 + 4] [i_0 + 1] [i_2 - 1] [i_2 - 1])))))));
        }
    }
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        arr_25 [i_6] [2LL] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) -8626216384098915240LL)), (7601611545206027125ULL))), (((/* implicit */unsigned long long int) (unsigned char)17))));
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (+(((((arr_12 [i_6]) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((long long int) (unsigned short)57156)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))))))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        var_18 = (unsigned short)60689;
        arr_29 [i_7] [i_7] = ((/* implicit */long long int) ((min((2503261244928608338ULL), (((/* implicit */unsigned long long int) 1241396684)))) + (((/* implicit */unsigned long long int) -977758245))));
        arr_30 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) max((-3LL), (((/* implicit */long long int) (unsigned short)21227)))));
    }
    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
    {
        arr_33 [i_8] [i_8] = ((/* implicit */short) ((unsigned long long int) min((arr_23 [i_8]), (arr_16 [i_8] [i_8] [i_8] [i_8]))));
        var_19 ^= ((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_8] [i_8]));
        /* LoopSeq 4 */
        for (long long int i_9 = 3; i_9 < 7; i_9 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_10 = 4; i_10 < 8; i_10 += 2) 
            {
                for (unsigned int i_11 = 2; i_11 < 7; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 2) 
                    {
                        {
                            arr_43 [i_12] [i_9] [(_Bool)1] [(unsigned char)1] [i_9] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (((unsigned int) var_12))))) && (((/* implicit */_Bool) arr_26 [i_8] [i_9 - 1]))));
                            var_20 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_9 - 2] [i_10 - 4])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_1 [i_9 - 2] [i_10 - 4])))));
                            var_21 &= ((/* implicit */short) ((((/* implicit */int) ((11U) > (1617620111U)))) * (((/* implicit */int) min((arr_6 [i_9 + 2]), (arr_6 [i_9 - 1]))))));
                            arr_44 [i_9] [i_11 + 1] [i_9] = ((/* implicit */long long int) ((unsigned long long int) max((1144481554U), (((/* implicit */unsigned int) arr_14 [i_9 + 1] [i_10 - 2] [i_11] [i_12 - 1] [i_11] [i_12 - 1])))));
                        }
                    } 
                } 
            } 
            var_22 ^= ((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) (~(((/* implicit */int) arr_6 [i_8]))))));
        }
        for (short i_13 = 1; i_13 < 6; i_13 += 2) 
        {
            var_23 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 4177232025U)), (6294521558075462990ULL)));
            var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (var_1))))));
            var_25 &= ((/* implicit */unsigned long long int) 1670861019);
            arr_47 [i_13] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)31744))));
            arr_48 [i_8] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_8])) && (((/* implicit */_Bool) min((arr_13 [i_13 + 4] [i_13 - 1] [i_13 + 1] [(unsigned short)0] [i_13 + 4]), (((/* implicit */unsigned long long int) (unsigned char)15)))))));
        }
        for (long long int i_14 = 0; i_14 < 10; i_14 += 1) 
        {
            var_26 ^= (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)2947)) || (((/* implicit */_Bool) (unsigned char)89)))))));
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((unsigned char) (~(535822336U)))))));
        }
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
        {
            arr_53 [i_15] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 3493861266002075102LL)) ? (4178703373U) : (4032U))))))));
            var_28 ^= ((((/* implicit */_Bool) max((2054821645878877145ULL), (12513974281168771512ULL)))) ? (((16580200369540576373ULL) / (((/* implicit */unsigned long long int) -1379847905)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
        }
    }
    var_29 = ((/* implicit */unsigned int) ((short) (+(min((((/* implicit */unsigned long long int) 8839436790065646211LL)), (18446744073709551609ULL))))));
    var_30 = ((/* implicit */short) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_17 = 0; i_17 < 14; i_17 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_18 = 0; i_18 < 14; i_18 += 2) /* same iter space */
            {
                var_31 = ((/* implicit */unsigned long long int) arr_61 [i_18]);
                var_32 ^= ((/* implicit */long long int) var_1);
                arr_62 [i_16] [i_17] [i_18] = ((/* implicit */long long int) (+(15025889966947924852ULL)));
                arr_63 [i_16] [i_17] [i_18] = ((/* implicit */long long int) (!(var_1)));
            }
            for (int i_19 = 0; i_19 < 14; i_19 += 2) /* same iter space */
            {
                var_33 = ((/* implicit */short) arr_65 [i_16] [i_19]);
                arr_66 [i_19] = ((/* implicit */unsigned int) var_5);
                arr_67 [i_17] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) 9223372036854775798LL)))));
                var_34 ^= ((/* implicit */unsigned int) var_13);
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 14; i_20 += 2) 
                {
                    for (unsigned char i_21 = 0; i_21 < 14; i_21 += 2) 
                    {
                        {
                            arr_73 [4ULL] [i_19] &= ((/* implicit */unsigned char) ((arr_55 [i_20] [i_21]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                            arr_74 [i_21] [i_21] [i_20] [i_19] [i_17] [i_16] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)56629))));
                            arr_75 [i_21] [i_20] [i_20] [i_19] [i_17] [i_17] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3049321533635115127ULL)) ? (3531309382130219154ULL) : (((/* implicit */unsigned long long int) arr_64 [(unsigned char)12] [i_17] [i_17] [i_21]))));
                            arr_76 [3] [i_20] [i_19] [i_17] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_20] [i_21])) < (((/* implicit */int) arr_26 [i_20] [(short)9]))));
                            arr_77 [i_21] [i_20] [i_19] [i_17] [3LL] = ((/* implicit */unsigned int) (~(((var_6) ? (-508471690) : (((/* implicit */int) arr_26 [i_19] [(unsigned short)10]))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 3 */
            for (unsigned short i_22 = 0; i_22 < 14; i_22 += 1) /* same iter space */
            {
                var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((_Bool) 18446744073709551605ULL)))));
                /* LoopSeq 4 */
                for (long long int i_23 = 3; i_23 < 10; i_23 += 2) 
                {
                    arr_84 [i_23] [i_22] [i_17] [i_23] = ((/* implicit */long long int) ((((/* implicit */long long int) 810379016)) == (var_11)));
                    var_36 = 9213834978413408950ULL;
                }
                for (int i_24 = 0; i_24 < 14; i_24 += 2) /* same iter space */
                {
                    var_37 -= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)60481))));
                    var_38 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_80 [i_16]))));
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_85 [10ULL] [i_17] [i_22] [i_24])) < (((/* implicit */int) (short)24413))));
                    arr_87 [i_16] [i_17] [i_22] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)198)) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)93)))) : (((/* implicit */int) ((((/* implicit */int) arr_69 [i_16] [i_16] [(unsigned short)0] [i_22] [i_24])) > (((/* implicit */int) arr_15 [11U] [i_17] [i_22] [i_24])))))));
                }
                for (int i_25 = 0; i_25 < 14; i_25 += 2) /* same iter space */
                {
                    var_40 = var_3;
                    var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((unsigned short) arr_3 [i_17] [i_25])))));
                }
                for (int i_26 = 0; i_26 < 14; i_26 += 2) /* same iter space */
                {
                    arr_94 [i_16] [i_16] [i_17] [(_Bool)1] [i_22] [10U] = ((/* implicit */_Bool) ((8835429475358805710ULL) << (((((/* implicit */int) (unsigned short)62482)) - (62458)))));
                    arr_95 [i_16] [i_17] [i_17] [i_22] [i_22] [0U] |= ((/* implicit */unsigned int) 0ULL);
                }
                var_42 = ((((/* implicit */_Bool) (short)14)) || (((/* implicit */_Bool) 447740451U)));
                arr_96 [i_16] [i_17] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_17])) != (((/* implicit */int) var_8))));
            }
            for (unsigned short i_27 = 0; i_27 < 14; i_27 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_28 = 0; i_28 < 14; i_28 += 2) 
                {
                    var_43 += ((/* implicit */long long int) arr_7 [i_27] [i_28]);
                    arr_102 [i_16] [i_17] [i_27] [i_28] = ((/* implicit */unsigned long long int) (unsigned char)222);
                    var_44 = ((unsigned short) 14LL);
                }
                var_45 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_86 [i_16] [i_16] [i_16] [i_17] [i_27] [i_27]) - (8346167471439322422ULL)))) ? (arr_16 [i_27] [9LL] [i_17] [i_16]) : (((/* implicit */long long int) arr_81 [i_16] [i_17] [i_17] [i_27]))));
                arr_103 [i_27] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65534)) || ((_Bool)1)))) - ((+(((/* implicit */int) var_10))))));
                var_46 = ((/* implicit */unsigned int) ((short) (unsigned short)11612));
                var_47 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -8880277210581468827LL))));
            }
            for (unsigned short i_29 = 0; i_29 < 14; i_29 += 1) /* same iter space */
            {
                var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) var_10))));
                /* LoopSeq 1 */
                for (unsigned int i_30 = 0; i_30 < 14; i_30 += 2) 
                {
                    var_49 -= ((((/* implicit */int) arr_7 [i_16] [i_29])) > (((/* implicit */int) arr_7 [i_17] [i_30])));
                    var_50 -= ((/* implicit */unsigned char) var_10);
                    var_51 += ((/* implicit */unsigned short) ((unsigned char) arr_17 [i_30] [i_29] [i_16] [i_17] [i_16]));
                }
                var_52 = ((/* implicit */unsigned short) ((2227802534340149120ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36459)))));
                arr_109 [(unsigned short)7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)24))));
                var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -373649175)) ? (15797424840580249942ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
        }
        arr_110 [i_16] [i_16] = ((/* implicit */unsigned int) ((arr_65 [i_16] [i_16]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
}
