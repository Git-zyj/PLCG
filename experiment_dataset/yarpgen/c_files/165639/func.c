/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165639
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -7891517478151869794LL)), (12ULL)));
    var_12 = ((/* implicit */long long int) min((var_12), (var_8)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((signed char) (~(18446744073709551604ULL)));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) 12ULL))) > (-1160384068)));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_4)), (14915491085637541701ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1])) <= (((/* implicit */int) (short)-22278))))))))), (((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_0 [i_1]))))));
        var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1362411140755600633LL)) && (((/* implicit */_Bool) 1362411140755600633LL))))), (min((min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (16657470924449438113ULL))), (((/* implicit */unsigned long long int) arr_2 [i_1]))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        var_15 = ((/* implicit */_Bool) ((long long int) -6535624176303273778LL));
                        var_16 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)32247))));
                        arr_18 [i_3] [i_3] [i_3] [2ULL] &= ((/* implicit */unsigned short) ((9ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5))))));
                    }
                    arr_19 [i_3] &= (signed char)125;
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_7 = 1; i_7 < 23; i_7 += 4) 
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_7 - 1] [i_7 - 1] [i_7] [i_6] [i_7 + 1] [(short)16])) ? (((/* implicit */int) arr_16 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) arr_16 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]))));
                var_18 = (_Bool)0;
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_22 [i_6])))))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (arr_20 [i_2] [i_7])));
            }
            for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                var_21 = (+(((/* implicit */int) (short)20855)));
                var_22 = ((/* implicit */long long int) ((short) var_0));
            }
            /* LoopNest 2 */
            for (short i_9 = 1; i_9 < 23; i_9 += 4) 
            {
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    {
                        var_23 = ((/* implicit */int) ((18446744073709551603ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11694)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            var_24 = ((((/* implicit */unsigned long long int) ((unsigned int) arr_17 [i_6] [i_9] [i_9] [i_6] [i_2] [i_9 + 1]))) | (441389662323646099ULL));
                            arr_35 [i_2] [i_10] [i_9] [i_6] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_30 [i_6] [i_6] [i_6]) + (3019771402U)))) && (((/* implicit */_Bool) var_9))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                for (unsigned int i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    for (int i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        {
                            var_25 += ((/* implicit */int) arr_34 [i_2] [i_6] [i_12] [(signed char)14] [i_14]);
                            var_26 = ((((/* implicit */long long int) ((/* implicit */int) (short)-22278))) / (-1362411140755600628LL));
                            var_27 -= ((/* implicit */unsigned long long int) ((((arr_14 [i_12] [i_13] [i_14]) + (9223372036854775807LL))) << (((((-1592471650043443104LL) + (1592471650043443119LL))) - (15LL)))));
                            var_28 = ((/* implicit */unsigned short) 21ULL);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_29 = ((/* implicit */long long int) (short)-9304);
                /* LoopSeq 2 */
                for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4286578688U)) ? (((/* implicit */int) (unsigned short)22675)) : (((/* implicit */int) (short)8717))));
                    arr_51 [i_15] [i_15] [i_15] = ((/* implicit */_Bool) 1362411140755600632LL);
                    var_31 ^= ((/* implicit */unsigned short) -1033986012330358762LL);
                    var_32 = ((/* implicit */int) 12ULL);
                    var_33 ^= ((/* implicit */unsigned int) -9011132823037708681LL);
                }
                for (unsigned char i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    var_34 = ((/* implicit */int) 18446744073709551615ULL);
                    /* LoopSeq 2 */
                    for (short i_18 = 1; i_18 < 23; i_18 += 4) 
                    {
                        arr_56 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */short) ((arr_14 [i_2] [i_6] [i_18]) & (arr_14 [i_6] [i_6] [i_6])));
                        arr_57 [i_15] [11ULL] [i_15] [i_15] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(4316986175771104720ULL)))) && (((/* implicit */_Bool) var_3))));
                        var_35 &= ((/* implicit */_Bool) (+(arr_9 [i_18 + 1])));
                    }
                    for (signed char i_19 = 3; i_19 < 21; i_19 += 4) 
                    {
                        arr_60 [i_15] [i_17] [i_17] [i_2] |= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_58 [i_17] [i_2] [i_15] [13] [i_6] [i_17] [i_2]))));
                        arr_61 [i_2] [i_15] [i_2] [i_2] [(short)11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -8832586459613490024LL)))))) - (((arr_20 [i_15] [(unsigned char)10]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                        var_36 = ((/* implicit */long long int) (signed char)1);
                    }
                }
                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)64915)))))));
            }
            for (unsigned char i_20 = 0; i_20 < 24; i_20 += 4) 
            {
                var_38 ^= ((/* implicit */long long int) (~((+(67570504)))));
                arr_66 [i_20] [i_2] = ((/* implicit */short) arr_62 [6ULL] [i_2] [i_2]);
                arr_67 [i_2] = ((/* implicit */unsigned long long int) 1033986012330358762LL);
            }
        }
        for (int i_21 = 2; i_21 < 20; i_21 += 4) 
        {
            /* LoopNest 2 */
            for (int i_22 = 2; i_22 < 22; i_22 += 4) 
            {
                for (unsigned short i_23 = 0; i_23 < 24; i_23 += 4) 
                {
                    {
                        var_39 = ((/* implicit */_Bool) -1033986012330358762LL);
                        var_40 = ((/* implicit */unsigned int) ((arr_72 [i_2] [i_21 - 2] [i_22 + 2] [i_23]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
            var_41 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
            var_42 = ((/* implicit */unsigned int) (-(arr_69 [i_2] [i_21 + 4])));
        }
        for (long long int i_24 = 1; i_24 < 22; i_24 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_25 = 0; i_25 < 24; i_25 += 4) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    for (int i_27 = 0; i_27 < 24; i_27 += 4) 
                    {
                        {
                            var_43 -= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62915))))) > (((/* implicit */int) ((18446744073709551615ULL) >= (13704076119687275807ULL))))));
                            var_44 = ((/* implicit */signed char) (short)22278);
                            arr_89 [(unsigned char)17] [i_24] [i_26] [i_25] [(_Bool)1] [i_27] = ((/* implicit */_Bool) ((unsigned long long int) arr_85 [i_27] [18ULL] [i_25] [(unsigned char)16] [i_2]));
                            var_45 = arr_82 [i_24] [i_26];
                            var_46 -= ((/* implicit */signed char) ((arr_30 [i_2] [i_2] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            } 
            var_47 = ((/* implicit */unsigned long long int) arr_77 [i_2] [i_2]);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_28 = 0; i_28 < 24; i_28 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_29 = 0; i_29 < 24; i_29 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_30 = 0; i_30 < 24; i_30 += 4) 
                {
                    for (unsigned long long int i_31 = 0; i_31 < 24; i_31 += 4) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned char) 9916407705345808536ULL);
                            var_49 ^= ((/* implicit */long long int) ((int) 0ULL));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_32 = 1; i_32 < 23; i_32 += 4) 
                {
                    var_50 += ((/* implicit */short) (((_Bool)1) && (((/* implicit */_Bool) arr_44 [i_2] [i_2] [i_29] [i_28]))));
                    var_51 |= ((/* implicit */int) -7177014288602624949LL);
                }
                for (long long int i_33 = 0; i_33 < 24; i_33 += 4) 
                {
                    var_52 &= ((/* implicit */unsigned long long int) arr_71 [i_33] [(signed char)3] [i_28]);
                    var_53 += ((/* implicit */unsigned int) ((((((/* implicit */long long int) arr_48 [i_2] [i_2] [i_28] [i_28] [i_33] [i_33])) + (-1362411140755600645LL))) + (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)127)))))));
                }
            }
            /* LoopSeq 4 */
            for (unsigned int i_34 = 0; i_34 < 24; i_34 += 4) 
            {
                var_54 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-22272))));
                var_55 = ((/* implicit */int) arr_38 [i_28] [i_34]);
                var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) ((unsigned int) arr_45 [i_2] [i_34] [i_34] [i_2])))));
                arr_108 [i_34] [i_34] [i_34] [i_34] = ((/* implicit */int) 1362411140755600625LL);
            }
            for (unsigned char i_35 = 0; i_35 < 24; i_35 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_36 = 0; i_36 < 24; i_36 += 4) 
                {
                    var_57 = (short)-1121;
                    /* LoopSeq 3 */
                    for (short i_37 = 0; i_37 < 24; i_37 += 4) 
                    {
                        arr_118 [i_35] [i_36] = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
                        var_58 = ((/* implicit */short) (+(((/* implicit */int) arr_65 [i_2] [i_2] [i_2]))));
                        var_59 ^= 4528250349436727909LL;
                        arr_119 [i_36] [i_2] [(_Bool)1] [i_36] [i_36] [i_36] [i_35] = (+(((/* implicit */int) (_Bool)1)));
                    }
                    for (signed char i_38 = 0; i_38 < 24; i_38 += 4) 
                    {
                        var_60 = ((/* implicit */_Bool) arr_0 [i_38]);
                        var_61 = ((/* implicit */signed char) (+(var_10)));
                        var_62 = 0ULL;
                        arr_122 [i_2] [i_28] [12LL] [i_36] [i_38] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
                        var_63 = ((/* implicit */unsigned short) max((var_63), (((/* implicit */unsigned short) 18446744073709551605ULL))));
                    }
                    for (unsigned short i_39 = 0; i_39 < 24; i_39 += 4) 
                    {
                        var_64 = ((/* implicit */int) ((arr_101 [(short)13]) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_39])) : (((/* implicit */int) (unsigned short)62319)))))));
                        arr_125 [i_2] [i_28] [i_35] [4LL] [i_39] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_102 [i_28] [i_28] [i_28] [i_28] [1LL] [i_28]))) - (var_3)));
                        var_65 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)(-32767 - 1)))));
                        var_66 ^= ((/* implicit */unsigned short) -1362411140755600640LL);
                    }
                }
                for (int i_40 = 0; i_40 < 24; i_40 += 4) 
                {
                    var_67 = ((/* implicit */unsigned int) 9916407705345808536ULL);
                    var_68 = ((/* implicit */short) (((~(1898965292923479524ULL))) <= (((/* implicit */unsigned long long int) arr_39 [i_28] [i_28] [i_28] [i_40]))));
                }
                /* LoopNest 2 */
                for (int i_41 = 0; i_41 < 24; i_41 += 4) 
                {
                    for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
                    {
                        {
                            arr_135 [i_2] [i_2] [i_35] [i_41] [i_42] [i_42] |= ((/* implicit */int) (~(15LL)));
                            var_69 = ((((/* implicit */int) var_5)) << (((16547778780786072095ULL) - (16547778780786072077ULL))));
                            arr_136 [i_2] [i_28] [i_35] [(short)8] [i_35] [i_42] = ((/* implicit */_Bool) ((unsigned short) 9223372036854775807LL));
                            arr_137 [(_Bool)1] [i_28] [i_35] [i_41] [9LL] = ((/* implicit */int) ((arr_72 [i_2] [i_28] [i_41] [i_42]) != (arr_72 [i_2] [i_28] [i_35] [i_42])));
                        }
                    } 
                } 
            }
            for (unsigned char i_43 = 0; i_43 < 24; i_43 += 4) /* same iter space */
            {
                var_70 = ((/* implicit */int) min((var_70), (((((((/* implicit */int) arr_94 [i_2] [i_43])) != (((/* implicit */int) (short)-22278)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -661965962))))) : ((~(arr_45 [i_2] [i_2] [i_2] [11ULL])))))));
                var_71 = ((/* implicit */unsigned int) max((var_71), (((/* implicit */unsigned int) (unsigned char)151))));
                var_72 = ((/* implicit */unsigned short) -4528250349436727907LL);
            }
            for (unsigned char i_44 = 0; i_44 < 24; i_44 += 4) /* same iter space */
            {
                var_73 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) != (1898965292923479524ULL)));
                arr_144 [i_28] [i_28] [i_28] = ((/* implicit */unsigned short) (~(-1719696384)));
            }
            var_74 |= ((/* implicit */int) arr_76 [i_2] [i_2] [i_28] [i_28] [i_28]);
        }
    }
    var_75 = ((/* implicit */long long int) max((var_75), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_8)))))) - (((max((var_3), (((/* implicit */unsigned int) (_Bool)1)))) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
    var_76 ^= ((/* implicit */unsigned short) (unsigned char)144);
}
