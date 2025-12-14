/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144657
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        var_11 &= ((/* implicit */signed char) (((-(((/* implicit */int) var_10)))) != (((/* implicit */int) arr_3 [i_0] [i_0 - 4]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) ((unsigned char) arr_13 [i_2 + 1] [i_2 + 1] [i_2] [i_3 - 2] [i_1] [i_1] [i_2 + 1]));
                                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_7))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_1] [i_2 + 1] = ((/* implicit */unsigned long long int) ((signed char) arr_10 [i_0 + 1] [i_0 - 1] [i_1 - 2] [i_2 + 1]));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        /* LoopSeq 4 */
        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 23; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        {
                            var_14 = (~(((/* implicit */int) ((signed char) var_2))));
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) 2085433260455972186ULL))));
                            var_16 = (-(((/* implicit */int) arr_17 [i_7 - 2])));
                        }
                    } 
                } 
            } 
            var_17 ^= ((/* implicit */unsigned int) var_5);
        }
        for (signed char i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                var_18 = (+((~(2016657476))));
                var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_20 [(_Bool)1] [i_10] [i_11]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 2; i_13 < 23; i_13 += 4) 
                    {
                        var_20 |= ((/* implicit */signed char) (+(-6910980848981810429LL)));
                        arr_40 [i_5] [i_10] [i_11] [i_10] [i_13] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_12] [i_12] [i_13] [i_13] [i_13 - 2] [i_13 + 1]))) >= (arr_38 [i_5] [i_10] [9U] [i_5] [i_13 - 2] [i_13 - 2] [i_13])));
                        var_21 = ((/* implicit */int) arr_31 [i_12 - 2]);
                        var_22 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_35 [i_5] [i_10] [i_11] [i_11] [i_12] [i_13 + 1])) | (((/* implicit */int) arr_35 [i_13] [i_12] [i_12] [i_11] [(unsigned char)13] [i_5]))));
                    }
                    /* LoopSeq 3 */
                    for (int i_14 = 4; i_14 < 22; i_14 += 3) 
                    {
                        var_23 = ((/* implicit */int) var_9);
                        var_24 = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) arr_39 [i_5] [4] [i_5] [i_5] [i_10])))));
                        var_25 = ((/* implicit */unsigned long long int) 131591069U);
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(2025747609)))))))));
                        var_27 -= ((/* implicit */signed char) (~((+(2016657476)))));
                    }
                    for (unsigned int i_15 = 1; i_15 < 20; i_15 += 4) 
                    {
                        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_12] [i_12] [i_12 + 1] [i_12 - 1] [i_12 - 2]))));
                        var_29 = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) arr_36 [i_5] [i_5] [i_11] [i_12] [15ULL] [i_10])))));
                        var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_42 [i_15] [i_15] [i_15 - 1] [i_15]))));
                        var_31 = ((/* implicit */unsigned long long int) ((long long int) var_2));
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) var_0))));
                    }
                    for (unsigned int i_16 = 2; i_16 < 21; i_16 += 4) 
                    {
                        var_33 = var_4;
                        var_34 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-20))))) && (((/* implicit */_Bool) arr_38 [i_16 - 2] [i_10] [i_11] [i_5] [i_5] [i_5] [i_5]))));
                        var_35 |= ((/* implicit */unsigned long long int) (-((+(-1720766160656474577LL)))));
                        arr_51 [(short)4] [i_10] [i_12 - 2] [i_16] = ((/* implicit */short) ((unsigned long long int) arr_20 [i_5] [i_10] [i_11]));
                    }
                }
                arr_52 [i_10] = ((/* implicit */unsigned char) (((+(0ULL))) < (((/* implicit */unsigned long long int) (-(var_1))))));
            }
            for (signed char i_17 = 0; i_17 < 24; i_17 += 4) 
            {
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_53 [i_5] [i_5] [i_10] [i_17])) ? ((+(3699272956U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_17] [i_10] [1U])))));
                var_37 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (arr_18 [i_10] [i_17])));
                arr_55 [i_5] [i_10] [18] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_10] [i_10])) ? (((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((short) 1535851830)))));
                var_38 -= ((/* implicit */_Bool) (-(-1758152129)));
            }
            for (long long int i_18 = 0; i_18 < 24; i_18 += 4) 
            {
                arr_60 [i_5] [i_5] [i_18] |= ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
                /* LoopSeq 2 */
                for (unsigned short i_19 = 0; i_19 < 24; i_19 += 4) 
                {
                    arr_64 [i_18] [(unsigned short)2] [8ULL] [8ULL] |= ((/* implicit */long long int) (-(arr_18 [i_5] [i_5])));
                    var_39 = ((/* implicit */signed char) (+(1658759837984989894LL)));
                    arr_65 [i_10] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_18] [(signed char)5] [i_10] [i_19])) || (((/* implicit */_Bool) (unsigned char)13)))))));
                }
                for (signed char i_20 = 0; i_20 < 24; i_20 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_21 = 0; i_21 < 24; i_21 += 4) 
                    {
                        var_40 ^= ((/* implicit */unsigned long long int) (-(((var_9) % (((/* implicit */long long int) ((/* implicit */int) arr_48 [17ULL] [i_10] [i_18] [i_18] [i_21] [i_5] [i_21])))))));
                        var_41 = ((/* implicit */int) ((unsigned long long int) arr_61 [i_20] [i_10] [i_18] [i_18] [i_10]));
                        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (-((+(1164275466726611307ULL))))))));
                        var_43 = ((/* implicit */unsigned short) ((arr_59 [i_10]) - (((/* implicit */unsigned long long int) arr_33 [i_21] [i_10]))));
                    }
                    for (int i_22 = 4; i_22 < 22; i_22 += 4) 
                    {
                        var_44 |= ((/* implicit */unsigned char) ((var_9) & (((/* implicit */long long int) arr_69 [i_22 - 1] [i_22 - 2]))));
                        var_45 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_5]))));
                    }
                    for (int i_23 = 0; i_23 < 24; i_23 += 3) /* same iter space */
                    {
                        var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)29526))))))));
                        arr_75 [i_5] [i_5] [i_18] [i_10] [3U] = ((/* implicit */signed char) arr_31 [i_23]);
                        var_47 ^= ((/* implicit */short) arr_41 [i_10] [i_10] [i_10] [i_10] [i_10]);
                    }
                    for (int i_24 = 0; i_24 < 24; i_24 += 3) /* same iter space */
                    {
                        var_48 = ((/* implicit */unsigned long long int) max((var_48), (var_5)));
                        arr_79 [i_10] [i_18] [i_20] [i_18] = ((/* implicit */signed char) arr_62 [i_10]);
                        var_49 |= ((/* implicit */long long int) 15812191441573990152ULL);
                    }
                    var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? ((-(var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [(short)6] [i_20] [i_18] [i_20])))));
                    var_51 = ((/* implicit */unsigned long long int) arr_27 [i_10] [i_18]);
                    arr_80 [i_20] [i_10] [i_10] [i_5] = ((/* implicit */int) (+(26U)));
                }
                arr_81 [i_10] [i_10] [i_18] [i_10] = (~(var_8));
            }
            arr_82 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((short) ((long long int) var_9)));
            var_52 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_72 [i_5] [i_5] [i_10] [i_10] [i_5]))));
            var_53 = ((/* implicit */unsigned short) (-(6600066721142580587ULL)));
        }
        for (signed char i_25 = 0; i_25 < 24; i_25 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_26 = 2; i_26 < 23; i_26 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned char i_27 = 1; i_27 < 23; i_27 += 4) /* same iter space */
                {
                    var_54 = ((/* implicit */signed char) (-(((/* implicit */int) arr_68 [i_26 + 1] [i_26] [i_26 + 1] [i_26] [i_26 - 2] [i_26 - 1]))));
                    arr_91 [i_5] [i_5] [i_5] [18] = ((/* implicit */unsigned short) arr_54 [i_26] [i_26]);
                    var_55 = ((/* implicit */long long int) (-(((/* implicit */int) arr_30 [i_27 - 1] [i_26 - 2] [i_5]))));
                }
                for (unsigned char i_28 = 1; i_28 < 23; i_28 += 4) /* same iter space */
                {
                    var_56 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_23 [i_28 + 1] [i_28 + 1] [i_26]))));
                    /* LoopSeq 1 */
                    for (short i_29 = 3; i_29 < 22; i_29 += 3) 
                    {
                        var_57 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                        var_58 = ((/* implicit */int) max((var_58), (((/* implicit */int) ((signed char) arr_95 [i_29] [i_28] [i_26 + 1] [i_5] [i_5] [i_5])))));
                        var_59 = arr_45 [i_29] [10] [i_26] [i_25] [i_5];
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_30 = 2; i_30 < 22; i_30 += 4) 
                    {
                        var_60 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_77 [i_25] [i_30] [i_26] [i_30] [i_30 - 2]))));
                        var_61 = ((/* implicit */unsigned long long int) min((var_61), (((/* implicit */unsigned long long int) ((signed char) var_5)))));
                    }
                    for (signed char i_31 = 1; i_31 < 21; i_31 += 4) 
                    {
                        var_62 = ((/* implicit */int) 6855606458181800676ULL);
                        var_63 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) -1658759837984989880LL)))));
                        var_64 *= ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                    }
                }
                for (long long int i_32 = 0; i_32 < 24; i_32 += 3) 
                {
                    var_65 |= ((/* implicit */_Bool) arr_29 [i_25] [i_25] [i_25] [i_26 - 1] [i_26]);
                    var_66 = ((/* implicit */unsigned long long int) var_7);
                }
                arr_103 [2U] [2U] [i_26] [i_26] = ((/* implicit */unsigned char) arr_19 [i_5]);
            }
            for (signed char i_33 = 2; i_33 < 23; i_33 += 4) /* same iter space */
            {
                var_67 &= ((/* implicit */unsigned long long int) ((arr_96 [i_33] [i_33 - 2] [i_33 + 1] [i_33] [i_33] [i_33]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [0] [(short)10] [i_33] [i_33] [12])))));
                var_68 = ((/* implicit */long long int) arr_44 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
                var_69 = ((/* implicit */unsigned long long int) min((var_69), (((/* implicit */unsigned long long int) ((unsigned int) ((var_6) ^ (((/* implicit */long long int) 2016657476))))))));
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_34 = 0; i_34 < 24; i_34 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_35 = 0; i_35 < 24; i_35 += 4) 
                {
                    for (unsigned char i_36 = 1; i_36 < 22; i_36 += 3) 
                    {
                        {
                            arr_114 [i_5] [i_25] [i_34] [17ULL] [i_36 - 1] = ((/* implicit */unsigned long long int) ((long long int) -1834235194960567352LL));
                            arr_115 [4U] [4U] [i_34] [i_35] [i_36 + 2] |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) arr_111 [i_5] [i_25] [i_25] [i_35] [i_5]))))));
                            var_70 ^= ((/* implicit */short) arr_48 [i_5] [i_5] [10U] [i_34] [i_35] [i_36 + 2] [i_5]);
                        }
                    } 
                } 
                var_71 = ((/* implicit */unsigned int) var_9);
                var_72 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_89 [i_5] [9ULL]))) % ((-(1826465791536129023LL)))));
            }
            for (unsigned long long int i_37 = 3; i_37 < 23; i_37 += 4) 
            {
                var_73 = (~((-(var_2))));
                var_74 *= ((/* implicit */short) var_2);
            }
            for (unsigned long long int i_38 = 3; i_38 < 23; i_38 += 4) 
            {
                var_75 = ((/* implicit */unsigned long long int) arr_62 [i_38]);
                arr_122 [i_38] = ((/* implicit */int) (+(((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [(unsigned char)12] [i_38] [i_38 - 3] [2] [i_25] [i_38]))) : (var_5)))));
                var_76 = ((/* implicit */unsigned int) arr_88 [i_5] [i_25] [i_38 - 2]);
                var_77 = ((/* implicit */signed char) (+(((/* implicit */int) arr_56 [i_38 - 2] [i_38 - 3] [i_38 - 2] [i_38 - 2]))));
            }
            var_78 = ((/* implicit */short) (-(((unsigned int) var_3))));
        }
        for (int i_39 = 3; i_39 < 22; i_39 += 4) 
        {
            var_79 = ((/* implicit */unsigned long long int) min((var_79), ((~(arr_29 [i_5] [i_5] [i_5] [(short)2] [i_5])))));
            var_80 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_5])) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)2763)))))));
            /* LoopSeq 1 */
            for (int i_40 = 0; i_40 < 24; i_40 += 4) 
            {
                var_81 |= ((/* implicit */signed char) ((short) var_1));
                arr_128 [i_39] [i_39 - 3] [i_39] = ((/* implicit */short) (unsigned short)53244);
                arr_129 [(short)8] [(short)8] [i_39] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)23960))));
                var_82 = ((/* implicit */unsigned char) (~((+(var_2)))));
                var_83 = ((/* implicit */short) 7009320413990824754ULL);
            }
            arr_130 [i_39] = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) var_0)))));
            var_84 = ((/* implicit */signed char) (+((-9223372036854775807LL - 1LL))));
        }
        arr_131 [i_5] &= ((/* implicit */signed char) (~(arr_33 [i_5] [i_5])));
    }
    /* vectorizable */
    for (signed char i_41 = 0; i_41 < 23; i_41 += 4) 
    {
        arr_134 [i_41] = ((/* implicit */short) arr_61 [i_41] [i_41] [(short)1] [i_41] [i_41]);
        var_85 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_54 [(unsigned short)22] [i_41]) : (((/* implicit */unsigned long long int) arr_117 [i_41] [i_41] [i_41] [i_41]))));
    }
    /* vectorizable */
    for (unsigned char i_42 = 0; i_42 < 20; i_42 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_43 = 4; i_43 < 16; i_43 += 4) /* same iter space */
        {
            var_86 = ((/* implicit */unsigned long long int) arr_99 [2] [i_43] [i_42] [i_42] [i_43 - 1] [i_43] [i_42]);
            /* LoopSeq 1 */
            for (short i_44 = 2; i_44 < 18; i_44 += 4) 
            {
                var_87 = ((/* implicit */signed char) max((var_87), (((/* implicit */signed char) arr_106 [4ULL] [i_42] [4ULL] [4ULL]))));
                var_88 ^= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_90 [i_44 + 2] [i_43 + 4] [i_42] [i_42]))))));
                var_89 = ((/* implicit */unsigned int) var_9);
                var_90 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_43 + 4] [i_44 + 2] [i_44] [i_44 + 1])) && (((/* implicit */_Bool) arr_56 [i_43 + 4] [i_44 + 2] [i_44 - 1] [13ULL]))));
            }
        }
        for (short i_45 = 4; i_45 < 16; i_45 += 4) /* same iter space */
        {
            arr_145 [16ULL] = ((/* implicit */long long int) (-(((/* implicit */int) (short)32088))));
            /* LoopSeq 2 */
            for (signed char i_46 = 1; i_46 < 18; i_46 += 4) 
            {
                var_91 = ((/* implicit */unsigned char) ((short) arr_49 [i_46 + 1] [i_46] [i_46 + 1] [i_45 + 1] [(unsigned char)2] [i_45 + 1]));
                var_92 *= 3497377826421176197ULL;
            }
            for (unsigned char i_47 = 0; i_47 < 20; i_47 += 4) 
            {
                arr_151 [i_42] [12ULL] [i_42] [i_42] = ((((/* implicit */_Bool) arr_56 [i_47] [i_47] [i_45 + 4] [i_45 + 4])) ? (arr_148 [i_42] [i_45 + 2] [i_42] [i_42]) : (((/* implicit */long long int) var_4)));
                var_93 |= ((/* implicit */unsigned int) arr_127 [i_42] [i_42] [i_42]);
            }
            var_94 |= ((/* implicit */unsigned char) ((14LL) > (((/* implicit */long long int) ((/* implicit */int) arr_138 [i_42] [i_45 + 4])))));
            /* LoopNest 2 */
            for (short i_48 = 0; i_48 < 20; i_48 += 3) 
            {
                for (signed char i_49 = 1; i_49 < 18; i_49 += 4) 
                {
                    {
                        arr_159 [12LL] [i_45] [i_48] [i_42] [i_45] [i_42] |= ((/* implicit */unsigned char) 1474655916U);
                        var_95 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
                    }
                } 
            } 
        }
        var_96 = ((/* implicit */signed char) min((var_96), (((/* implicit */signed char) (-(1999300138U))))));
        var_97 = ((/* implicit */unsigned long long int) (short)24015);
    }
    var_98 = ((/* implicit */signed char) max((var_98), (((/* implicit */signed char) 1535851830))));
    var_99 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_3))))));
}
