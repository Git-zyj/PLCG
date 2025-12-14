/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10505
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) -2883761808047947620LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)14)) && (((/* implicit */_Bool) var_18))))) : (((/* implicit */int) ((((/* implicit */_Bool) 16651783542317798749ULL)) || (((/* implicit */_Bool) var_18)))))))) || ((!(((/* implicit */_Bool) var_12))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((/* implicit */int) (unsigned short)0))))))))));
                    arr_6 [9ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) (unsigned char)23)) : (((int) (-(((/* implicit */int) var_18)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((var_13), (((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_4 + 1] [i_5]))))))));
                        arr_14 [i_0] [i_0] [i_0] [3LL] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((arr_3 [i_0] [3LL] [i_5]) >> (((((/* implicit */int) arr_2 [i_0])) - (50)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_7 [i_0] [i_0]))) && (((/* implicit */_Bool) arr_13 [(_Bool)0])))))) : (var_8)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((signed char) ((arr_16 [i_0] [i_3] [i_6] [i_7]) == (arr_16 [i_0] [i_3] [i_6] [i_7]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((arr_10 [i_0] [i_3] [4LL] [i_8]) >= (((/* implicit */long long int) ((/* implicit */int) ((var_3) == (((/* implicit */long long int) var_2)))))))) ? (max((((arr_8 [(unsigned short)2] [i_3]) ^ (arr_7 [i_0] [i_0]))), (arr_21 [i_0] [i_3] [i_6] [i_7] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_8] [i_7] [(signed char)3] [i_0])))));
                            arr_23 [i_0] = ((/* implicit */signed char) arr_4 [i_0] [(unsigned short)0] [i_0] [i_0]);
                            arr_24 [i_0] [i_3] [i_6] [i_7] [i_8] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_7] [i_3] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_10 [9LL] [i_6] [i_7] [i_8])))) : (16651783542317798753ULL)))));
                        }
                        arr_25 [i_0] [i_0] [5U] [i_6] [i_6] [i_7] = ((int) ((((/* implicit */int) (unsigned short)24676)) ^ (((((/* implicit */int) (unsigned short)31745)) >> (((1794960531391752867ULL) - (1794960531391752852ULL)))))));
                    }
                } 
            } 
            arr_26 [i_0] = ((/* implicit */long long int) ((9972751894808600009ULL) < (((/* implicit */unsigned long long int) var_12))));
        }
        for (long long int i_9 = 2; i_9 < 8; i_9 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) -1842043127);
            /* LoopNest 3 */
            for (unsigned short i_10 = 2; i_10 < 8; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_10] [i_11] [i_10]))));
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((signed char) ((long long int) (signed char)-118)))), (max((arr_35 [i_9] [i_9 + 2] [i_9] [i_9 - 1] [i_9]), (((/* implicit */long long int) ((arr_21 [9U] [(_Bool)0] [i_10] [i_9] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                            arr_37 [i_9] = ((/* implicit */long long int) ((arr_17 [(signed char)0] [i_9] [i_11] [i_12]) < (((/* implicit */int) ((signed char) 1842043136)))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_10] [i_10 + 3] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_18 [i_0] [i_9] [4LL] [2LL] [i_12])))) >= (((var_2) - (((/* implicit */unsigned int) var_13)))))))) : (((long long int) arr_11 [i_0] [i_9] [i_10]))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) max((var_1), (var_6)))) ? (((((/* implicit */long long int) var_7)) % (var_3))) : (((var_8) | (633331136192565340LL)))))))));
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                arr_40 [i_9] [i_9] [i_9] = ((/* implicit */signed char) var_3);
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) arr_2 [i_13]))));
            }
        }
    }
    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 4) 
        {
            for (long long int i_16 = 0; i_16 < 11; i_16 += 2) 
            {
                for (long long int i_17 = 1; i_17 < 10; i_17 += 4) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_51 [i_14] [i_14] [i_14] [i_14])) ? (7427881009834787051LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_18))))));
                        var_30 = min((((/* implicit */long long int) var_15)), (633331136192565341LL));
                        var_31 = ((/* implicit */_Bool) ((((((-1753061108) * (((/* implicit */int) arr_45 [i_14] [i_15] [i_14])))) << (((((((/* implicit */_Bool) (unsigned short)11271)) ? (arr_0 [i_14] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))))) - (4570026312879071200LL))))) >> (((((long long int) (+(((/* implicit */int) var_10))))) - (36LL)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            /* LoopNest 2 */
            for (int i_19 = 1; i_19 < 8; i_19 += 3) 
            {
                for (signed char i_20 = 2; i_20 < 10; i_20 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) -633331136192565340LL))));
                        /* LoopSeq 1 */
                        for (unsigned short i_21 = 1; i_21 < 9; i_21 += 1) 
                        {
                            arr_65 [(_Bool)1] [(_Bool)1] [i_19] [i_14] [i_21] = ((/* implicit */unsigned char) arr_1 [i_14] [i_14]);
                            var_33 &= arr_43 [i_19] [i_20];
                            arr_66 [i_14] [i_18] [i_19] [i_20] [i_21] = (i_14 % 2 == zero) ? (((/* implicit */unsigned char) ((9223372036854775807LL) == (((/* implicit */long long int) ((((/* implicit */int) var_18)) / (((/* implicit */int) arr_34 [i_14] [i_18] [i_19] [i_20] [2LL])))))))) : (((/* implicit */unsigned char) ((9223372036854775807LL) == (((/* implicit */long long int) ((((/* implicit */int) var_18)) * (((/* implicit */int) arr_34 [i_14] [i_18] [i_19] [i_20] [2LL]))))))));
                            var_34 = ((/* implicit */unsigned short) var_9);
                        }
                        var_35 = ((/* implicit */unsigned int) ((((long long int) arr_18 [(_Bool)1] [(_Bool)1] [i_19] [i_20] [i_20])) - (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)3)))))));
                        arr_67 [i_14] [i_20] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) -5949781472313006231LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_20] [i_19] [i_18] [i_14]))) : (arr_61 [i_20] [i_19] [i_14]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_22 = 0; i_22 < 11; i_22 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (unsigned short i_24 = 1; i_24 < 10; i_24 += 4) 
                    {
                        {
                            arr_76 [i_14] [i_14] [i_18] [i_18] [9U] [i_24] = ((/* implicit */unsigned short) ((long long int) var_1));
                            var_36 = ((/* implicit */unsigned long long int) arr_43 [i_14] [i_18]);
                            arr_77 [i_14] [(unsigned char)1] [i_22] [(unsigned char)1] [(unsigned char)1] [i_14] = (~(((((/* implicit */unsigned int) var_13)) % (arr_63 [i_14] [i_18] [i_22] [i_22] [i_23] [i_22]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_25 = 0; i_25 < 11; i_25 += 4) /* same iter space */
                {
                    arr_80 [i_14] [i_18] [1LL] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_9 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10]) & (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_49 [i_14] [i_14] [i_14])) / (((/* implicit */int) var_1)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_26 = 0; i_26 < 11; i_26 += 4) 
                    {
                        var_37 = ((/* implicit */_Bool) ((arr_44 [i_14] [i_25]) ? (((/* implicit */unsigned long long int) arr_82 [i_14] [i_18] [i_22] [i_25] [i_14])) : (((((/* implicit */unsigned long long int) 4294967295U)) ^ (4835328292267735609ULL)))));
                        arr_83 [i_14] [i_25] [i_14] [i_14] [i_14] [i_14] &= ((/* implicit */int) ((arr_62 [i_18] [i_22] [i_25]) ^ (((/* implicit */unsigned long long int) arr_54 [i_25]))));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_15 [i_14] [i_18] [i_25] [i_26])) + (arr_55 [i_14] [i_18])));
                    }
                    for (unsigned short i_27 = 2; i_27 < 8; i_27 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned char) ((16651783542317798719ULL) > (((/* implicit */unsigned long long int) 614102368532380620LL))));
                        var_40 = ((arr_13 [i_27 + 3]) & (arr_13 [i_27 - 1]));
                        var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) var_12))));
                        var_42 = ((((/* implicit */_Bool) arr_74 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) : (arr_68 [i_14] [i_18]));
                    }
                }
                for (unsigned char i_28 = 0; i_28 < 11; i_28 += 4) /* same iter space */
                {
                    var_43 &= ((/* implicit */unsigned short) var_5);
                    arr_90 [i_14] = ((/* implicit */unsigned char) arr_50 [i_14] [i_14]);
                    /* LoopSeq 4 */
                    for (unsigned short i_29 = 0; i_29 < 11; i_29 += 4) 
                    {
                        var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 139611588448485376LL)) && (((/* implicit */_Bool) arr_28 [i_18] [i_28])))))));
                        arr_94 [i_14] [i_14] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_34 [i_14] [1LL] [i_14] [i_28] [1LL])) : (arr_20 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])))) && (((/* implicit */_Bool) 18342907780386035008ULL))));
                        var_45 = ((/* implicit */unsigned int) var_16);
                        var_46 = ((/* implicit */unsigned short) 1746026362802226643ULL);
                    }
                    for (unsigned char i_30 = 1; i_30 < 7; i_30 += 2) /* same iter space */
                    {
                        var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((arr_39 [i_14] [i_14] [(_Bool)1]) > (((/* implicit */unsigned int) ((/* implicit */int) ((arr_34 [i_28] [i_18] [i_22] [i_28] [i_30]) && (((/* implicit */_Bool) -5949781472313006231LL)))))))))));
                        var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_30] [i_28] [i_22])) : (((/* implicit */int) var_1))));
                        var_49 = ((/* implicit */long long int) var_15);
                    }
                    for (unsigned char i_31 = 1; i_31 < 7; i_31 += 2) /* same iter space */
                    {
                        var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) var_10))));
                        arr_101 [i_14] [i_14] [(unsigned char)9] [i_22] [i_28] [i_28] [i_31] = ((/* implicit */long long int) (unsigned short)48490);
                        arr_102 [i_14] [i_18] [i_18] [i_22] [i_14] [i_31] = ((((/* implicit */_Bool) arr_47 [i_31 + 3])) ? (arr_47 [i_31 - 1]) : (arr_47 [i_31 + 1]));
                    }
                    for (unsigned int i_32 = 2; i_32 < 9; i_32 += 3) 
                    {
                        var_51 = ((/* implicit */unsigned long long int) (unsigned short)57391);
                        var_52 = ((/* implicit */unsigned short) arr_30 [i_14]);
                        var_53 = ((/* implicit */unsigned char) var_11);
                        arr_105 [i_14] [i_14] [i_14] [5LL] [5LL] [i_14] [i_22] = ((/* implicit */long long int) arr_50 [i_14] [i_14]);
                        var_54 = ((/* implicit */unsigned long long int) var_2);
                    }
                    var_55 = ((/* implicit */unsigned char) max((var_55), (((/* implicit */unsigned char) ((arr_85 [i_14] [i_18] [i_22] [i_22] [i_28]) > (arr_85 [i_14] [i_14] [i_14] [i_14] [i_14]))))));
                }
                /* LoopSeq 1 */
                for (long long int i_33 = 0; i_33 < 11; i_33 += 4) 
                {
                    arr_108 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (18342907780386034999ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                    var_56 = var_17;
                    var_57 = (i_14 % 2 == 0) ? (((((arr_71 [i_33] [i_14] [i_14] [i_14]) + (9223372036854775807LL))) << (((((arr_71 [i_14] [i_14] [i_22] [i_33]) + (498739401344762376LL))) - (1LL))))) : (((((arr_71 [i_33] [i_14] [i_14] [i_14]) + (9223372036854775807LL))) << (((((((arr_71 [i_14] [i_14] [i_22] [i_33]) + (498739401344762376LL))) - (1LL))) - (402347210306879995LL)))));
                }
                arr_109 [i_14] [i_14] [i_18] [i_22] = ((/* implicit */unsigned char) ((long long int) var_16));
                /* LoopNest 2 */
                for (unsigned char i_34 = 0; i_34 < 11; i_34 += 2) 
                {
                    for (unsigned short i_35 = 1; i_35 < 9; i_35 += 4) 
                    {
                        {
                            arr_115 [8LL] [i_34] [4LL] [4LL] [i_35] [i_35] [i_35] &= ((/* implicit */long long int) ((int) ((arr_106 [(_Bool)1] [i_18] [i_18] [i_18]) < (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                            var_58 = ((/* implicit */long long int) max((var_58), (arr_85 [i_14] [i_14] [i_22] [i_34] [i_35 + 2])));
                            var_59 = (!(((/* implicit */_Bool) arr_46 [i_14])));
                        }
                    } 
                } 
            }
        }
    }
    for (unsigned int i_36 = 0; i_36 < 11; i_36 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_37 = 1; i_37 < 1; i_37 += 1) 
        {
            for (long long int i_38 = 0; i_38 < 11; i_38 += 2) 
            {
                {
                    var_60 = ((/* implicit */long long int) max((var_60), (((/* implicit */long long int) ((unsigned short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_38] [i_36] [i_37] [4LL] [i_38]))) : (103836293323516591ULL))) - (((/* implicit */unsigned long long int) arr_92 [(_Bool)1] [i_38] [i_38] [i_38] [i_36] [i_36]))))))));
                    /* LoopSeq 1 */
                    for (long long int i_39 = 0; i_39 < 11; i_39 += 3) 
                    {
                        var_61 = ((/* implicit */long long int) var_10);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_40 = 3; i_40 < 7; i_40 += 3) 
                        {
                            var_62 = ((/* implicit */long long int) min((var_62), (((/* implicit */long long int) min((max((var_7), (((/* implicit */int) arr_11 [i_36] [i_36] [i_36])))), (var_7))))));
                            arr_129 [i_36] [i_37] [i_38] [i_37] [(unsigned short)8] = ((/* implicit */_Bool) (-(((/* implicit */int) ((11829354800164848716ULL) == (((/* implicit */unsigned long long int) -2147483645)))))));
                            var_63 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) max((((/* implicit */unsigned char) (_Bool)1)), (arr_69 [i_36])))))) & (max((((/* implicit */long long int) ((unsigned short) var_10))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_35 [i_36] [i_37] [8LL] [i_39] [8LL])))))));
                            var_64 = ((/* implicit */int) min((var_64), (((/* implicit */int) ((signed char) arr_68 [i_36] [i_37])))));
                            var_65 = ((/* implicit */_Bool) min((var_65), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_36] [i_37 - 1] [i_38] [i_39] [i_39] [i_39])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))) : (-7244346491388303874LL))))));
                        }
                        for (long long int i_41 = 2; i_41 < 8; i_41 += 4) 
                        {
                            var_66 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) ((long long int) var_12))) & (((((/* implicit */_Bool) arr_117 [i_36] [4LL])) ? (arr_111 [i_36] [i_36] [i_36] [i_37]) : (((/* implicit */unsigned long long int) arr_82 [i_36] [i_37] [i_38] [i_39] [i_37])))))) : (((((/* implicit */_Bool) max((arr_53 [i_36] [i_37] [i_38]), (((/* implicit */long long int) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) arr_100 [i_36] [i_37] [i_38] [i_39] [i_41] [2U] [i_39])), (arr_19 [i_36] [3LL] [i_38] [(unsigned short)10]))) : (((/* implicit */unsigned long long int) var_16))))));
                            var_67 = arr_52 [i_36] [i_37] [i_38];
                            arr_132 [i_36] [i_37] [i_38] [i_39] [3U] [7] = ((/* implicit */long long int) arr_49 [i_36] [i_37] [i_36]);
                        }
                    }
                    var_68 = ((/* implicit */long long int) max((var_68), (((/* implicit */long long int) var_15))));
                    arr_133 [i_37] [i_37] = ((/* implicit */unsigned long long int) ((arr_61 [i_36] [3ULL] [3ULL]) <= (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : ((-2147483647 - 1)))) ^ (((/* implicit */int) var_1)))))));
                }
            } 
        } 
        arr_134 [i_36] [i_36] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_62 [i_36] [i_36] [0])) && (((/* implicit */_Bool) arr_55 [i_36] [9]))));
    }
}
