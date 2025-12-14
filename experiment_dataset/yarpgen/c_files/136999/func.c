/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136999
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_13 = arr_0 [i_2] [i_2];
                        arr_10 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1772935256)))))));
        /* LoopSeq 4 */
        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
        {
            var_15 *= ((/* implicit */unsigned char) ((short) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)0)))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            var_16 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) arr_18 [i_0] [i_4] [i_5] [i_6] [i_0]))))) & (arr_12 [i_0] [i_0 - 2] [i_5])));
                            var_17 = ((/* implicit */_Bool) (~((+(((/* implicit */int) var_2))))));
                        }
                        for (unsigned short i_8 = 1; i_8 < 7; i_8 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_0 [i_0] [i_4]))));
                            var_19 = ((/* implicit */unsigned char) (_Bool)1);
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_4] [i_4] [i_5] [i_5])))) ^ (((/* implicit */int) arr_11 [i_0])))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0 - 2] [i_4]))));
                        }
                        arr_22 [i_0] [i_0] [i_4] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0 - 1])) >> (((/* implicit */int) arr_11 [i_0 + 1]))));
                        var_22 += ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_12)))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (arr_7 [i_0]) : (((/* implicit */int) arr_15 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 2]))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (int i_9 = 2; i_9 < 9; i_9 += 3) 
            {
                var_24 = ((/* implicit */unsigned short) ((1098442540407044171LL) ^ (((/* implicit */long long int) 0))));
                arr_27 [i_0] [i_0] [i_9] [i_0] = ((/* implicit */unsigned char) ((arr_25 [i_0] [i_0 - 2] [i_0] [i_4]) != (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_20 [i_4] [i_4] [i_9] [i_9] [i_4] [i_0] [i_0])))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0 + 1] [i_0 - 1] [i_0 - 2]))));
                var_26 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [i_10])) ? (((/* implicit */int) arr_26 [i_4] [i_10] [i_10])) : (((/* implicit */int) arr_28 [i_0] [i_0]))))));
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned short) ((_Bool) ((short) arr_20 [i_0] [i_0] [i_4] [i_0] [i_10] [i_11] [i_0])));
                    arr_34 [i_0] [i_0] [i_10] [i_11] [i_11] = ((/* implicit */unsigned char) (_Bool)1);
                    var_28 = ((/* implicit */unsigned short) arr_25 [i_10] [i_10] [i_10] [i_10]);
                }
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_0] [i_12] [i_12 + 1] [i_12])) ? ((~(-1520005749904552268LL))) : (((/* implicit */long long int) arr_32 [i_0] [i_4] [i_10] [i_12]))));
                    var_30 ^= ((/* implicit */signed char) var_5);
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [i_12 + 1] [i_12]))) & (1098442540407044171LL)));
                }
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9))))) : ((-(var_8))))))));
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_33 = ((-6692807096862355791LL) == (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0 + 1] [i_0 + 1] [i_13]))));
                    arr_43 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_1);
                    /* LoopSeq 3 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) var_11))) & (((/* implicit */int) (signed char)28))));
                        arr_46 [i_0] [i_4] [i_0] [i_14] = ((/* implicit */unsigned char) (signed char)37);
                        var_35 = ((/* implicit */unsigned char) (_Bool)0);
                    }
                    for (short i_16 = 4; i_16 < 8; i_16 += 3) 
                    {
                        var_36 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)37))));
                        var_37 *= ((/* implicit */short) (((!(((/* implicit */_Bool) var_8)))) ? (arr_32 [i_0] [i_4] [i_13] [i_14]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_4] [i_13] [i_14])) || (((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_16])))))));
                        var_38 = ((long long int) arr_39 [i_0] [i_4] [i_13] [i_16 - 1]);
                        var_39 = ((/* implicit */_Bool) arr_30 [i_0] [i_4] [i_14]);
                        arr_49 [i_16] [i_0] [i_13] [i_14] [i_16] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0 - 2])) != (((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
                    }
                    for (signed char i_17 = 0; i_17 < 10; i_17 += 3) 
                    {
                        var_40 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (signed char)0)))));
                        var_41 = ((/* implicit */int) arr_30 [i_0] [i_0 - 2] [i_4]);
                    }
                    var_42 = ((/* implicit */_Bool) max((var_42), (((((/* implicit */int) arr_6 [i_0] [i_4] [i_14] [i_14] [i_0])) != (arr_24 [i_0 - 1])))));
                }
            }
            var_43 = ((((/* implicit */int) (unsigned short)50705)) == (((/* implicit */int) arr_38 [i_0] [i_0] [i_0 - 2] [i_0])));
        }
        for (signed char i_18 = 0; i_18 < 10; i_18 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (int i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    {
                        var_44 = ((/* implicit */unsigned char) (+(0)));
                        var_45 ^= ((/* implicit */long long int) ((((arr_57 [i_0] [i_18] [i_18] [i_20]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_54 [i_19] [i_18] [i_19])))) & ((~(((/* implicit */int) var_2))))));
                    }
                } 
            } 
            var_46 ^= ((/* implicit */int) ((short) var_7));
        }
        for (signed char i_21 = 0; i_21 < 10; i_21 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_22 = 0; i_22 < 10; i_22 += 2) /* same iter space */
            {
                var_47 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_21] [i_21])) != (((/* implicit */int) arr_61 [i_0 - 2] [i_0]))));
                var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (var_8)))) ? (((((/* implicit */_Bool) arr_24 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-22)))) : (((/* implicit */int) arr_4 [i_22] [i_0 - 2] [i_0] [i_0]))));
                arr_66 [i_21] = ((/* implicit */signed char) (_Bool)1);
                var_49 = arr_5 [i_0];
                var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_22]))))) ? (((/* implicit */int) arr_53 [i_21] [i_21])) : ((-(((/* implicit */int) (_Bool)1))))));
            }
            for (unsigned short i_23 = 0; i_23 < 10; i_23 += 2) /* same iter space */
            {
                var_51 |= ((/* implicit */_Bool) arr_15 [i_0] [i_21] [i_23] [i_23]);
                arr_69 [i_0] = ((/* implicit */unsigned short) ((long long int) arr_38 [i_0] [i_21] [i_0] [i_23]));
                arr_70 [i_0] [i_0] [i_21] [i_23] = arr_41 [i_0] [i_0] [i_21] [i_23] [i_23];
                /* LoopSeq 2 */
                for (long long int i_24 = 1; i_24 < 7; i_24 += 3) 
                {
                    var_52 = ((/* implicit */_Bool) (~(((/* implicit */int) var_5))));
                    var_53 = ((/* implicit */unsigned short) max((var_53), (((/* implicit */unsigned short) ((int) ((_Bool) (unsigned char)11))))));
                    /* LoopSeq 3 */
                    for (long long int i_25 = 0; i_25 < 10; i_25 += 2) 
                    {
                        var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-23617)) ? (((/* implicit */int) arr_30 [i_0] [i_0 - 2] [i_0])) : (((/* implicit */int) arr_30 [i_0] [i_0 + 1] [i_0 + 1]))));
                        var_55 = ((/* implicit */int) (!(((arr_36 [i_0] [i_0] [i_0] [i_24] [i_0]) != (((/* implicit */int) (unsigned char)192))))));
                        arr_76 [i_0] [i_0] [i_24] [i_24] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)1)) : (-1)));
                    }
                    for (int i_26 = 2; i_26 < 9; i_26 += 4) 
                    {
                        var_56 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_24]))));
                        var_57 = ((/* implicit */signed char) arr_47 [i_0] [i_0] [i_21] [i_23] [i_23] [i_24] [i_26]);
                        var_58 = ((/* implicit */unsigned char) arr_47 [i_0] [i_0] [i_0] [i_0 + 1] [i_26] [i_0] [i_26]);
                    }
                    for (long long int i_27 = 0; i_27 < 10; i_27 += 3) 
                    {
                        var_59 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_13 [i_0 - 2] [i_0 + 1] [i_24 + 3]))));
                        var_60 = ((/* implicit */short) arr_36 [i_0] [i_21] [i_23] [i_24] [i_27]);
                    }
                    var_61 = ((/* implicit */signed char) min((var_61), (((/* implicit */signed char) ((((/* implicit */int) arr_72 [i_23] [i_24 - 1] [i_24] [i_24])) * (((/* implicit */int) (unsigned char)94)))))));
                    var_62 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_24 - 1]))));
                }
                for (short i_28 = 0; i_28 < 10; i_28 += 4) 
                {
                    var_63 = (_Bool)1;
                    var_64 ^= ((/* implicit */unsigned char) arr_59 [i_0 - 2] [i_0 - 2] [i_0]);
                }
                var_65 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_80 [i_0] [i_0] [i_21] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((unsigned short) arr_73 [i_0] [i_23] [i_23] [i_0] [i_0]))) : (((/* implicit */int) arr_31 [i_21] [i_21] [i_21])));
            }
            var_66 = 1826945400;
        }
        for (unsigned short i_29 = 0; i_29 < 10; i_29 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                arr_90 [i_0] [i_29] [i_0] [i_30] = ((/* implicit */int) ((unsigned char) arr_42 [i_29] [i_29] [i_30] [i_29] [i_0 - 1]));
                /* LoopSeq 1 */
                for (unsigned short i_31 = 1; i_31 < 9; i_31 += 4) 
                {
                    arr_93 [i_31] [i_31] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_0] [i_31 + 1] [i_30] [i_31] [i_29])) ? (((/* implicit */int) (_Bool)0)) : (arr_36 [i_0] [i_31 - 1] [i_30] [i_31] [i_29])));
                    arr_94 [i_31] [i_29] [i_30] [i_31] = ((/* implicit */unsigned short) ((arr_86 [i_0 - 1] [i_31 - 1]) ? (arr_25 [i_0 - 1] [i_31] [i_31 - 1] [i_31]) : (arr_32 [i_0] [i_0] [i_0 + 1] [i_31])));
                    var_67 &= ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_64 [i_0] [i_29] [i_31])) - (((/* implicit */int) arr_59 [i_0] [i_0] [i_0]))))));
                }
                var_68 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_23 [i_0 - 1] [i_0 - 1]))));
                /* LoopSeq 3 */
                for (unsigned short i_32 = 0; i_32 < 10; i_32 += 2) 
                {
                    var_69 = ((((/* implicit */_Bool) (unsigned short)65512)) ? (((/* implicit */int) arr_73 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 0))))));
                    var_70 = ((/* implicit */unsigned char) arr_61 [i_29] [i_29]);
                    var_71 += ((((((/* implicit */int) arr_33 [i_30] [i_30] [i_30] [i_30])) != (arr_3 [i_29] [i_30] [i_32]))) ? ((~(((/* implicit */int) arr_77 [i_0] [i_29] [i_30] [i_29] [i_30] [i_30])))) : (((/* implicit */int) (signed char)37)));
                    var_72 = ((/* implicit */signed char) (_Bool)1);
                }
                for (int i_33 = 4; i_33 < 8; i_33 += 2) 
                {
                    var_73 = ((/* implicit */signed char) (+(arr_25 [i_30] [i_29] [i_30] [i_33 + 1])));
                    var_74 = ((/* implicit */int) ((arr_29 [i_33 - 1] [i_0 - 2] [i_0]) & (((/* implicit */long long int) arr_39 [i_33] [i_33 - 1] [i_0 - 2] [i_0]))));
                }
                for (long long int i_34 = 0; i_34 < 10; i_34 += 3) 
                {
                    var_75 *= ((((/* implicit */int) arr_67 [i_29])) == (((/* implicit */int) arr_83 [i_34] [i_30] [i_29] [i_0])));
                    arr_101 [i_34] [i_34] [i_34] [i_0] = ((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_30] [i_30] [i_30]);
                    /* LoopSeq 3 */
                    for (short i_35 = 2; i_35 < 6; i_35 += 4) 
                    {
                        var_76 = ((/* implicit */int) min((var_76), (((((/* implicit */_Bool) arr_36 [i_35] [i_35] [i_35] [i_29] [i_35 - 1])) ? (((/* implicit */int) (unsigned char)170)) : (arr_36 [i_35] [i_35] [i_35] [i_0] [i_35 + 4])))));
                        var_77 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-66)) ? (2147483647) : (14)))) ? (((/* implicit */int) (signed char)-127)) : (((((/* implicit */_Bool) (short)-13693)) ? (((/* implicit */int) arr_86 [i_0] [i_35])) : (((/* implicit */int) var_2))))));
                        arr_104 [i_0] [i_0] [i_0] [i_34] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((int) arr_100 [i_29] [i_29] [i_35])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))));
                        var_78 = ((/* implicit */unsigned char) arr_62 [i_0] [i_29]);
                    }
                    for (int i_36 = 0; i_36 < 10; i_36 += 3) /* same iter space */
                    {
                        var_79 += ((/* implicit */_Bool) var_11);
                        arr_107 [i_34] = var_2;
                    }
                    for (int i_37 = 0; i_37 < 10; i_37 += 3) /* same iter space */
                    {
                        var_80 ^= (+(((/* implicit */int) arr_105 [i_37] [i_29] [i_0 + 1])));
                        var_81 = ((/* implicit */long long int) var_12);
                        arr_110 [i_0] [i_34] [i_30] [i_0] [i_30] = ((/* implicit */unsigned char) (~(arr_35 [i_0 - 2] [i_34])));
                    }
                    var_82 = ((/* implicit */signed char) -901329099);
                }
            }
            /* LoopSeq 2 */
            for (signed char i_38 = 0; i_38 < 10; i_38 += 3) 
            {
                var_83 |= (((_Bool)1) ? ((~(arr_39 [i_38] [i_29] [i_0] [i_0]))) : (((/* implicit */int) arr_15 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0])));
                arr_113 [i_0] [i_38] = (~(var_6));
                var_84 -= ((/* implicit */unsigned char) arr_17 [i_0]);
                var_85 = ((/* implicit */_Bool) min((var_85), (((/* implicit */_Bool) ((arr_99 [i_29] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0]) ? (((/* implicit */int) arr_99 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0])) : (((/* implicit */int) arr_99 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0])))))));
                arr_114 [i_0] [i_38] [i_38] = ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) arr_81 [i_38] [i_29] [i_29] [i_0] [i_29])));
            }
            for (unsigned short i_39 = 2; i_39 < 6; i_39 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_40 = 2; i_40 < 8; i_40 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) /* same iter space */
                    {
                        var_86 = ((/* implicit */signed char) (~(((/* implicit */int) arr_100 [i_0] [i_39] [i_40 + 1]))));
                        arr_125 [i_41] = (((-(((/* implicit */int) arr_83 [i_41] [i_40] [i_39] [i_0])))) != ((+(((/* implicit */int) arr_81 [i_41] [i_40] [i_39] [i_29] [i_0])))));
                    }
                    for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) /* same iter space */
                    {
                        var_87 = ((/* implicit */_Bool) arr_30 [i_0] [i_40] [i_42]);
                        var_88 += ((/* implicit */unsigned char) var_4);
                        var_89 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                        var_90 = (((!(((/* implicit */_Bool) arr_7 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) (short)13693)) != (((/* implicit */int) (signed char)56))))) : (((arr_24 [i_0]) & (((/* implicit */int) (unsigned char)177)))));
                    }
                    for (_Bool i_43 = 0; i_43 < 1; i_43 += 1) /* same iter space */
                    {
                        var_91 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)2625)) ? (((/* implicit */int) (signed char)-41)) : (((((/* implicit */_Bool) arr_111 [i_0] [i_39] [i_39])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)35))))));
                        var_92 = ((/* implicit */unsigned short) ((int) arr_98 [i_40] [i_40] [i_40 - 1] [i_40] [i_40 + 1]));
                    }
                    var_93 += (~(((((/* implicit */_Bool) (short)-2625)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0)))));
                    var_94 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_96 [i_0] [i_0] [i_39 - 1])) ? (var_1) : (((/* implicit */int) arr_96 [i_39] [i_39] [i_39 + 2]))));
                    var_95 = ((/* implicit */_Bool) var_2);
                }
                var_96 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_128 [i_0] [i_0] [i_0] [i_39 + 4] [i_0])) ? (((/* implicit */int) arr_128 [i_39] [i_39] [i_39] [i_39 + 3] [i_39])) : (((/* implicit */int) arr_128 [i_0] [i_39] [i_39] [i_39 + 3] [i_39]))));
            }
            /* LoopNest 2 */
            for (_Bool i_44 = 0; i_44 < 1; i_44 += 1) 
            {
                for (int i_45 = 0; i_45 < 10; i_45 += 1) 
                {
                    {
                        arr_136 [i_29] [i_44] [i_29] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_65 [i_44] [i_44] [i_44] [i_44])) ? (((/* implicit */int) arr_78 [i_0] [i_0 - 1] [i_29] [i_44] [i_45])) : (((/* implicit */int) arr_65 [i_0] [i_29] [i_45] [i_45]))));
                        var_97 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) arr_92 [i_0] [i_29] [i_44] [i_45] [i_45] [i_45])))));
                    }
                } 
            } 
        }
    }
    var_98 = ((/* implicit */_Bool) var_5);
}
