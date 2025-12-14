/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175811
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
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned short) (+(max((max((var_5), (var_14))), (max((var_13), (var_2)))))));
        var_17 = min((max((var_5), (((/* implicit */long long int) (unsigned short)46171)))), (((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)38062), ((unsigned short)58885))))) / (2694107647019635035LL))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)39947)), (1447424038181466450LL)))) ? ((-(1128071057800159752LL))) : (var_14))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_3 = 1; i_3 < 11; i_3 += 2) /* same iter space */
            {
                arr_12 [(unsigned short)10] [i_1] [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3448904472588478198LL)) ? (-8650037001781929762LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20835)))));
                var_19 = ((((/* implicit */_Bool) (+(var_5)))) ? (1474534841002530024LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
                arr_13 [(unsigned short)5] [i_2] [i_1] [(unsigned short)5] = ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
                arr_14 [i_1] [i_2] [i_1] [i_1] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_2));
                /* LoopSeq 3 */
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                {
                    arr_17 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) -1LL);
                    var_20 = var_16;
                }
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) ((var_14) - (((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((var_13) + (1902101298746477888LL))))))));
                    arr_21 [6LL] [i_3 - 1] [i_3 - 1] [i_1] = ((/* implicit */long long int) ((8241119095919701713LL) > (var_5)));
                }
                for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    var_22 = ((/* implicit */unsigned short) (+(var_1)));
                    var_23 = ((((/* implicit */_Bool) 6349852489686707657LL)) ? (var_9) : (var_1));
                }
            }
            for (long long int i_7 = 1; i_7 < 11; i_7 += 2) /* same iter space */
            {
                arr_29 [i_1] [i_1] [2LL] [i_7] = ((/* implicit */long long int) var_11);
                /* LoopSeq 3 */
                for (unsigned short i_8 = 2; i_8 < 11; i_8 += 2) 
                {
                    arr_33 [i_1] [i_1] [3LL] = min((-5572677986814856571LL), (((/* implicit */long long int) (unsigned short)61400)));
                    var_24 = ((var_16) ^ (min((var_2), (var_1))));
                }
                for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        arr_39 [i_1] [i_2] [i_2] [i_9] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)8160))));
                        arr_40 [i_1] [i_9] [i_7] [i_1] [i_1] = (unsigned short)65535;
                        arr_41 [i_1] [i_9] [i_7] [i_2] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned short)65525))))));
                    }
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        arr_44 [i_7] [i_1] [i_7] [i_7] [i_1] = ((/* implicit */long long int) ((-1LL) == (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        arr_45 [i_1] [i_2] [i_1] [i_9] [7LL] = min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41259)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-4188619472448378348LL)))) || (((/* implicit */_Bool) (unsigned short)40697))))), (var_2));
                        var_25 = ((/* implicit */unsigned short) max((4412847509917782113LL), (((/* implicit */long long int) (unsigned short)5470))));
                        arr_46 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((min((max((var_2), (1048512LL))), (max((var_9), (((/* implicit */long long int) (unsigned short)35587)))))), (-6217233994030943237LL)));
                    }
                    var_26 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))));
                    arr_47 [i_1] [i_1] [i_1] = min((max((var_2), (var_14))), (min((((/* implicit */long long int) min((var_11), (var_15)))), (var_16))));
                }
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    var_27 = ((/* implicit */long long int) (~(((/* implicit */int) var_15))));
                    arr_50 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned short)511))));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) var_0))));
                }
            }
            arr_51 [i_1] [i_2] = ((/* implicit */long long int) min((((/* implicit */int) ((var_2) >= (var_1)))), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44840))))) - (((/* implicit */int) min((var_7), ((unsigned short)30307))))))));
        }
        var_29 = ((/* implicit */unsigned short) max((min((var_1), (var_13))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8192)) <= (((/* implicit */int) (unsigned short)12110)))))));
    }
    for (unsigned short i_13 = 1; i_13 < 24; i_13 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            for (unsigned short i_15 = 4; i_15 < 22; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 1; i_16 < 22; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 25; i_17 += 3) 
                        {
                            {
                                var_30 = max((-7388412052127166358LL), (((/* implicit */long long int) (unsigned short)4)));
                                var_31 = min((4LL), (((((var_13) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) ^ (((((/* implicit */_Bool) (unsigned short)12177)) ? (var_13) : (-7914274262533297780LL))))));
                                var_32 = max((max((3126031847097257440LL), (-9223372036854775784LL))), (((/* implicit */long long int) min(((unsigned short)35275), (var_11)))));
                                var_33 = ((((/* implicit */_Bool) -1249146009909189733LL)) ? (8137065479313922556LL) : (-12LL));
                                arr_66 [i_17] [i_17] [i_17] = min((((/* implicit */long long int) (unsigned short)5716)), (70368744177663LL));
                            }
                        } 
                    } 
                    arr_67 [(unsigned short)15] = ((((/* implicit */_Bool) min((min((5428144209015833745LL), (var_2))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65525)) ^ (((/* implicit */int) (unsigned short)31)))))))) ? (min((17179869183LL), (max((((/* implicit */long long int) (unsigned short)7)), (var_8))))) : (max((max((-6711686579518639807LL), (((/* implicit */long long int) (unsigned short)40627)))), (((/* implicit */long long int) (unsigned short)31032)))));
                }
            } 
        } 
        var_34 = max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28647))) < (-7091694985613031069LL)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (7076961870456922853LL))));
        /* LoopSeq 3 */
        for (unsigned short i_18 = 0; i_18 < 25; i_18 += 2) 
        {
            arr_70 [i_18] = max((((((/* implicit */_Bool) (unsigned short)25133)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16212))) : (0LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_4), (var_11))))))));
            var_35 = ((/* implicit */long long int) var_0);
        }
        for (unsigned short i_19 = 4; i_19 < 24; i_19 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_20 = 0; i_20 < 25; i_20 += 1) 
            {
                arr_76 [i_20] [i_19] [i_20] [i_20] = max((max((var_11), (var_6))), (min((var_7), ((unsigned short)65535))));
                var_36 = min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_11), (var_6))))) : (var_13))), (((min((var_9), (var_8))) ^ (min((549755813887LL), (var_12))))));
                var_37 = max((-1LL), (((/* implicit */long long int) (unsigned short)4300)));
                arr_77 [i_13] [i_19] [i_20] = ((/* implicit */long long int) var_4);
                var_38 = ((1048575LL) - (3852858148424864900LL));
            }
            for (unsigned short i_21 = 3; i_21 < 23; i_21 += 2) 
            {
                arr_80 [i_13 - 1] [i_21] [i_21] = max((((/* implicit */long long int) ((min((((/* implicit */long long int) (unsigned short)65535)), (var_2))) == ((-(14LL)))))), ((-9223372036854775807LL - 1LL)));
                /* LoopNest 2 */
                for (long long int i_22 = 0; i_22 < 25; i_22 += 2) 
                {
                    for (long long int i_23 = 2; i_23 < 24; i_23 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
                            var_40 = min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_7))))) : (min((var_12), (((/* implicit */long long int) var_3)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)14095)), (var_9))))))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned short) var_9);
                var_42 = max((var_1), (((min((((/* implicit */long long int) var_11)), (6722254943383808040LL))) / (-2908597005042776572LL))));
            }
            var_43 = var_14;
            /* LoopSeq 1 */
            for (long long int i_24 = 1; i_24 < 24; i_24 += 3) 
            {
                arr_88 [1LL] [i_19] [(unsigned short)13] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3086598450440341898LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28241))) : (-519733081562937587LL)))) ? (((var_1) - (var_2))) : (((/* implicit */long long int) ((/* implicit */int) max((var_0), ((unsigned short)10135)))))));
                arr_89 [i_19 - 4] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) == (min((((-4LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))), (((var_5) >> (((var_13) + (1902101298746477876LL)))))))));
                /* LoopNest 2 */
                for (unsigned short i_25 = 0; i_25 < 25; i_25 += 2) 
                {
                    for (long long int i_26 = 2; i_26 < 24; i_26 += 1) 
                    {
                        {
                            arr_96 [i_13] [i_13] [0LL] [i_13] [0LL] [i_13] = ((/* implicit */unsigned short) min((min((min((var_2), (((/* implicit */long long int) (unsigned short)26120)))), (var_12))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1624)) ^ (((/* implicit */int) (unsigned short)49847)))))));
                            arr_97 [i_25] = ((/* implicit */unsigned short) (-(min((-1120283273456815684LL), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)14803))) ^ (8LL)))))));
                        }
                    } 
                } 
            }
            var_44 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min(((unsigned short)11190), ((unsigned short)63474)))), (max((((/* implicit */long long int) var_6)), (536870911LL)))));
        }
        for (unsigned short i_27 = 4; i_27 < 24; i_27 += 3) /* same iter space */
        {
            arr_100 [i_13] = ((/* implicit */unsigned short) min((((/* implicit */int) min(((unsigned short)7468), (var_6)))), (((((/* implicit */int) (unsigned short)40097)) & (((/* implicit */int) (unsigned short)32553))))));
            var_45 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (unsigned short)7381)), (-1LL))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))) == (516142782360421339LL)))))))));
            var_46 = min(((-(274877906880LL))), (((max((0LL), (3917713873922895010LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65512))))));
        }
        arr_101 [i_13] [(unsigned short)11] = ((/* implicit */long long int) ((8947440054992629947LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
    }
    for (unsigned short i_28 = 0; i_28 < 25; i_28 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_29 = 0; i_29 < 25; i_29 += 1) 
        {
            var_47 = ((((((/* implicit */_Bool) -3446312965606228394LL)) && (((/* implicit */_Bool) -4933585596575101848LL)))) ? (max((var_12), (var_2))) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)29662)))));
            var_48 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)61384)) + (((/* implicit */int) (unsigned short)62254))));
            arr_106 [(unsigned short)18] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (unsigned short)9381)))), (((((/* implicit */int) var_7)) ^ (((/* implicit */int) (unsigned short)65534))))));
            var_49 = ((((/* implicit */_Bool) 0LL)) ? (((((/* implicit */_Bool) 16777214LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8821))) : ((-9223372036854775807LL - 1LL)))) : (max(((+(2721875576079429350LL))), (((/* implicit */long long int) var_7)))));
        }
        var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) < (var_14))))) : (min((864691128455135232LL), (-2149776403050381845LL)))));
    }
    var_51 = ((((/* implicit */_Bool) min((-7076740961646914381LL), (((/* implicit */long long int) (unsigned short)10562))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (max(((~(-5644569769140452935LL))), (var_14))));
    var_52 = ((/* implicit */long long int) var_4);
    var_53 = min((max((min((((/* implicit */long long int) (unsigned short)40591)), ((-9223372036854775807LL - 1LL)))), (((1183341278130073857LL) / (1262275305451873755LL))))), (((/* implicit */long long int) var_3)));
}
