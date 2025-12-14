/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171835
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_1);
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-26230))))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_0]))));
            /* LoopNest 3 */
            for (short i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (unsigned char i_3 = 3; i_3 < 20; i_3 += 3) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_16 &= ((/* implicit */unsigned char) ((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned short)54979))))))));
                            var_17 = ((/* implicit */_Bool) ((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 - 1] [i_4 - 1] [i_0])))));
                            arr_15 [i_0] [i_0] [6LL] [i_3] [9U] = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2 - 1] [i_3 + 1] [i_0])) > (((/* implicit */int) arr_10 [i_0] [i_3 - 3] [i_4 - 1] [i_0]))));
                        }
                    } 
                } 
            } 
        }
        for (short i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
        {
            arr_19 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_7)) << (((((/* implicit */int) arr_11 [i_0] [i_5])) - (100)))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 3; i_6 < 19; i_6 += 3) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_23 [i_0] [i_5] [i_6] [i_6 - 3]))));
                        /* LoopSeq 4 */
                        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            arr_26 [i_8] [20] [i_5] [20] [i_0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_5] [i_6 - 2] [(short)4] [i_8] [i_6 + 2]))));
                            var_19 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-26240)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        }
                        for (short i_9 = 2; i_9 < 19; i_9 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_9 - 1] [i_9])) || (((/* implicit */_Bool) arr_21 [i_0] [i_9 + 2] [i_6]))));
                            arr_29 [i_0] [i_5] [(unsigned char)16] [(unsigned short)14] &= ((/* implicit */unsigned short) (~(12768437758257066939ULL)));
                            arr_30 [i_0] [i_0] [i_0] [i_7] [i_9] [3ULL] = ((/* implicit */unsigned long long int) (unsigned short)54979);
                        }
                        for (long long int i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                        {
                            arr_33 [i_0] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */int) arr_12 [i_0]);
                            var_21 = ((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0]);
                        }
                        for (long long int i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                        {
                            var_22 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8379253868506154049ULL)) || (((/* implicit */_Bool) (short)14253)))))) != (arr_35 [(unsigned short)8] [i_6 + 2] [12] [i_6 + 1] [(unsigned short)8])));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9711))) * (12768437758257066939ULL)));
                            arr_37 [i_0] [(unsigned short)8] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) (unsigned short)20839)))));
                        }
                        arr_38 [i_0] [2U] &= (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_7))))));
                        var_24 &= ((/* implicit */_Bool) ((long long int) (signed char)-56));
                    }
                } 
            } 
            arr_39 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [(unsigned short)12] [i_5] [i_5]))));
            var_25 ^= ((/* implicit */long long int) var_14);
        }
        for (short i_12 = 0; i_12 < 21; i_12 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(unsigned short)0] [i_12])) ? (((/* implicit */int) arr_16 [(unsigned char)11] [i_12])) : (((/* implicit */int) (short)26229))))) || (((((/* implicit */_Bool) (signed char)-66)) && (((/* implicit */_Bool) arr_31 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_0] [i_0] [i_0])))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 1; i_13 < 19; i_13 += 3) 
            {
                for (unsigned short i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    {
                        arr_49 [i_0] [18ULL] [i_12] [i_0] [i_13 + 2] [i_14] = (~(15346121537271006742ULL));
                        var_27 = ((/* implicit */unsigned short) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    }
                } 
            } 
        }
        var_28 -= ((/* implicit */signed char) var_3);
    }
    for (unsigned long long int i_15 = 1; i_15 < 14; i_15 += 3) 
    {
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned short)44676))));
        /* LoopNest 2 */
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            for (int i_17 = 0; i_17 < 18; i_17 += 3) 
            {
                {
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (-(((((/* implicit */_Bool) max((((/* implicit */short) var_15)), ((short)-18574)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (arr_35 [(unsigned short)12] [i_16] [(unsigned short)12] [(unsigned short)12] [i_17]))))))));
                    arr_59 [i_15] [i_16] [i_17] &= ((/* implicit */unsigned int) arr_50 [i_17]);
                    arr_60 [i_15] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_15 - 1] [i_15 + 3] [12ULL]) && (((/* implicit */_Bool) var_3))))))));
                    var_31 = ((/* implicit */unsigned short) arr_12 [18ULL]);
                }
            } 
        } 
    }
    for (unsigned short i_18 = 0; i_18 < 10; i_18 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_19 = 0; i_19 < 10; i_19 += 3) 
        {
            arr_68 [(short)4] [i_19] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_25 [i_18] [i_18] [i_18] [i_19])) : (((/* implicit */int) var_0))))));
            var_32 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_23 [i_19] [i_18] [i_18] [i_18]))));
        }
        for (int i_20 = 1; i_20 < 7; i_20 += 3) 
        {
            var_33 = ((/* implicit */int) var_11);
            arr_71 [(unsigned short)5] [i_20] [i_20] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_56 [i_20 + 3] [16ULL] [i_20 + 3])) : (((/* implicit */int) arr_56 [i_20 + 3] [i_20 + 3] [i_20 + 3])))));
            var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_70 [i_18] [i_20]))));
            var_35 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_8)))))))));
            /* LoopNest 2 */
            for (unsigned short i_21 = 0; i_21 < 10; i_21 += 3) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_36 -= ((/* implicit */short) ((((((-2012712780) ^ (((/* implicit */int) (unsigned short)54979)))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_42 [i_20] [i_20 + 1])))))));
                            arr_80 [i_18] [i_20] [i_21] [i_21] [i_20] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_18] [i_20])) ? (max((arr_4 [i_20] [i_20 + 3] [i_21]), (((/* implicit */unsigned long long int) 1466613394235869097LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_18] [i_20 - 1]))))))));
                        }
                        var_37 = ((/* implicit */short) arr_10 [i_18] [i_20] [i_21] [i_20]);
                        var_38 = ((/* implicit */int) var_1);
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned char i_24 = 0; i_24 < 10; i_24 += 3) /* same iter space */
        {
            arr_83 [i_18] [i_24] [i_24] = ((/* implicit */unsigned char) var_2);
            /* LoopNest 3 */
            for (int i_25 = 0; i_25 < 10; i_25 += 3) 
            {
                for (short i_26 = 0; i_26 < 10; i_26 += 3) 
                {
                    for (signed char i_27 = 1; i_27 < 8; i_27 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned char) var_2);
                            arr_92 [i_26] [i_24] [(signed char)1] [i_26] [i_27 - 1] = ((/* implicit */unsigned int) ((arr_91 [i_27 + 2] [i_26] [i_27 + 1] [i_27] [(unsigned char)7]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_27 - 1] [i_27] [3ULL] [i_27])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                            var_40 &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_27] [i_27] [i_27 + 1] [i_27] [i_27] [i_27 + 2] [i_27]))))) | (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_12)))))));
                            var_41 = ((/* implicit */short) var_0);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_28 = 0; i_28 < 10; i_28 += 3) 
            {
                for (unsigned char i_29 = 3; i_29 < 8; i_29 += 3) 
                {
                    {
                        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_47 [i_18] [(short)17] [4LL] [i_29 - 3])) ? (arr_66 [i_18] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) arr_94 [(unsigned char)6] [i_24] [(unsigned char)6]))))), (((/* implicit */long long int) arr_27 [i_18] [10ULL] [i_28] [(unsigned short)4] [i_18]))))) ? (((/* implicit */int) arr_9 [(_Bool)1])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_1)))))))))));
                        var_43 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)20839)) ? (((/* implicit */int) (unsigned short)20839)) : (((/* implicit */int) (unsigned short)44697)))) + (((/* implicit */int) ((signed char) arr_34 [i_29 - 3] [i_29] [i_29 - 1] [i_18])))));
                        arr_98 [i_18] [i_28] [i_28] [i_29] = (~(((/* implicit */int) var_0)));
                        arr_99 [i_28] = ((/* implicit */short) var_6);
                        arr_100 [i_28] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_28] [i_24] [i_28] [i_24] [i_28] [i_29 - 2]))) : (((((/* implicit */_Bool) arr_91 [i_18] [i_28] [i_28] [i_29 - 1] [i_24])) ? (arr_64 [(short)1]) : (var_8))))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))));
                    }
                } 
            } 
        }
        for (unsigned char i_30 = 0; i_30 < 10; i_30 += 3) /* same iter space */
        {
            arr_103 [i_30] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((long long int) arr_97 [i_18] [i_30] [i_18] [i_18])), (((/* implicit */long long int) var_2))))) ? (arr_35 [i_30] [i_30] [i_30] [i_30] [i_30]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [12] [i_30])))));
            var_44 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 15346121537271006747ULL))));
            var_45 = ((/* implicit */unsigned long long int) var_14);
        }
        /* LoopNest 2 */
        for (unsigned char i_31 = 1; i_31 < 7; i_31 += 3) 
        {
            for (long long int i_32 = 0; i_32 < 10; i_32 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_33 = 0; i_33 < 10; i_33 += 3) 
                    {
                        arr_113 [i_18] [i_31 + 1] [i_32] [i_33] [i_31] = ((/* implicit */unsigned short) ((arr_13 [i_18] [i_31 + 1] [i_31 + 1] [(_Bool)1] [i_32] [i_33]) - (arr_13 [i_33] [20ULL] [i_31 + 1] [i_18] [i_18] [i_18])));
                        var_46 = ((/* implicit */signed char) 3100622536438544877ULL);
                    }
                    /* LoopNest 2 */
                    for (short i_34 = 1; i_34 < 7; i_34 += 3) 
                    {
                        for (unsigned int i_35 = 0; i_35 < 10; i_35 += 3) 
                        {
                            {
                                arr_118 [i_31] [(unsigned short)9] [(unsigned short)4] [i_34] [i_35] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)168)) >> (((-4012534691215629520LL) + (4012534691215629532LL)))));
                                var_47 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1967989914237377450LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_36 = 0; i_36 < 10; i_36 += 3) 
                    {
                        for (unsigned long long int i_37 = 0; i_37 < 10; i_37 += 3) 
                        {
                            {
                                var_48 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_115 [i_18] [i_31 + 3] [i_32] [i_36])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_123 [(short)8] [i_31 - 1] [i_32] [(_Bool)1] [i_37]))) : (arr_35 [(unsigned char)14] [i_31 + 1] [i_32] [i_36] [(unsigned short)16]))), (((/* implicit */unsigned long long int) ((unsigned short) arr_115 [i_18] [i_31 + 3] [i_32] [1])))));
                                arr_124 [i_18] [i_31] [i_32] = (+(((5678306315452484684ULL) * (15346121537271006739ULL))));
                                var_49 = ((/* implicit */unsigned int) var_0);
                                arr_125 [i_37] [i_31] [i_31] [i_31 + 3] = ((/* implicit */short) var_3);
                                arr_126 [i_18] [i_31] [3U] [i_36] [i_31] [i_31] = ((unsigned int) (-(((11156107550396180952ULL) >> (((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_50 -= ((/* implicit */unsigned short) ((min((((((/* implicit */int) var_2)) / (((/* implicit */int) var_2)))), (((/* implicit */int) var_2)))) * ((+(((/* implicit */int) min(((unsigned char)98), ((unsigned char)0))))))));
    }
    var_51 = ((/* implicit */short) var_10);
    var_52 *= ((/* implicit */unsigned long long int) var_4);
}
