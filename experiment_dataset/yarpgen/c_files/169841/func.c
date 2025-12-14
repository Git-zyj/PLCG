/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169841
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
    var_13 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) max((var_9), (var_9)))) + (var_3)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * (288153563U)))) + (((long long int) arr_2 [i_0] [3LL] [i_1])))), (arr_2 [i_0] [i_0] [i_0])));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned long long int) max(((~(arr_2 [i_0] [i_1 + 2] [i_2 - 1]))), (((arr_2 [i_0] [i_1 - 2] [i_2 - 1]) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_1] [i_1 + 4])))))));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) -7695398706590796736LL)) : (8307254915822500575ULL)))) ? (((long long int) arr_0 [i_0])) : (((/* implicit */long long int) ((int) arr_5 [i_2 + 1] [i_1] [i_0]))))))))));
                    var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)242)) ? (7631600312861225856LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [0ULL] [i_1])))))) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 10139489157887051031ULL)) && (((/* implicit */_Bool) (unsigned char)35))))))))) ? ((~(-5467217049796158202LL))) : (((/* implicit */long long int) 3200279683U))));
                }
                for (int i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        var_18 -= ((/* implicit */unsigned short) ((unsigned int) 0U));
                        var_19 = ((/* implicit */unsigned long long int) 7631600312861225856LL);
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26483))) : (((((16348399923339450492ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35))))) - (((/* implicit */unsigned long long int) ((-8266456512624677943LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-24514))))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            var_21 ^= ((/* implicit */unsigned char) (((_Bool)1) ? ((+(((/* implicit */int) arr_11 [i_0] [i_1 + 3] [i_3] [i_4] [i_1 + 1] [i_3])))) : ((+(((/* implicit */int) arr_14 [(unsigned char)8] [i_1] [i_4] [i_4] [i_1 + 2]))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -8266456512624677943LL)) ? (((/* implicit */unsigned int) ((int) (+(67108352))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_5] [i_3 + 1] [i_3 + 1] [i_5])) / (-895289974)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (arr_10 [i_0] [i_5])))));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) ((int) max((arr_17 [i_6 + 1] [i_3 + 2] [i_1]), (arr_17 [i_6 + 4] [i_3 + 2] [i_0]))));
                            var_23 = ((/* implicit */int) ((arr_8 [i_0] [i_1] [i_4] [i_6]) ? (((/* implicit */unsigned long long int) 13194139533312LL)) : (arr_3 [i_1] [i_1])));
                            var_24 = ((/* implicit */long long int) min((var_24), (((-7631600312861225856LL) - (((/* implicit */long long int) 3200279703U))))));
                            arr_19 [i_0] [i_1] [i_3] [i_4] [i_4] [i_6] [i_3] = ((/* implicit */signed char) ((7831979408727993673ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_17 [i_0] [i_1] [i_1]) * (((/* implicit */unsigned long long int) -7631600312861225863LL))))) ? (arr_13 [i_0] [i_6 + 2] [(unsigned char)6] [i_1 + 1]) : (((/* implicit */long long int) 1094687612U)))))));
                        }
                    }
                    for (short i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        arr_22 [i_7] [i_1] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_7])) && (((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1 - 3] [i_0] [i_7] [i_7] [i_7])))))))));
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (+(((/* implicit */int) arr_5 [i_3] [(signed char)2] [i_3])))))) ? ((-(((((/* implicit */_Bool) 16348399923339450492ULL)) ? (-7631600312861225852LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_1] [i_1] [i_0]))))))) : (min((arr_13 [i_1] [i_1] [i_1 + 2] [i_3 - 1]), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)32)))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((signed char) arr_17 [i_0] [i_1] [i_8]))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-4573))))))));
                            arr_25 [i_7] [i_1] [i_3] [i_7] [(short)1] [i_8] = ((/* implicit */short) -1378753788);
                        }
                        for (short i_9 = 1; i_9 < 11; i_9 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (signed char)(-127 - 1)))));
                            var_28 = ((/* implicit */long long int) ((signed char) ((unsigned int) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_23 [i_0] [8LL] [i_3] [i_7] [i_9 + 1]))))));
                            var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1]))) < (7831979408727993673ULL))))))) - (max((arr_17 [i_1] [i_7] [i_9]), (arr_17 [i_0] [i_1] [i_1])))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_10 = 1; i_10 < 10; i_10 += 2) 
                        {
                            var_30 += ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-1497))) ^ (638552463U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_0] [i_3] [i_1]))))));
                            var_31 ^= ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-17))))) ? ((((_Bool)1) ? (2077907606U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned char)4] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13519))));
                            var_32 ^= ((/* implicit */unsigned char) arr_8 [i_7] [i_3 - 1] [i_1] [i_0]);
                        }
                        for (int i_11 = 1; i_11 < 11; i_11 += 2) 
                        {
                            var_33 -= ((/* implicit */signed char) (+(arr_13 [i_11 + 1] [i_7] [(unsigned char)10] [i_0])));
                            var_34 = ((/* implicit */short) (~((+(((arr_12 [i_0] [i_11] [i_3] [i_3]) + (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))));
                        }
                    }
                    var_35 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3] [i_3] [i_0])) ? (((/* implicit */long long int) 1757643179U)) : (-8944726067415284606LL)))))) ? (max((((/* implicit */unsigned long long int) ((arr_31 [i_3 + 1]) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (unsigned char)242))))), (((((/* implicit */_Bool) (unsigned char)41)) ? (7677937241750771434ULL) : (((/* implicit */unsigned long long int) -7695398706590796742LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_11 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3]), ((_Bool)1))))));
                    var_36 += ((/* implicit */long long int) (-(((/* implicit */int) min(((short)-31590), (((/* implicit */short) (unsigned char)244)))))));
                }
                var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2507103368706030042ULL) / (17298479755583137629ULL)))) ? (((/* implicit */int) arr_11 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_0] [i_1])) : (((/* implicit */int) ((_Bool) -7695398706590796742LL)))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 17298479755583137629ULL)) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_0])) : (1863928562)))))) : (((unsigned long long int) ((unsigned long long int) arr_8 [i_0] [i_0] [(short)2] [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    for (unsigned short i_13 = 2; i_13 < 9; i_13 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                            {
                                var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_12] [i_12] [i_13 - 2] [i_14])) || (((/* implicit */_Bool) arr_15 [i_0] [i_1 - 3] [i_12] [i_0] [i_13 + 3] [i_14] [i_14])))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0] [i_1 - 3] [i_12] [i_13] [i_14] [i_0] [i_1 - 2]))))))))));
                                var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((int) arr_12 [9] [i_1] [i_12] [i_13])))));
                                var_40 = ((/* implicit */unsigned long long int) (unsigned char)34);
                                arr_44 [i_0] [i_0] [i_0] [i_0] [i_12] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((((/* implicit */int) (signed char)-37)), (arr_42 [i_0] [i_1] [i_12] [i_13 - 1] [i_0])))))) : (max((((/* implicit */long long int) (_Bool)1)), (arr_24 [i_1 - 1] [i_1 + 2] [i_0] [i_12])))));
                            }
                            for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
                            {
                                var_41 = ((/* implicit */long long int) (signed char)82);
                                var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((arr_12 [i_0] [6] [6] [i_15]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_13] [i_13]))))), (((/* implicit */unsigned long long int) (short)6069))))) ? (((/* implicit */int) arr_38 [i_0] [i_0] [i_12] [i_0])) : ((~(((/* implicit */int) max((arr_38 [i_1] [i_12] [i_13] [i_15]), ((unsigned char)41)))))))))));
                                var_43 = ((/* implicit */_Bool) max((arr_42 [i_0] [11ULL] [i_12] [i_12] [i_0]), (((/* implicit */int) arr_6 [i_0] [(signed char)2]))));
                                var_44 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_15] [i_15]))) : (arr_3 [i_0] [i_1])))) ? (((int) arr_23 [i_0] [i_15] [i_12] [i_12] [i_15])) : (((((/* implicit */_Bool) arr_0 [i_12])) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (short)16238))))))));
                            }
                            /* LoopSeq 1 */
                            for (signed char i_16 = 0; i_16 < 12; i_16 += 4) 
                            {
                                var_45 = ((/* implicit */unsigned int) min((var_45), (max((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) (_Bool)1)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_39 [i_0] [i_1] [i_0] [i_13] [i_0])), (arr_10 [i_0] [i_1 + 2])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)14)) << (((/* implicit */int) (unsigned char)12))))) : (((((/* implicit */_Bool) (unsigned char)14)) ? (1003801219U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251)))))))))));
                                var_46 = min((((long long int) -1230172425343732808LL)), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_12]))))) ? (max((arr_2 [i_12] [i_1 + 3] [i_12]), (((/* implicit */long long int) arr_30 [i_0] [i_1 - 1] [i_1 - 1] [i_13] [1LL] [i_16])))) : (((/* implicit */long long int) ((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_12] [i_13])))))))));
                                var_47 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_49 [i_0] [i_0] [i_12] [i_12] [(signed char)10] [i_1])) ? (((6610103336043751736ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_0] [i_0] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) (-(arr_41 [i_0] [i_13] [i_12] [(short)0] [i_16] [i_0])))))) | (((/* implicit */unsigned long long int) max((arr_10 [i_0] [i_0]), (arr_10 [i_16] [i_12]))))));
                                var_48 ^= ((/* implicit */short) (+(((10160471836459035074ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_13 [i_0] [i_0] [i_0] [i_0]))))))));
                            }
                            var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_1 + 3]))) | (arr_12 [i_1 - 1] [i_1] [i_12] [i_13 + 3])))) && (((/* implicit */_Bool) ((long long int) arr_12 [i_1 + 1] [i_12] [i_13] [i_13 - 2])))));
                            var_50 = (signed char)-59;
                            arr_50 [i_0] [i_1] [i_1] [i_13] = ((/* implicit */_Bool) max((((/* implicit */int) min((arr_45 [i_0] [i_0] [i_1] [i_12] [i_13]), (arr_45 [i_0] [i_1 + 4] [i_12] [i_12] [i_13])))), (((((/* implicit */_Bool) arr_45 [i_0] [i_0] [i_0] [i_12] [i_13 + 1])) ? (((/* implicit */int) arr_45 [i_0] [i_1] [i_12] [i_13 + 1] [i_13 + 2])) : (((/* implicit */int) arr_45 [i_0] [i_1] [i_0] [i_12] [i_13]))))));
                        }
                    } 
                } 
                var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) 2212530167709940239LL))));
            }
        } 
    } 
}
