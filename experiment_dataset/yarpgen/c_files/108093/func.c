/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108093
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
    var_19 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (0U)));
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26850))) : (((((/* implicit */_Bool) (short)2047)) ? (2U) : (4294967283U)))));
                    var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2] [i_2 - 1] [i_2 - 1] [(unsigned char)8]))))) ? ((+(((/* implicit */int) arr_5 [i_2] [i_2 + 1] [i_2 + 2] [(_Bool)1])))) : (((/* implicit */int) max(((unsigned short)65280), (((/* implicit */unsigned short) var_17)))))));
                    var_23 = ((/* implicit */long long int) var_13);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1 + 1] [i_2 - 1] [i_2] [i_3 + 2] [i_0] [6U] = ((/* implicit */unsigned short) var_5);
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1 + 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_10 [i_0 + 1] [(unsigned short)2] [i_2 - 1] [i_1 + 1])) : (arr_11 [i_0 - 2] [i_2 - 1] [i_3 + 2] [(_Bool)0] [i_4 - 2])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2] [10ULL] [(short)4]))) : (((((/* implicit */_Bool) 6007084392465347160LL)) ? (arr_12 [i_0] [i_1 - 1] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(_Bool)1] [(unsigned char)6] [i_2] [(_Bool)1]))))))) : (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (signed char)0))))))))));
                                var_25 ^= ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (+(var_13)))), (var_18))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)0)), (((arr_10 [i_0] [6ULL] [i_0] [(unsigned short)0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4] [i_1 + 1] [i_2]))) : (2286359364U))))))));
                                var_26 = ((/* implicit */unsigned char) ((long long int) var_18));
                                arr_15 [i_2 + 2] [i_2 + 2] [i_0] [i_0] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_1), (var_14)))) ? (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_8 [(unsigned char)10] [i_3 - 1] [i_4 + 1]))))))) | (var_12)));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (+((~(((/* implicit */int) var_7)))))))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_5 = 1; i_5 < 13; i_5 += 3) 
    {
        arr_18 [i_5 + 1] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) 22U)))));
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) max((((/* implicit */int) ((short) 774893625))), (8372224))))));
        /* LoopSeq 3 */
        for (long long int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
        {
            var_29 *= ((/* implicit */unsigned int) var_7);
            var_30 = ((/* implicit */short) (+(((arr_20 [i_5 - 1] [i_5 - 1] [i_5 - 1]) & (arr_20 [i_5 - 1] [i_6] [i_5])))));
        }
        for (long long int i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
        {
            arr_26 [i_5 + 1] [i_5 + 1] |= ((/* implicit */unsigned int) var_14);
            var_31 -= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_4)))))) & (((unsigned int) (unsigned short)65526))))) ? (arr_22 [i_5] [i_5 + 1] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
            /* LoopNest 2 */
            for (signed char i_8 = 1; i_8 < 12; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    {
                        var_32 = ((/* implicit */signed char) (short)16368);
                        var_33 += ((/* implicit */_Bool) max((((/* implicit */long long int) max(((signed char)-22), ((signed char)-22)))), (((((/* implicit */_Bool) arr_22 [i_5] [(_Bool)1] [i_9])) ? (6007084392465347153LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_9] [i_8] [i_7] [i_5]))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_10 = 3; i_10 < 10; i_10 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) arr_23 [i_10 + 2] [9ULL] [i_8 + 1]))));
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((signed char) arr_19 [i_5] [i_5 - 1])))));
                            var_36 ^= ((/* implicit */signed char) (~(arr_16 [i_5 + 1])));
                            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_8] [i_9] [i_10 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) : (((/* implicit */int) arr_24 [i_8]))));
                            var_38 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) (short)21864)))));
                        }
                        arr_33 [i_8] [i_7] [i_8] [i_8] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_23 [i_5] [i_8 - 1] [i_5])) : (((/* implicit */int) arr_24 [i_8]))))) ? (arr_17 [i_8 + 1]) : (var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-2147483647 - 1)), (((/* implicit */int) var_9))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
                    }
                } 
            } 
            arr_34 [i_5] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((6007084392465347160LL), (((/* implicit */long long int) arr_17 [i_5 + 1]))))))) ? (((/* implicit */int) arr_21 [i_7] [i_7] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) -2147483644)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                arr_37 [i_5] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_30 [i_5] [i_5] [i_5 - 1] [i_5]))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 1; i_12 < 11; i_12 += 2) 
                {
                    for (long long int i_13 = 2; i_13 < 12; i_13 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((short) arr_21 [i_5] [i_5 + 1] [i_13 + 1])))));
                            arr_42 [i_5] [i_12] [i_13 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [5U])) ? (((/* implicit */int) var_5)) : (-2147483644)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 15421166983257756020ULL))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (unsigned short)53191))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
            {
                arr_45 [i_5] [(short)10] [i_5] [i_14] = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_15)))));
                var_40 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (173274948634323739LL))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_17))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) arr_27 [i_7] [i_7] [i_7])) : (var_13)))) : (((((/* implicit */_Bool) 3210047276U)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (7569759706976794859LL)))));
                arr_46 [i_5] [i_7] [i_5] [i_14] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)32512))));
            }
        }
        for (short i_15 = 2; i_15 < 12; i_15 += 1) 
        {
            arr_50 [i_5 + 1] [i_5 + 1] = ((/* implicit */int) min(((_Bool)0), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_28 [i_5 + 1] [i_5 + 1] [i_5 + 1])))))))));
            var_42 = ((/* implicit */signed char) var_6);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_16 = 2; i_16 < 13; i_16 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_17 = 2; i_17 < 12; i_17 += 2) /* same iter space */
                {
                    var_43 = (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (short)-30994)))));
                    var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)31)))))));
                    var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_16 + 1] [i_17 + 1] [(short)9])))))));
                    var_46 = (~((~(((/* implicit */int) (_Bool)1)))));
                    var_47 = (-9223372036854775807LL - 1LL);
                }
                for (unsigned short i_18 = 2; i_18 < 12; i_18 += 2) /* same iter space */
                {
                    var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) (+(((((/* implicit */_Bool) var_0)) ? (var_16) : (((/* implicit */int) var_6)))))))));
                    var_49 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_14)) : (var_18))))));
                }
                var_50 = ((/* implicit */_Bool) (signed char)14);
            }
            for (long long int i_19 = 1; i_19 < 10; i_19 += 1) 
            {
                var_51 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)29230))));
                arr_61 [i_5] [i_15 + 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) arr_40 [i_19 + 3] [i_19 + 3] [i_19 - 1] [4LL])))));
                var_52 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) min(((unsigned char)17), (((/* implicit */unsigned char) (_Bool)1))))))));
                arr_62 [i_5] [i_15] [i_19] [i_15 - 2] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)90))));
            }
        }
        var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)65528)))))));
        arr_63 [i_5] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) && (((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) var_10)))))))), (arr_57 [i_5])));
    }
    for (unsigned int i_20 = 1; i_20 < 12; i_20 += 1) 
    {
        var_54 = ((/* implicit */unsigned long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)236)), ((short)-30814))))))), (arr_32 [i_20 + 1] [i_20 + 1] [i_20 + 1])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_21 = 0; i_21 < 13; i_21 += 3) /* same iter space */
        {
            arr_68 [i_20] [i_20] = ((/* implicit */unsigned short) arr_30 [i_20] [i_20 - 1] [i_20 + 1] [i_20 - 1]);
            arr_69 [i_20] = ((/* implicit */unsigned short) ((int) -2199724594286902044LL));
            var_55 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (unsigned char)255))))) ? (arr_25 [12ULL] [i_21]) : (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (unsigned short)7))))));
            var_56 = ((/* implicit */unsigned long long int) ((long long int) arr_60 [3] [i_21]));
        }
        for (unsigned short i_22 = 0; i_22 < 13; i_22 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_23 = 1; i_23 < 12; i_23 += 1) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (unsigned int i_25 = 1; i_25 < 11; i_25 += 4) 
                    {
                        {
                            var_57 = ((/* implicit */unsigned long long int) min((var_57), (((/* implicit */unsigned long long int) (short)-4))));
                            var_58 = ((/* implicit */unsigned char) min((var_58), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)227)) ? ((((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) 9560482538052170390ULL)) ? (arr_60 [i_20] [i_20]) : (arr_76 [(_Bool)1] [i_25 + 2] [i_20] [i_20] [6ULL] [(_Bool)1])))))))));
                            var_59 = ((/* implicit */short) ((var_16) % (((((/* implicit */_Bool) (~(arr_49 [i_20] [(unsigned char)0])))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) 181495942918274796LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_26 = 3; i_26 < 12; i_26 += 1) 
            {
                for (unsigned long long int i_27 = 0; i_27 < 13; i_27 += 2) 
                {
                    {
                        var_60 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_82 [i_20] [(signed char)8] [i_26 - 1] [i_26 - 1])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)76))))) ? (9560482538052170396ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-9002))))))));
                        var_61 = ((/* implicit */short) ((max((var_2), (((/* implicit */unsigned long long int) arr_23 [i_22] [i_26 - 3] [i_26 - 2])))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_80 [(_Bool)1] [i_20 + 1] [i_20])))))));
                    }
                } 
            } 
            var_62 = ((/* implicit */int) var_10);
            arr_85 [(short)6] [i_20] [4U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1208043069)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_20 - 1] [i_20 - 1] [i_20 + 1] [i_20 - 1])) ? (((/* implicit */int) arr_23 [i_20 - 1] [i_20 - 1] [i_20 - 1])) : (((/* implicit */int) arr_29 [i_20 + 1] [i_20 + 1] [i_20 - 1] [i_20 - 1]))))) : ((+(3282462947U)))));
        }
        for (unsigned short i_28 = 0; i_28 < 13; i_28 += 3) /* same iter space */
        {
            var_63 = ((/* implicit */unsigned short) max((var_63), (((/* implicit */unsigned short) (-(max((2147483647), (((/* implicit */int) (signed char)-66)))))))));
            var_64 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((signed char) var_18))), (var_18)));
        }
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 13; i_29 += 3) 
        {
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                {
                    arr_96 [i_30] [(signed char)2] [(signed char)2] [i_20] |= ((/* implicit */int) (-(((arr_94 [i_20 - 1] [i_20] [i_20 + 1] [i_20 - 1]) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_20] [(short)2] [i_20 - 1] [i_20 - 1] [i_20 - 1])))))));
                    var_65 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((int) (!(((/* implicit */_Bool) (short)7))))) : (((((/* implicit */_Bool) -8717169964270009924LL)) ? (2147483647) : (((/* implicit */int) (unsigned short)56588))))));
                    /* LoopNest 2 */
                    for (unsigned int i_31 = 4; i_31 < 11; i_31 += 3) 
                    {
                        for (unsigned int i_32 = 1; i_32 < 12; i_32 += 1) 
                        {
                            {
                                var_66 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */int) max((arr_51 [(unsigned char)9] [i_30] [(unsigned char)9]), (arr_51 [i_20 - 1] [i_29] [i_32 - 1])))) : (min((((/* implicit */int) arr_77 [7U] [i_32] [i_20] [i_20] [i_20] [i_20] [i_20])), (var_16)))));
                                var_67 = ((/* implicit */_Bool) var_2);
                                var_68 |= ((/* implicit */unsigned int) (-((-(((((/* implicit */_Bool) (unsigned short)23364)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_17))))))));
                                var_69 = ((/* implicit */long long int) max((var_69), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)14)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_33 = 2; i_33 < 10; i_33 += 1) 
                    {
                        var_70 = ((/* implicit */short) max((var_70), (((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */unsigned short) (short)-15)), ((unsigned short)1)))), (min((((/* implicit */long long int) (_Bool)1)), (-6262130305866723104LL))))))));
                        var_71 = ((/* implicit */unsigned int) (-(var_15)));
                    }
                }
            } 
        } 
    }
    for (long long int i_34 = 0; i_34 < 16; i_34 += 4) 
    {
        var_72 = ((/* implicit */unsigned int) max((var_72), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_106 [i_34])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_105 [i_34]))))), (((long long int) arr_106 [i_34])))))));
        var_73 = ((/* implicit */unsigned int) max((var_73), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) min((var_12), (((/* implicit */unsigned int) ((short) arr_105 [(_Bool)1])))))) : (((-6262130305866723104LL) % (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_10)), ((unsigned char)7))))))))))));
        var_74 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_105 [i_34]))) % (1012504331U)))), ((~((~(-3195600792740965827LL)))))));
    }
    var_75 = ((/* implicit */int) min((var_75), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (~((~(((/* implicit */int) var_10))))))))))));
}
