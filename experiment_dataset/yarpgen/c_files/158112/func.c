/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158112
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) max((var_12), ((~(arr_3 [i_0] [i_1] [i_0])))));
                var_13 = -5816970117029182015LL;
            }
        } 
    } 
    var_14 = ((long long int) (((+(5816970117029182014LL))) / (((((/* implicit */_Bool) -3529652234065437161LL)) ? (var_9) : (var_10)))));
    /* LoopSeq 3 */
    for (long long int i_2 = 3; i_2 < 22; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            var_15 = ((/* implicit */long long int) max((var_15), (max(((-((-(var_9))))), (((((/* implicit */_Bool) 72057589742960640LL)) ? ((-(var_8))) : ((~(-5816970117029182015LL)))))))));
            arr_9 [i_2 - 1] [i_3] = ((((/* implicit */_Bool) -8168282921906984212LL)) ? (((((/* implicit */_Bool) var_11)) ? (5816970117029182025LL) : (arr_8 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775798LL)) || (((/* implicit */_Bool) ((long long int) var_1))))))));
            arr_10 [i_3] [i_3] = var_8;
        }
        for (long long int i_4 = 3; i_4 < 22; i_4 += 4) 
        {
            var_16 = ((var_4) / (-468859792993687852LL));
            var_17 = ((/* implicit */long long int) min((var_17), (max((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))), ((~(-468859792993687871LL))))), (((long long int) arr_12 [i_2 + 1] [i_2 + 1]))))));
            arr_13 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (var_1) : (68719476735LL))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) max((8583470091311862778LL), (arr_7 [i_2 - 2] [i_2 - 2] [i_4]))))))))));
            var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_11 [8LL] [i_4]))) ? ((-(arr_5 [14LL] [i_4]))) : (-191032934592490314LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_4 - 2])) ? (arr_6 [i_2]) : (var_2)))) ? ((+(arr_6 [9LL]))) : (var_7))) : (((long long int) (-9223372036854775807LL - 1LL)))))));
            var_19 = ((/* implicit */long long int) max((var_19), ((((!(((/* implicit */_Bool) max((arr_12 [i_2] [i_2]), (var_11)))))) ? (((((/* implicit */_Bool) arr_11 [20LL] [20LL])) ? ((~(arr_11 [4LL] [i_4]))) : (arr_5 [i_2] [12LL]))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_2 - 3] [i_2 - 3])) ? (var_1) : (var_5)))))));
        }
        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                for (long long int i_7 = 2; i_7 < 22; i_7 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_8 = 1; i_8 < 20; i_8 += 3) 
                        {
                            arr_26 [3LL] [i_5] [i_5] [i_5] [i_8] [i_8] [i_5] = ((((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_2])) ? (9223372036854775797LL) : (-6059131129136131446LL))) & (arr_4 [i_2 - 1] [i_2 - 2]));
                            var_20 = ((/* implicit */long long int) min((var_20), (470123367427221630LL)));
                            var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) ((var_4) << (((9223372036854775793LL) - (9223372036854775793LL)))))) ? (((long long int) arr_20 [i_6] [i_7] [i_8])) : (((-1830557790725023485LL) + (var_9)))))));
                        }
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            arr_29 [10LL] [18LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((5816970117029181988LL) == (var_6)))))))));
                            arr_30 [i_2] [i_2] [i_2] [i_2 - 3] [i_2 + 2] [i_2] = ((long long int) (!(((/* implicit */_Bool) var_5))));
                            arr_31 [i_2] [i_5] [i_6] [2LL] [i_9] = ((((/* implicit */_Bool) ((long long int) 169877877604790529LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8641697207816008713LL)) ? (arr_21 [i_2] [i_7]) : (arr_12 [i_2] [i_2])))) && (((/* implicit */_Bool) var_11)))))) : (((long long int) var_4)));
                            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8383518928181921869LL)) ? (arr_7 [i_2 + 1] [21LL] [i_9]) : (var_4)))) ? (arr_20 [i_6] [i_6] [i_9]) : (max((var_10), (var_11))))))));
                        }
                        arr_32 [i_2 - 3] [i_5] [i_5] [i_2 - 3] [i_5] [i_7 - 1] = ((((/* implicit */_Bool) var_8)) ? (max((arr_12 [i_5] [i_7]), ((-(8195307993413308071LL))))) : (arr_20 [i_2] [i_5] [i_6]));
                        arr_33 [i_2] [i_5] [i_6] [i_6] = (((((((~(var_1))) + (9223372036854775807LL))) >> (((max((var_2), (-2836615523386787838LL))) + (2836615523386787893LL))))) & ((~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (1437965621446312045LL) : (5816970117029181994LL))))));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            arr_37 [i_2] [i_2 - 2] [i_5] [i_6] [i_7] [i_10] = ((((long long int) arr_25 [i_7 - 1] [i_5] [i_6] [i_10] [i_10])) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) -470123367427221640LL))))))));
                            arr_38 [16LL] = 16777215LL;
                            var_23 = ((/* implicit */long long int) min((var_23), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) -7191301831230643372LL)) ? (var_6) : (var_5))) + (var_3)))) ? (max((arr_36 [21LL] [21LL] [15LL] [4LL] [i_10]), (-3648780588548427934LL))) : (((((/* implicit */_Bool) max((arr_4 [i_2] [i_2]), (var_5)))) ? (((arr_25 [i_2] [i_2 - 2] [i_2] [i_10] [i_2]) | (17LL))) : (2316284913530069103LL)))))));
                            var_24 = ((long long int) ((long long int) min((-8695538904894210435LL), (9129165695923148117LL))));
                            arr_39 [i_2 - 2] [i_5] [i_6] [i_7] [i_7] [i_10] [i_10] = -5816970117029182026LL;
                        }
                        arr_40 [i_2] [i_2] [i_2 - 1] [i_2 - 1] &= ((long long int) min((5713666706892178941LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_6])))))));
                    }
                } 
            } 
            var_25 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_6 [i_2 - 1]) : (((((/* implicit */_Bool) var_9)) ? (-5816970117029182038LL) : (var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_36 [i_2] [i_2] [i_5] [13LL] [13LL])) ? (var_0) : (var_6))) <= (((long long int) 562949953421248LL)))))) : (arr_15 [i_2]));
        }
        /* LoopNest 3 */
        for (long long int i_11 = 2; i_11 < 20; i_11 += 3) 
        {
            for (long long int i_12 = 0; i_12 < 24; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    {
                        var_26 = min((var_0), ((-(16777189LL))));
                        var_27 ^= ((((/* implicit */_Bool) ((5816970117029181994LL) + (3046008080172363552LL)))) ? (((((/* implicit */_Bool) var_0)) ? (min((-470123367427221631LL), (var_8))) : (var_9))) : (((arr_5 [i_2 - 3] [i_12]) - (var_1))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_14 = 1; i_14 < 22; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_15 = 2; i_15 < 19; i_15 += 4) 
        {
            for (long long int i_16 = 3; i_16 < 20; i_16 += 4) 
            {
                {
                    arr_57 [i_14] [14LL] = arr_11 [i_14] [i_15];
                    /* LoopNest 2 */
                    for (long long int i_17 = 3; i_17 < 20; i_17 += 4) 
                    {
                        for (long long int i_18 = 0; i_18 < 23; i_18 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) max((var_28), (((((/* implicit */_Bool) ((long long int) arr_7 [i_14] [i_14] [i_16 - 1]))) ? (-2370210433769657492LL) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_11) : (var_4)))) ? (max((var_3), (arr_21 [i_15] [i_15]))) : (var_8)))))));
                                arr_64 [i_14] [i_15] [i_16] [i_17] [i_14] = ((var_9) | (max((((long long int) var_0)), (((arr_51 [i_14] [i_14] [i_16]) | (-562949953421248LL))))));
                                arr_65 [i_14] [13LL] [i_14] [i_17 - 2] [i_18] = ((long long int) ((5816970117029182017LL) % (((long long int) -8960828788032705014LL))));
                            }
                        } 
                    } 
                    arr_66 [i_14] = 3245189181711037171LL;
                }
            } 
        } 
        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
        var_30 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (-3451664486831364663LL)))) ? (((((/* implicit */_Bool) arr_5 [i_14] [i_14])) ? (var_6) : (var_1))) : (var_1))) >> (((var_10) - (642313637998025702LL))));
        var_31 = max((((1099511627775LL) ^ (arr_7 [i_14 - 1] [i_14 - 1] [i_14 + 1]))), (((((/* implicit */_Bool) 1849097069865793692LL)) ? (9223372036854775800LL) : (-7324698374839105414LL))));
    }
    for (long long int i_19 = 0; i_19 < 25; i_19 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_20 = 0; i_20 < 25; i_20 += 4) 
        {
            for (long long int i_21 = 2; i_21 < 24; i_21 += 3) 
            {
                {
                    var_32 = min(((-(arr_74 [i_19] [i_20] [i_21 + 1]))), (arr_72 [i_19]));
                    var_33 = max((((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -9104020400670576383LL)))))) : (((long long int) arr_69 [i_21] [i_21])))), (min((((arr_74 [i_19] [i_20] [12LL]) >> (((arr_67 [i_21]) - (4268796491910768178LL))))), (((((/* implicit */_Bool) -2955039723978799314LL)) ? (var_2) : (var_9))))));
                    var_34 = ((/* implicit */long long int) max((var_34), (((((/* implicit */_Bool) arr_74 [i_19] [i_20] [i_20])) ? (max((arr_71 [i_19] [i_20] [i_21]), (max((arr_69 [i_20] [i_21]), (var_6))))) : (arr_73 [9LL] [i_20] [i_21 - 1])))));
                }
            } 
        } 
        var_35 = max((((((/* implicit */_Bool) ((arr_71 [i_19] [i_19] [i_19]) + (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -262144LL)))))) : (((((/* implicit */_Bool) var_1)) ? (7338335395845813755LL) : (8100610865216124076LL))))), (max((9223372036854775807LL), (min((var_9), (4793928472670094913LL))))));
        arr_75 [22LL] = ((long long int) ((arr_70 [i_19] [i_19]) + (arr_69 [i_19] [i_19])));
    }
    var_36 = ((((/* implicit */_Bool) -4178865578637595988LL)) ? (var_6) : (min((((/* implicit */long long int) ((2695897801831813144LL) >= (var_5)))), (((((/* implicit */_Bool) -7338335395845813756LL)) ? (-16777178LL) : (-1312616181670001528LL))))));
    /* LoopSeq 3 */
    for (long long int i_22 = 0; i_22 < 17; i_22 += 4) /* same iter space */
    {
        var_37 = min((((((-8383518928181921869LL) & (var_7))) | (((((/* implicit */_Bool) var_2)) ? (-3635806577324576298LL) : (1099511627775LL))))), (((((/* implicit */_Bool) 3582441454285066808LL)) ? (max((var_6), (1697112717855959406LL))) : (((var_6) ^ (var_6))))));
        arr_79 [i_22] = var_7;
        /* LoopNest 3 */
        for (long long int i_23 = 1; i_23 < 16; i_23 += 4) 
        {
            for (long long int i_24 = 0; i_24 < 17; i_24 += 4) 
            {
                for (long long int i_25 = 3; i_25 < 14; i_25 += 3) 
                {
                    {
                        var_38 = ((/* implicit */long long int) min((var_38), (min((var_10), (((((min((var_2), (-7786956770102015937LL))) + (9223372036854775807LL))) >> (((var_0) - (3958979406465445010LL)))))))));
                        var_39 = ((((/* implicit */_Bool) max((((4742907546228837193LL) ^ (9223372036787666944LL))), (max((var_7), (arr_41 [i_22] [i_22] [i_25 - 1])))))) ? ((+(((((/* implicit */_Bool) -9223372036854775794LL)) ? (9223372036854775793LL) : (var_7))))) : (min((arr_2 [i_22] [i_24] [i_25]), (-7324698374839105404LL))));
                        var_40 &= var_5;
                        var_41 = arr_11 [i_25] [i_23 - 1];
                        arr_87 [i_22] [i_23 + 1] [i_25 + 3] [i_25] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_78 [i_22] [i_23 - 1])) ? (arr_78 [14LL] [i_23 + 1]) : (var_1))) == (var_0)));
                    }
                } 
            } 
        } 
        var_42 = max((((long long int) var_9)), (((((/* implicit */_Bool) (~(7786956770102015938LL)))) ? (var_0) : (3751024912326762643LL))));
    }
    for (long long int i_26 = 0; i_26 < 17; i_26 += 4) /* same iter space */
    {
        var_43 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (((var_1) / (((((/* implicit */_Bool) arr_48 [i_26])) ? (arr_78 [i_26] [i_26]) : (arr_83 [i_26] [i_26] [i_26] [i_26]))))));
        var_44 = ((/* implicit */long long int) min((var_44), (((max((arr_12 [i_26] [i_26]), (arr_55 [2LL] [i_26]))) >> (((((arr_6 [i_26]) + ((+(var_1))))) - (3394127780242473578LL)))))));
    }
    /* vectorizable */
    for (long long int i_27 = 0; i_27 < 17; i_27 += 4) /* same iter space */
    {
        var_45 = ((long long int) ((((/* implicit */_Bool) -3284327259501421315LL)) ? (576460748008456192LL) : (var_7)));
        var_46 = ((((/* implicit */_Bool) (~(var_3)))) ? (((arr_61 [i_27] [i_27]) - (-12LL))) : (((var_0) ^ (var_5))));
    }
}
