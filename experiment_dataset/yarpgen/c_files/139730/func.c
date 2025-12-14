/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139730
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_16 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 487747065)) ? (487747065) : (((/* implicit */int) (short)-10720))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_7);
    }
    for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                {
                    arr_10 [i_2 - 2] [i_2] [i_2] [i_3] |= ((/* implicit */signed char) min((min(((((_Bool)0) ? (var_8) : (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) arr_6 [i_1 + 1])))), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_13)), (var_3))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) var_13)) : (-487747065)))))))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) (~(1705774236U)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((arr_6 [i_1]), (((/* implicit */unsigned char) (_Bool)0))))))) : (((/* implicit */int) var_2))));
                    arr_11 [i_3] = var_0;
                }
            } 
        } 
        arr_12 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (short)-29896))))));
        var_18 -= ((/* implicit */unsigned int) max((var_1), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_3))) - (((((/* implicit */int) arr_6 [i_1])) + (((/* implicit */int) (unsigned short)992)))))))));
        /* LoopNest 3 */
        for (long long int i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            for (unsigned short i_5 = 2; i_5 < 22; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_8 [i_4 - 1] [i_1 - 1] [i_5 - 1] [i_6])) < (((/* implicit */int) arr_8 [i_4 - 1] [i_1 + 2] [i_5 - 2] [i_6])))))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_1] [(signed char)16] [i_5])) - (((/* implicit */int) ((((/* implicit */_Bool) (signed char)20)) && (((/* implicit */_Bool) 18446744073709551614ULL))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_7 = 2; i_7 < 21; i_7 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                /* LoopSeq 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_21 = (-(arr_7 [i_8] [i_8] [i_1]));
                    arr_29 [i_7] [i_9] = ((((unsigned long long int) arr_13 [i_1 - 1])) + (min((arr_18 [i_7 + 1] [i_7 + 2] [i_1 + 2] [(unsigned short)12]), (((/* implicit */unsigned long long int) arr_8 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_7 + 2])))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_20 [i_1 + 1] [i_1 + 1])) ? (((((/* implicit */_Bool) var_5)) ? (12991795377609153168ULL) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_14 [i_1])))))) + (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)29900)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (5622182818500507378ULL))) : (((/* implicit */unsigned long long int) min((2016639521), (-1374329928))))))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_9 [i_1 + 1] [i_7] [(short)19] [i_10]))));
                    var_24 = ((/* implicit */unsigned char) min((arr_25 [7U] [i_7]), (var_0)));
                    var_25 = ((/* implicit */unsigned long long int) var_2);
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        arr_40 [i_7] [i_12] [i_12] = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */int) arr_28 [i_8] [i_8] [i_8] [i_7 + 1] [i_7])), (((((/* implicit */int) var_5)) / (-2016639522))))));
                        arr_41 [i_12] [i_11] [i_8] [i_7] [i_12] = ((/* implicit */unsigned long long int) ((min((var_7), (((/* implicit */long long int) arr_13 [i_1])))) * (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_12])))))));
                        var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (18446744073709551614ULL)));
                        var_27 = ((/* implicit */long long int) min((12991795377609153173ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))));
                    }
                    for (int i_13 = 3; i_13 < 19; i_13 += 2) 
                    {
                        var_28 = ((/* implicit */long long int) var_6);
                        var_29 = ((/* implicit */int) arr_43 [i_1] [i_1 + 3] [i_1 + 3]);
                        var_30 = ((/* implicit */long long int) (+((+(((/* implicit */int) var_13))))));
                        arr_44 [i_13] [i_8] [i_13] [(unsigned char)16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */long long int) arr_30 [i_13] [i_13] [i_11] [i_13] [i_13] [i_1])), (1777990837575856299LL))) : (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) 2016639510))))))));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) arr_6 [i_8]))));
                    }
                    var_32 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) ((-787847420) != (((/* implicit */int) (signed char)109))))), ((-(var_8)))))));
                }
                /* LoopSeq 1 */
                for (signed char i_14 = 0; i_14 < 23; i_14 += 4) 
                {
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_43 [i_1 + 2] [i_8] [i_14])) == (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)39904))))))))))));
                    var_34 = ((/* implicit */long long int) max((var_8), (((/* implicit */unsigned long long int) arr_39 [i_1 + 3] [i_8]))));
                    var_35 *= ((/* implicit */unsigned char) (signed char)-88);
                    arr_48 [i_1] [i_14] [i_14] [i_1] [i_8] = ((/* implicit */_Bool) ((unsigned char) 1688849860263936ULL));
                }
                var_36 = ((/* implicit */unsigned char) var_14);
            }
            for (unsigned char i_15 = 0; i_15 < 23; i_15 += 2) 
            {
                arr_51 [(signed char)10] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (var_12) : (((/* implicit */int) ((unsigned char) 2396412423U)))));
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 23; i_16 += 2) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */short) ((int) min((((/* implicit */unsigned long long int) ((1891144915479280199LL) / (arr_7 [i_7] [i_7] [i_17])))), (((((/* implicit */_Bool) arr_4 [i_17] [i_16])) ? (arr_18 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) -2016639539)))))));
                            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (((~(3135148574646319323LL))) != (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned short i_18 = 0; i_18 < 23; i_18 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_19 = 1; i_19 < 21; i_19 += 3) 
                {
                    for (signed char i_20 = 4; i_20 < 22; i_20 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned int) arr_34 [i_1] [i_1 + 3]);
                            var_40 = ((/* implicit */long long int) var_10);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_21 = 0; i_21 < 23; i_21 += 4) 
                {
                    for (int i_22 = 1; i_22 < 22; i_22 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */short) ((unsigned char) arr_55 [i_1 + 2]));
                            var_42 = ((/* implicit */unsigned long long int) (+(arr_43 [i_22 + 1] [i_7 - 2] [i_1 - 1])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 23; i_23 += 3) 
                {
                    for (signed char i_24 = 0; i_24 < 23; i_24 += 4) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_66 [i_7] [i_7 - 1] [i_7] [i_1 + 1] [i_1]))));
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_75 [i_7] [10U] [i_7 + 2] [21LL] [i_23] [21LL])) && (((/* implicit */_Bool) arr_75 [i_1] [i_7] [i_7 - 2] [i_7] [i_7] [(unsigned char)4]))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (unsigned short i_25 = 3; i_25 < 21; i_25 += 1) 
            {
                var_45 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_25 - 2] [i_1 - 2])) - (((/* implicit */int) arr_73 [i_1 + 3] [i_7] [i_7] [i_7] [(signed char)20]))))) > (min((((/* implicit */unsigned long long int) var_3)), (arr_36 [i_25 + 1] [i_25] [(_Bool)1] [i_1 + 3] [(_Bool)0] [i_1 + 3])))));
                /* LoopNest 2 */
                for (signed char i_26 = 2; i_26 < 22; i_26 += 3) 
                {
                    for (signed char i_27 = 0; i_27 < 23; i_27 += 3) 
                    {
                        {
                            arr_83 [i_1] [i_25] [i_25 - 2] [i_26 + 1] [i_27] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_54 [i_26] [i_26] [i_26] [i_26 - 1] [i_7] [i_7 - 1])) ? (arr_36 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 - 2] [i_1 - 2] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_27] [i_26] [i_7] [i_26 - 1] [i_7] [i_7 + 2]))))), (arr_36 [i_1 - 2] [i_1 - 2] [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_1 - 1])));
                            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned short)59731)) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_4)))))));
                            var_47 = ((/* implicit */unsigned char) var_3);
                        }
                    } 
                } 
                var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (short)29920)))))))) ? (136365211648LL) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                var_49 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))), (max(((+(var_8))), (((/* implicit */unsigned long long int) var_2))))));
            }
            for (unsigned short i_28 = 1; i_28 < 20; i_28 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_29 = 3; i_29 < 22; i_29 += 2) 
                {
                    for (signed char i_30 = 2; i_30 < 22; i_30 += 1) 
                    {
                        {
                            arr_91 [(unsigned char)9] [i_28] [(unsigned char)9] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_75 [i_7 + 1] [i_1 - 1] [i_28] [i_29] [i_30 + 1] [i_29])) ? (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_7 - 1] [i_1 - 1] [i_1 - 1] [i_29]))) : (var_1)))));
                            var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-3135148574646319323LL), (((/* implicit */long long int) var_10))))) ? (((/* implicit */unsigned int) -787847420)) : (1368587670U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_89 [20LL] [i_29] [i_28 + 3] [i_7] [20LL])))) && (((3598187611272629014LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-30))))))))) : (((unsigned int) ((((/* implicit */_Bool) arr_62 [i_28] [i_28] [i_28 + 1] [i_28] [i_28] [i_28] [i_28])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_27 [19U] [i_29] [(unsigned char)12] [i_1]))))))))));
                            var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) var_8))));
                            var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1684228655)) ? (((/* implicit */int) (short)7973)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) max((((/* implicit */short) arr_78 [i_1] [i_7] [i_28] [i_30])), (var_11)))) : ((+(((/* implicit */int) arr_31 [i_28] [i_28] [i_28] [i_1 - 2]))))));
                            arr_92 [(unsigned char)20] [i_7 + 2] [i_28] [i_29] [(short)8] [i_28] [i_29 - 2] |= ((/* implicit */unsigned char) ((unsigned long long int) var_1));
                        }
                    } 
                } 
                var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) var_3))));
            }
        }
    }
    var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) + (((/* implicit */long long int) var_12))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
    var_55 = (+(((((/* implicit */_Bool) -136365211649LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_2)) ? (var_0) : (var_8))))));
}
