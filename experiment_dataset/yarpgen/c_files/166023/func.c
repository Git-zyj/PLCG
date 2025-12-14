/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166023
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) (signed char)-25)))));
        var_12 = arr_0 [i_0 + 2];
        /* LoopSeq 1 */
        for (short i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            arr_5 [i_1 - 3] [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (signed char)-127))) - (((/* implicit */int) ((signed char) (signed char)17)))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3712180736U)));
                            arr_16 [i_0 + 1] [(signed char)5] [i_2] [(signed char)5] [(signed char)5] = ((/* implicit */long long int) ((_Bool) (unsigned char)108));
                        }
                    } 
                } 
            } 
            var_13 = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (454819059)));
        }
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (8359782357947891064LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 1] [i_0 - 1])))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                        {
                            var_15 = ((((/* implicit */int) (unsigned char)136)) == (((/* implicit */int) (_Bool)0)));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_1 [i_0 - 1]))));
                        }
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                        {
                            var_17 *= ((/* implicit */short) ((long long int) (unsigned char)105));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */int) (short)-32737)) ^ (((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */_Bool) var_10);
                        }
                        for (signed char i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                        {
                            arr_32 [8U] [8U] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) arr_31 [i_7 + 1] [(signed char)5] [i_0 + 3] [i_0] [6LL] [i_0])) == (((/* implicit */int) arr_10 [i_7 + 1] [i_0 + 2]))));
                            var_20 = ((/* implicit */_Bool) (-(-6795700148062449239LL)));
                        }
                        for (signed char i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                            var_22 -= ((/* implicit */short) ((signed char) 330551691U));
                        }
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_0] [i_7] [i_7 + 1] [i_7] [i_7 + 1])) ? (9223372036854775807LL) : (((((/* implicit */_Bool) var_3)) ? (5321715652303340686LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                    }
                    var_24 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                }
            } 
        } 
    }
    for (unsigned char i_12 = 1; i_12 < 9; i_12 += 2) /* same iter space */
    {
        var_25 *= ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_34 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 + 3] [i_12 + 1]), (arr_34 [i_12] [i_12 + 1] [i_12 - 1] [i_12 + 3] [i_12])))) == (((((/* implicit */int) arr_34 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12])) & (((/* implicit */int) arr_34 [i_12 - 1] [i_12 - 1] [i_12 + 3] [i_12 + 3] [i_12 - 1]))))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (arr_30 [i_12 + 1] [(_Bool)1] [i_12 + 3] [(_Bool)1] [i_12])))) ? (((((/* implicit */_Bool) ((var_9) << (((((/* implicit */int) arr_37 [2U])) - (27)))))) ? ((((_Bool)1) ? (1681028875) : (((/* implicit */int) var_2)))) : (((((/* implicit */int) arr_35 [i_12] [(_Bool)1] [i_12 - 1] [i_12] [(_Bool)1] [(_Bool)1])) / (((/* implicit */int) var_1)))))) : ((~(((/* implicit */int) (unsigned char)12)))))))));
    }
    /* LoopSeq 4 */
    for (unsigned char i_13 = 2; i_13 < 20; i_13 += 3) 
    {
        /* LoopNest 2 */
        for (short i_14 = 1; i_14 < 18; i_14 += 3) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (short i_17 = 3; i_17 < 20; i_17 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */short) min((((/* implicit */int) ((short) arr_50 [i_17 - 2] [i_14 - 1]))), ((-(((/* implicit */int) arr_46 [i_14 - 1] [i_17 - 3] [i_17]))))));
                                arr_51 [i_13 + 1] [i_17] [i_16] [i_15] [i_14] [i_17] [i_13 + 1] = ((/* implicit */_Bool) arr_43 [(signed char)13]);
                                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                                var_29 = ((/* implicit */signed char) ((((max((arr_47 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1]), (arr_38 [i_14]))) ? (((arr_47 [i_13] [i_13] [i_16] [i_17 - 3]) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((_Bool) var_4))))) * (((/* implicit */int) ((short) ((((/* implicit */int) (short)-31052)) / (((/* implicit */int) (_Bool)1))))))));
                                var_30 = ((/* implicit */_Bool) min((var_30), (((_Bool) ((signed char) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_31 = (_Bool)1;
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max(((short)28041), (((/* implicit */short) arr_40 [i_13 + 1])))), (((/* implicit */short) arr_44 [(_Bool)1] [i_14] [(_Bool)1]))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_43 [i_13])), (4611686018427387904LL)))) ? (((4611686018427387912LL) >> (((/* implicit */int) var_6)))) : (((/* implicit */long long int) (((_Bool)0) ? (arr_41 [i_13] [i_13]) : (((/* implicit */int) var_4))))))) : (((/* implicit */long long int) ((/* implicit */int) min((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_42 [(short)0])))), (arr_45 [i_14])))))));
                }
            } 
        } 
        arr_52 [(signed char)4] = ((/* implicit */_Bool) (~(((/* implicit */int) min((arr_49 [(short)0]), (var_6))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_18 = 0; i_18 < 21; i_18 += 1) 
        {
            var_33 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)72))));
            arr_57 [i_18] = (((_Bool)1) || (((/* implicit */_Bool) 8555617812444140038LL)));
        }
        for (unsigned int i_19 = 0; i_19 < 21; i_19 += 2) 
        {
            var_34 = ((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-32314)));
            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) min((2680388134U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)26))))) ? (min((var_3), (arr_50 [i_19] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_45 [i_13 + 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) 6795700148062449255LL)))))))))))));
        }
        arr_62 [i_13] [i_13] = ((/* implicit */short) ((min((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))))) / (((((/* implicit */int) arr_42 [i_13 - 1])) * (((/* implicit */int) arr_42 [i_13 - 1]))))));
        var_36 = ((/* implicit */signed char) ((_Bool) ((((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) (signed char)3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4611686018427387912LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_13 + 1])))))))));
    }
    for (signed char i_20 = 1; i_20 < 24; i_20 += 2) 
    {
        var_37 = ((/* implicit */signed char) ((((((min(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1)))) + (2147483647))) + (2147483647))) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_63 [i_20 - 1] [i_20 + 1]))) ^ (var_3))) - (4203354962954620899LL)))));
        arr_66 [i_20] [i_20 - 1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_65 [i_20]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254)))))) ? (((/* implicit */int) arr_63 [i_20 - 1] [i_20 + 1])) : (((((/* implicit */_Bool) (short)7334)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((_Bool) ((unsigned char) var_9))))));
        arr_67 [i_20] = ((/* implicit */_Bool) ((var_3) - (((((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))) - (((var_3) - (((/* implicit */long long int) arr_65 [i_20 + 1]))))))));
        arr_68 [(signed char)10] [(signed char)10] = ((/* implicit */_Bool) ((signed char) ((arr_64 [i_20 + 1] [i_20 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_20] [i_20 - 1]))) : (var_9))));
        arr_69 [i_20 - 1] [i_20 + 1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */long long int) 2680388112U)) >= ((-9223372036854775807LL - 1LL))))), (max((((var_8) | (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) ((_Bool) var_7)))))));
    }
    /* vectorizable */
    for (long long int i_21 = 0; i_21 < 25; i_21 += 2) 
    {
        var_38 += ((/* implicit */short) ((_Bool) arr_65 [i_21]));
        /* LoopSeq 2 */
        for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_23 = 0; i_23 < 25; i_23 += 1) 
            {
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                {
                    {
                        var_39 = ((/* implicit */int) min((var_39), (((((/* implicit */_Bool) 3449175205281665572LL)) ? (((/* implicit */int) ((unsigned char) var_3))) : (((/* implicit */int) (short)-21979))))));
                        arr_79 [i_21] [i_21] [i_23] [i_21] [i_21] = ((/* implicit */long long int) ((signed char) var_6));
                        var_40 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (short)-16166)) : (((/* implicit */int) var_1)))));
                        arr_80 [i_21] [i_21] [i_23] [(_Bool)1] [i_21] [i_21] = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                    }
                } 
            } 
            arr_81 [i_22 + 1] [i_21] = arr_71 [i_21];
            arr_82 [i_22 + 1] &= ((/* implicit */signed char) ((3449175205281665572LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        }
        for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                for (int i_27 = 3; i_27 < 22; i_27 += 3) 
                {
                    {
                        var_41 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)448)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (_Bool)1))))));
                        var_42 = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_6))))));
                    }
                } 
            } 
            arr_91 [i_21] [i_21] = ((/* implicit */signed char) ((arr_88 [i_21] [i_25 + 1] [i_25 + 1] [i_21]) ? (((/* implicit */int) arr_88 [i_21] [i_25 + 1] [i_25 + 1] [i_21])) : (((/* implicit */int) arr_88 [i_21] [i_25 + 1] [i_25 + 1] [i_21]))));
        }
    }
    /* vectorizable */
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
    {
        var_43 += ((((/* implicit */int) (signed char)-8)) % (((/* implicit */int) (short)-179)));
        /* LoopSeq 1 */
        for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
        {
            var_44 += ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_71 [i_29])) & (((/* implicit */int) (_Bool)0))))));
            /* LoopSeq 2 */
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_31 = 0; i_31 < 13; i_31 += 1) 
                {
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned char) arr_64 [6LL] [4U]);
                            var_46 = ((/* implicit */short) ((var_6) ? (((/* implicit */int) arr_39 [i_29 + 1])) : (((/* implicit */int) arr_39 [i_29 + 1]))));
                            var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_40 [i_31]) ? (((/* implicit */int) arr_94 [i_28] [(signed char)9])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) var_6)))))))));
                            arr_102 [i_28] [i_28] [(short)10] [i_28] [12LL] [i_28] [i_28] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7101358110551744530LL))) | (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        }
                    } 
                } 
                var_48 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -110559316340385033LL)) ? (((/* implicit */int) arr_48 [(unsigned char)4] [i_29 + 1] [(unsigned char)4])) : (((/* implicit */int) var_7))));
                var_49 |= ((/* implicit */short) ((arr_63 [i_29] [i_29 + 1]) ? (((/* implicit */int) arr_63 [i_29] [i_29 + 1])) : (((/* implicit */int) arr_63 [i_29 + 1] [i_29 + 1]))));
            }
            for (signed char i_33 = 0; i_33 < 13; i_33 += 2) 
            {
                var_50 = ((((/* implicit */int) arr_85 [i_29 + 1] [i_29 + 1])) >= (((/* implicit */int) arr_77 [i_28] [(_Bool)1] [i_29 + 1] [i_29 + 1] [22LL] [i_33])));
                /* LoopNest 2 */
                for (_Bool i_34 = 1; i_34 < 1; i_34 += 1) 
                {
                    for (long long int i_35 = 1; i_35 < 12; i_35 += 2) 
                    {
                        {
                            arr_112 [i_33] [i_28] [i_35] = ((/* implicit */short) (~(((/* implicit */int) arr_48 [i_28] [i_29 + 1] [i_28]))));
                            arr_113 [i_28] [i_34] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) (short)-30285)))));
                            var_51 *= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_38 [i_29 + 1]))));
                        }
                    } 
                } 
                var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_28] [i_29 + 1])) ? (((/* implicit */int) arr_63 [i_29 + 1] [i_29 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (var_4))))));
            }
            arr_114 [i_28] [i_28] = ((/* implicit */_Bool) ((arr_75 [i_29] [i_29 + 1] [i_29] [i_28]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            arr_115 [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned int) var_10);
        }
    }
}
