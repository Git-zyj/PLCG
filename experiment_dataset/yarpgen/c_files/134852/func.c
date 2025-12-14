/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134852
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((unsigned long long int) var_7))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) -3948227709839944790LL)))))) : (1398534763U)));
    var_13 += ((/* implicit */short) var_5);
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] |= ((/* implicit */int) arr_3 [16ULL]);
                    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) min((min((18446744073709551615ULL), (arr_3 [3U]))), (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1082603738U)))))))));
                    arr_8 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))), ((~(1132601933U))))), (((/* implicit */unsigned int) (!(((var_7) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                    arr_9 [i_2] [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) (((!(var_8))) ? (((/* implicit */int) var_1)) : (((int) 1065353216))))) ? (6079872238656948661ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_3])) ? (min((((((/* implicit */_Bool) arr_5 [i_0] [19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_9))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    arr_15 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) > (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)246)) && (((/* implicit */_Bool) (signed char)105)))))));
                }
            } 
        } 
    }
    for (int i_5 = 1; i_5 < 22; i_5 += 3) /* same iter space */
    {
        arr_18 [i_5] [i_5] = min((((/* implicit */unsigned int) ((signed char) var_1))), ((-(0U))));
        var_16 = (-(max((1225148917), (((/* implicit */int) (signed char)106)))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 22; i_6 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((-13LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
        arr_23 [i_6] [i_6] = arr_22 [i_6] [(unsigned char)5];
    }
    var_18 += ((/* implicit */unsigned short) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            arr_29 [i_7] = ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (short)12824)));
            var_19 ^= ((/* implicit */int) (((~(arr_25 [5U]))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13203837015007963327ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_7] [i_8]))))) : (((/* implicit */int) arr_26 [i_7]))));
            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1032192))));
        }
        for (short i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 4; i_11 < 21; i_11 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            arr_40 [16ULL] [9ULL] [16ULL] [i_10] [i_10] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_7] [i_7])))))));
                            arr_41 [i_7] [i_7] [i_7] [i_12] &= ((/* implicit */long long int) (-(((/* implicit */int) var_11))));
                            var_22 *= ((((/* implicit */_Bool) (+(arr_25 [i_10])))) && (((/* implicit */_Bool) var_2)));
                            var_23 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (unsigned char)181)) != (((/* implicit */int) (signed char)-117)))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((arr_24 [i_7] [i_7]) >= (arr_24 [i_7] [i_9]))))));
                        }
                        arr_42 [i_10] [i_10] = ((/* implicit */int) 13502941317800809801ULL);
                    }
                } 
            } 
            arr_43 [i_7] [i_9] |= ((((/* implicit */_Bool) (short)6199)) ? (12772408566187559252ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))));
        }
        for (long long int i_13 = 3; i_13 < 23; i_13 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) ((unsigned int) ((long long int) (short)-2)));
            var_26 = ((/* implicit */short) (!(arr_34 [i_13] [i_13] [i_13] [i_7])));
            arr_46 [i_7] [i_13] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(73387172)))) / (-23LL)));
            arr_47 [i_7] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) arr_37 [i_7] [i_13] [i_13])) * (((/* implicit */int) arr_37 [i_7] [i_7] [i_13 - 3]))));
        }
        for (long long int i_14 = 3; i_14 < 23; i_14 += 1) /* same iter space */
        {
            arr_52 [i_14] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)16188)) || (((/* implicit */_Bool) var_10)))))));
            arr_53 [i_14] = ((/* implicit */int) arr_35 [i_7] [i_14 + 1] [i_14]);
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 24; i_15 += 2) 
            {
                for (long long int i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    for (long long int i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) arr_45 [i_17]);
                            arr_62 [i_14] = ((/* implicit */unsigned long long int) (unsigned short)65533);
                        }
                    } 
                } 
            } 
        }
        arr_63 [i_7] = ((/* implicit */unsigned char) arr_50 [(unsigned short)1] [i_7] [(unsigned short)1]);
        var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((arr_58 [i_7] [i_7] [i_7] [1U]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77)))))));
    }
    for (long long int i_18 = 0; i_18 < 25; i_18 += 4) 
    {
        /* LoopSeq 4 */
        for (long long int i_19 = 2; i_19 < 24; i_19 += 2) 
        {
            var_29 = ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-49)), (-1714581362)));
            var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24576))) : (2852622299437196423LL))) + (((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ ((-2147483647 - 1)))))));
        }
        for (long long int i_20 = 0; i_20 < 25; i_20 += 4) 
        {
            var_31 = ((/* implicit */signed char) ((int) min(((-(var_7))), (((/* implicit */long long int) arr_69 [i_20] [i_18])))));
            /* LoopNest 3 */
            for (unsigned int i_21 = 0; i_21 < 25; i_21 += 3) 
            {
                for (short i_22 = 0; i_22 < 25; i_22 += 1) 
                {
                    for (int i_23 = 0; i_23 < 25; i_23 += 3) 
                    {
                        {
                            arr_78 [i_18] [i_20] [3ULL] [i_22] [i_23] [i_22] = ((/* implicit */unsigned short) (_Bool)1);
                            arr_79 [i_18] [i_20] [i_21] [i_22] [i_23] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)7)) ? (287667426198290432LL) : (((/* implicit */long long int) min(((+(((/* implicit */int) var_1)))), ((-(((/* implicit */int) var_8)))))))));
                            arr_80 [i_22] [i_20] [(unsigned short)2] [i_22] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */int) arr_76 [i_18] [i_22] [2ULL] [i_23])) - (((/* implicit */int) var_1)))))))));
                        }
                    } 
                } 
            } 
            arr_81 [i_18] [i_20] = (short)0;
        }
        /* vectorizable */
        for (unsigned int i_24 = 0; i_24 < 25; i_24 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                for (unsigned long long int i_26 = 0; i_26 < 25; i_26 += 4) 
                {
                    for (long long int i_27 = 0; i_27 < 25; i_27 += 2) 
                    {
                        {
                            arr_94 [i_26] [i_18] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_72 [i_18]))));
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_84 [i_18] [i_24] [i_25] [i_26])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 4294967270U)))))));
                            var_33 = ((/* implicit */unsigned int) var_9);
                        }
                    } 
                } 
            } 
            arr_95 [14] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)23038))))) && ((_Bool)1)));
            var_34 |= ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (((((/* implicit */_Bool) var_9)) ? (12271991249042675678ULL) : (((/* implicit */unsigned long long int) 433050610435895336LL)))));
        }
        /* vectorizable */
        for (int i_28 = 0; i_28 < 25; i_28 += 3) 
        {
            var_35 = ((/* implicit */unsigned char) (-(3ULL)));
            arr_100 [i_28] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_71 [i_18] [i_28] [i_28])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9948))) : (8388096U)))));
            /* LoopNest 3 */
            for (long long int i_29 = 0; i_29 < 25; i_29 += 2) 
            {
                for (unsigned int i_30 = 2; i_30 < 24; i_30 += 3) 
                {
                    for (unsigned short i_31 = 0; i_31 < 25; i_31 += 2) 
                    {
                        {
                            arr_108 [i_28] [23U] [i_29] [i_30] [(short)12] = ((/* implicit */unsigned int) var_9);
                            var_36 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4494723734223884252LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1479945935U)) ? (((/* implicit */unsigned long long int) 1184974820)) : (8ULL))))));
                            arr_109 [i_18] [i_28] [i_29] [i_30] [i_28] = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) != (arr_66 [i_31] [i_28]));
                            arr_110 [i_28] [i_28] [i_29] [i_29] [i_28] [i_28] = ((/* implicit */int) ((short) 1099511627775LL));
                            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_64 [i_18])) ? (((/* implicit */int) arr_76 [i_30] [i_28] [i_28] [i_18])) : (1073741792)));
                        }
                    } 
                } 
            } 
            arr_111 [7ULL] [7ULL] [i_28] = ((/* implicit */signed char) ((arr_83 [i_28]) * (((/* implicit */int) var_8))));
            var_38 = ((/* implicit */unsigned int) ((var_0) & (((/* implicit */long long int) (-2147483647 - 1)))));
        }
        var_39 = ((/* implicit */unsigned int) 8386560);
        /* LoopNest 2 */
        for (short i_32 = 0; i_32 < 25; i_32 += 4) 
        {
            for (unsigned long long int i_33 = 3; i_33 < 22; i_33 += 4) 
            {
                {
                    var_40 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (var_10)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))) + (max((((/* implicit */long long int) var_2)), (var_7))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)96)))))));
                    var_41 = ((/* implicit */int) arr_86 [i_18] [i_32] [i_32] [i_33]);
                    arr_119 [i_18] [i_18] [i_32] [i_32] = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_70 [i_18])) != (var_9)))), ((-(((/* implicit */int) (signed char)-18)))))) == (((/* implicit */int) (short)(-32767 - 1)))));
                    /* LoopNest 2 */
                    for (signed char i_34 = 2; i_34 < 23; i_34 += 1) 
                    {
                        for (int i_35 = 0; i_35 < 25; i_35 += 1) 
                        {
                            {
                                arr_125 [i_18] [i_34] = ((/* implicit */long long int) arr_116 [i_33] [i_33] [i_33] [i_33 - 3]);
                                arr_126 [(unsigned char)1] [i_34] [i_33] [i_34] [i_35] [i_33] = ((/* implicit */signed char) (-(2305843007066210304ULL)));
                                arr_127 [i_18] [i_32] [i_34] [i_34] [i_35] = ((/* implicit */short) (-((-(((/* implicit */int) (unsigned char)254))))));
                                var_42 = (~(((/* implicit */int) ((((/* implicit */int) arr_71 [i_33 - 1] [i_34 - 2] [i_34])) < (((/* implicit */int) ((((/* implicit */_Bool) 2345304229U)) && (((/* implicit */_Bool) (short)192)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_36 = 2; i_36 < 24; i_36 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_37 = 2; i_37 < 24; i_37 += 1) 
        {
            for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
            {
                {
                    var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1331769441U)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                    arr_136 [i_36] [i_36] [(_Bool)1] [(_Bool)1] = ((unsigned int) min((((/* implicit */unsigned int) var_3)), (arr_133 [i_37 - 1] [20ULL] [i_37 - 1] [20LL])));
                }
            } 
        } 
        var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_129 [i_36])) ? (((/* implicit */int) ((((/* implicit */_Bool) 712723275603268552ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_73 [4LL] [4LL])) ? (((/* implicit */long long int) 2918102685U)) : (3846208593803425142LL))))))) : (((/* implicit */int) ((short) 50331648ULL)))));
        arr_137 [i_36] |= ((/* implicit */unsigned long long int) (signed char)115);
        /* LoopNest 3 */
        for (signed char i_39 = 0; i_39 < 25; i_39 += 1) 
        {
            for (unsigned long long int i_40 = 1; i_40 < 24; i_40 += 1) 
            {
                for (int i_41 = 3; i_41 < 22; i_41 += 1) 
                {
                    {
                        arr_148 [i_41] [i_40] [i_40] [i_36] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)224)))), (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_67 [i_41] [i_41 - 2] [i_40 - 1])) && (((/* implicit */_Bool) -1055202669)))))) : (((((/* implicit */_Bool) arr_89 [i_36 + 1] [i_39])) ? (((/* implicit */unsigned long long int) 499058592U)) : (arr_122 [i_36 - 2] [i_40] [i_40])))));
                        arr_149 [i_36] [i_36] [i_39] [i_39] [i_40] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((signed char) (unsigned short)7680))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))));
                        arr_150 [i_40] [11LL] [11LL] [i_40] [11LL] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) var_10)) <= (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)1)) : (-1752088825))))))));
                    }
                } 
            } 
        } 
    }
}
