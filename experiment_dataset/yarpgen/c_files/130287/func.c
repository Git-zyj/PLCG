/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130287
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = var_15;
                                var_20 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) 4684302589565035786ULL)))))));
                                var_22 = ((/* implicit */signed char) max((max((arr_12 [i_0 - 1] [i_3 + 1] [i_3 + 1] [i_4]), (arr_12 [(_Bool)1] [i_3 + 1] [i_2] [i_4]))), ((!(((/* implicit */_Bool) var_12))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_13 [i_2] [i_2] [i_1] [(signed char)4]))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_24 = (~(7370681253685498241ULL));
                                var_25 = ((/* implicit */signed char) (+(8191ULL)));
                                var_26 += (!(((var_5) >= (var_11))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_18), (max((7370681253685498241ULL), (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)63), ((signed char)-123))))))) : (((/* implicit */int) ((_Bool) var_13)))));
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_8 = 2; i_8 < 17; i_8 += 3) /* same iter space */
        {
            var_28 = max(((~(var_5))), (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_4))))) ? (((var_12) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) 8191ULL)) ? (arr_16 [i_8 - 1] [4ULL]) : (18446744073709543452ULL))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_9 = 1; i_9 < 16; i_9 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_29 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((8195ULL) >> (((18446744073709543452ULL) - (18446744073709543434ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 17900956995863421140ULL))))) : (((((/* implicit */_Bool) arr_5 [i_7] [i_9])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))));
                    arr_31 [i_7] [i_8 + 1] [i_8] [i_8] [2ULL] [i_9] = ((/* implicit */unsigned long long int) (_Bool)0);
                    arr_32 [i_9 + 2] [i_8] = ((/* implicit */_Bool) 18446744073709551615ULL);
                }
                var_30 = ((/* implicit */unsigned long long int) max((var_30), (var_18)));
            }
        }
        for (signed char i_11 = 2; i_11 < 17; i_11 += 3) /* same iter space */
        {
            var_31 = ((/* implicit */signed char) ((arr_7 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
            /* LoopSeq 1 */
            for (signed char i_12 = 1; i_12 < 15; i_12 += 1) 
            {
                var_32 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_7] [i_11] [i_12] [(signed char)3] [i_7]))));
                arr_38 [i_7] [i_12] [i_11] [i_12 + 1] = ((/* implicit */signed char) var_9);
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_13 = 1; i_13 < 14; i_13 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
                    {
                        var_33 -= ((/* implicit */unsigned long long int) ((arr_33 [i_11 - 1] [i_11 - 1] [i_11 - 2]) > (arr_16 [i_11 - 1] [i_7])));
                        arr_45 [i_14] [i_14] [(_Bool)1] [i_12] [i_14] [16ULL] = var_6;
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_35 *= ((/* implicit */signed char) 18446744073709543424ULL);
                        var_36 = ((/* implicit */_Bool) arr_5 [i_12 + 2] [i_12 + 1]);
                        var_37 *= ((/* implicit */unsigned long long int) ((arr_0 [i_12 - 1]) ? (((/* implicit */int) arr_0 [i_12 + 2])) : (((/* implicit */int) arr_0 [i_12 + 3]))));
                    }
                    arr_50 [i_7] [(signed char)3] [i_12] [i_12] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_11)))) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_13 - 1] [i_11 + 1])))));
                    var_38 = arr_21 [i_7];
                }
                for (signed char i_16 = 0; i_16 < 18; i_16 += 3) 
                {
                    var_39 = ((/* implicit */unsigned long long int) max((var_39), ((+(max((var_8), (min((((/* implicit */unsigned long long int) (signed char)105)), (24ULL)))))))));
                    var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))));
                }
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 18; i_17 += 4) 
                {
                    var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) max(((~(18274380382536980314ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) min((((/* implicit */signed char) arr_55 [i_7] [4ULL] [i_12] [i_17])), (arr_44 [i_7] [i_7] [i_11] [i_17] [(signed char)0] [(signed char)8] [16ULL]))))))))))));
                    var_42 -= ((/* implicit */signed char) ((((var_18) >= (arr_57 [i_17] [i_12 + 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_57 [i_17] [i_12 + 3]) >= (545787077846130476ULL))))) : (11076062820024053357ULL)));
                    var_43 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 172363691172571302ULL)) ? (5311382121123193005ULL) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (min((var_11), (var_11)))))));
                }
            }
        }
        var_44 = ((/* implicit */unsigned long long int) (_Bool)1);
        var_45 = ((/* implicit */_Bool) arr_1 [i_7]);
        var_46 |= ((/* implicit */signed char) 9803663864301008482ULL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 1) 
        {
            var_47 *= ((((/* implicit */_Bool) arr_33 [(signed char)12] [i_18] [(signed char)11])) ? (arr_28 [i_7] [10ULL]) : (arr_33 [i_7] [i_7] [i_7]));
            /* LoopSeq 4 */
            for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 3) /* same iter space */
            {
                arr_62 [i_19] = ((/* implicit */signed char) (_Bool)0);
                var_48 -= ((/* implicit */_Bool) 17900956995863421140ULL);
                arr_63 [i_7] [i_18] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_7] [i_19])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_14))));
                var_49 -= ((/* implicit */signed char) ((var_15) ? (14092750265729332619ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_15))))));
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 18; i_20 += 1) 
                {
                    for (unsigned long long int i_21 = 3; i_21 < 17; i_21 += 3) 
                    {
                        {
                            var_50 ^= ((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((/* implicit */int) (signed char)15))));
                            var_51 = arr_54 [(signed char)2] [(signed char)2] [i_19] [i_7] [14ULL] [i_20];
                            arr_68 [i_20] [i_18] [i_19] [(_Bool)1] [(signed char)1] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_30 [i_7] [i_7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) : (18446744073709543420ULL)))) ? (((/* implicit */int) arr_18 [i_20] [(_Bool)1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551594ULL)))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 3) /* same iter space */
            {
                arr_71 [i_22] [i_18] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) 23ULL)) : (arr_58 [i_7] [i_7] [i_7])));
                /* LoopSeq 3 */
                for (unsigned long long int i_23 = 2; i_23 < 17; i_23 += 1) 
                {
                    arr_74 [i_7] [i_18] [i_22] [i_22] = (i_22 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_69 [i_23 - 2] [i_22] [i_23 + 1] [i_23 + 1])) >> (((((/* implicit */int) arr_69 [i_23 - 2] [i_22] [i_23 + 1] [i_23 + 1])) - (43)))))) : (((/* implicit */_Bool) ((((((/* implicit */int) arr_69 [i_23 - 2] [i_22] [i_23 + 1] [i_23 + 1])) + (2147483647))) >> (((((((/* implicit */int) arr_69 [i_23 - 2] [i_22] [i_23 + 1] [i_23 + 1])) - (43))) + (171))))));
                    /* LoopSeq 1 */
                    for (signed char i_24 = 1; i_24 < 17; i_24 += 4) 
                    {
                        arr_77 [i_7] [(_Bool)1] [4ULL] [i_23 + 1] [(_Bool)1] |= ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_23 + 1] [i_23 + 1]))));
                        arr_78 [i_7] [i_7] [(_Bool)1] [i_7] [i_7] [i_22] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_47 [(_Bool)1] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))));
                        var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) ((_Bool) (signed char)120)))));
                        var_53 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)(-127 - 1))) + ((-(((/* implicit */int) (_Bool)1))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_54 = ((arr_27 [(signed char)8] [i_18] [i_22]) >= (var_18));
                        var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) (~(15079160158392160454ULL))))));
                        var_56 *= ((/* implicit */signed char) ((arr_21 [i_23 - 1]) ? (arr_41 [i_7] [i_18] [(signed char)4] [i_25]) : (arr_81 [i_23 - 2] [i_23] [(_Bool)1] [i_23 - 2] [i_23 - 2])));
                        var_57 -= (!(((/* implicit */_Bool) arr_46 [i_18] [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_23])));
                        var_58 = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                    }
                }
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    var_59 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_75 [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) var_10))));
                    var_60 = ((/* implicit */_Bool) min((var_60), (((/* implicit */_Bool) var_4))));
                    var_61 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_7]))));
                    var_62 = ((/* implicit */unsigned long long int) max((var_62), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_48 [i_7] [2ULL] [i_18] [i_18] [i_22] [i_26] [(signed char)6]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                    /* LoopSeq 3 */
                    for (signed char i_27 = 0; i_27 < 18; i_27 += 3) /* same iter space */
                    {
                        var_63 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_75 [i_7] [i_22] [i_27] [i_26] [13ULL])) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_7] [i_7] [(_Bool)0] [i_18] [i_27])))));
                        var_64 *= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [2ULL] [i_26]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_18] [(_Bool)1]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_11))));
                        arr_86 [i_7] [i_7] [i_7] [(signed char)0] [i_7] [i_26] [i_7] &= arr_7 [i_7] [i_18] [i_22] [13ULL] [i_26] [i_27];
                        var_65 = ((/* implicit */_Bool) min((var_65), (((/* implicit */_Bool) var_18))));
                    }
                    for (signed char i_28 = 0; i_28 < 18; i_28 += 3) /* same iter space */
                    {
                        arr_90 [i_7] [i_22] [(signed char)7] [i_26] [(signed char)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_60 [i_7] [i_7] [(_Bool)1] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_60 [i_7] [(_Bool)1] [(_Bool)1] [(signed char)9])));
                        var_66 *= ((/* implicit */_Bool) (~(((/* implicit */int) arr_42 [(signed char)14] [(signed char)8] [(signed char)8] [i_28]))));
                        var_67 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_0) : (var_8)));
                        var_68 = ((/* implicit */_Bool) (signed char)-23);
                    }
                    for (unsigned long long int i_29 = 1; i_29 < 17; i_29 += 1) 
                    {
                        var_69 = ((/* implicit */_Bool) var_12);
                        arr_94 [i_22] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_65 [i_29 - 1] [i_29 - 1] [i_29 - 1]))));
                        var_70 = ((/* implicit */signed char) max((var_70), (((/* implicit */signed char) var_12))));
                        var_71 = ((/* implicit */signed char) min((var_71), (((/* implicit */signed char) var_15))));
                        var_72 ^= ((/* implicit */_Bool) (((!(var_15))) ? (((/* implicit */int) ((arr_67 [i_7] [i_18] [i_22] [i_26] [12ULL] [i_29] [14ULL]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) : (((/* implicit */int) arr_75 [10ULL] [i_18] [i_22] [i_18] [i_29]))));
                    }
                }
                for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
                {
                    arr_98 [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_54 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_30] [16ULL] [i_22])) : (((/* implicit */int) var_3))));
                    var_73 ^= (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) - (arr_57 [(_Bool)1] [(_Bool)1]))));
                }
            }
            for (unsigned long long int i_31 = 0; i_31 < 18; i_31 += 3) /* same iter space */
            {
                var_74 += ((/* implicit */signed char) (-(arr_16 [i_31] [i_7])));
                /* LoopSeq 2 */
                for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                {
                    arr_104 [i_31] [i_18] [i_31] [3ULL] = 0ULL;
                    var_75 = ((/* implicit */unsigned long long int) min((var_75), (0ULL)));
                    var_76 = 16510739372743259024ULL;
                }
                for (unsigned long long int i_33 = 0; i_33 < 18; i_33 += 4) 
                {
                    var_77 = ((/* implicit */_Bool) min((var_77), (var_7)));
                    var_78 = ((/* implicit */unsigned long long int) min((var_78), (((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? ((+(arr_56 [i_7] [i_7] [i_18] [(_Bool)1] [i_31] [i_18]))) : (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    var_79 = ((/* implicit */_Bool) var_12);
                    var_80 = ((/* implicit */unsigned long long int) max((var_80), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_7])) | (((/* implicit */int) (signed char)86)))))));
                    var_81 -= (_Bool)0;
                }
            }
            for (unsigned long long int i_34 = 0; i_34 < 18; i_34 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_36 = 1; i_36 < 16; i_36 += 4) 
                    {
                        var_82 |= ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_12))))));
                        var_83 = ((/* implicit */signed char) ((((var_18) >> (((5969418997334078372ULL) - (5969418997334078357ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    }
                    var_84 = ((/* implicit */signed char) min((var_84), (((/* implicit */signed char) var_12))));
                }
                var_85 = ((/* implicit */signed char) min((var_85), (((/* implicit */signed char) ((_Bool) arr_41 [i_34] [10ULL] [10ULL] [i_7])))));
            }
            var_86 = ((/* implicit */_Bool) min((var_86), (var_13)));
        }
    }
}
