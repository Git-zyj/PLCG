/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138093
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                var_14 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0]))))), (((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_3 [16LL] [i_0] [i_2])) : (var_4)))));
                var_15 = ((((/* implicit */_Bool) (~(((long long int) 3550518979U))))) ? (max((((((/* implicit */_Bool) 0LL)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) (+(arr_5 [i_2])))))) : (((((/* implicit */_Bool) var_2)) ? (max((arr_4 [9U] [9U]), (-13LL))) : (((/* implicit */long long int) arr_3 [i_0] [i_2] [i_2])))));
            }
            /* vectorizable */
            for (long long int i_3 = 4; i_3 < 20; i_3 += 1) 
            {
                var_16 = arr_6 [i_3] [i_0] [i_3 + 1];
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_2 [i_0]) : (arr_1 [i_0] [17LL])))) ? (arr_7 [i_3 - 2] [i_3 + 1] [i_3 - 3]) : (((long long int) var_9)));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned int i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_13 [i_3] [i_3 - 2] [i_3] [i_0] [i_3] [12LL] [i_3])) / (((((/* implicit */_Bool) 1073741823U)) ? (arr_7 [i_0] [i_1] [i_3]) : (var_3)))));
                            var_19 = ((/* implicit */unsigned int) (-(arr_10 [i_0] [i_1] [i_0] [i_0])));
                            var_20 = ((long long int) ((var_13) - (var_0)));
                            var_21 = ((/* implicit */unsigned int) ((5572395463853683147LL) + (-5394142713762125891LL)));
                        }
                    } 
                } 
            }
            for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                var_22 = ((long long int) var_4);
                arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) (~(-6006439273470985193LL))));
            }
            arr_19 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_8 [i_0] [5U] [i_0]) : (var_0))) : (max((((/* implicit */long long int) var_7)), (arr_2 [i_0]))))) + (((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (arr_16 [i_0]) : (var_8))) << (((arr_5 [i_0]) - (132318915U))))))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_8 [i_0] [5U] [i_0]) : (var_0))) : (max((((/* implicit */long long int) var_7)), (arr_2 [i_0]))))) + (((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (arr_16 [i_0]) : (var_8))) << (((((arr_5 [i_0]) - (132318915U))) - (489371225U)))))))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    {
                        arr_28 [i_0] [i_1] = (+(max((((/* implicit */long long int) arr_23 [i_0] [i_1] [i_8])), (max((((/* implicit */long long int) var_11)), (var_4))))));
                        var_23 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) -6245363029539829418LL))));
                        var_24 = ((/* implicit */unsigned int) -5594555969534263335LL);
                    }
                } 
            } 
            arr_29 [i_0] = ((((/* implicit */_Bool) ((max((0LL), (((/* implicit */long long int) 1073741842U)))) + (((((/* implicit */_Bool) var_2)) ? (arr_14 [i_0] [i_0] [i_0] [i_1] [i_1]) : (var_10)))))) ? (arr_15 [i_0] [i_0] [i_0] [i_1]) : (((/* implicit */long long int) var_7)));
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])))) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 5594555969534263307LL))))), (((((/* implicit */_Bool) -1152921504606846976LL)) ? (13LL) : (-5594555969534263335LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [3LL] [i_1] [i_1] [3LL])) ? (((/* implicit */long long int) arr_23 [i_0] [i_1] [i_1])) : (arr_2 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))))));
        }
        for (long long int i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            arr_32 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((15531780U) == (arr_3 [i_0] [i_0] [13U]))))))));
            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((3797883900U) != (3049754659U)))), (max((((/* implicit */long long int) 7U)), (-4LL))))))));
            /* LoopSeq 1 */
            for (unsigned int i_10 = 1; i_10 < 18; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    for (long long int i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        {
                            arr_40 [i_0] [i_9] [i_10] [i_10] [i_12] [i_10] = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_6)), (arr_24 [i_0] [i_9] [i_0] [i_0])));
                            var_27 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_34 [15LL] [i_12] [i_12] [i_12]), (((/* implicit */long long int) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_9] [i_0] [4LL])) ? (var_3) : (arr_36 [i_0] [i_10] [i_11]))))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_11)) : (var_10)))));
                            arr_41 [i_0] = ((/* implicit */unsigned int) arr_20 [i_0] [i_9] [i_0]);
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) 2950319093U);
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(arr_13 [i_0] [i_0] [i_10 + 3] [i_0] [i_9] [i_0] [i_10])))))) ? ((~(max((-3669367257397761977LL), (((/* implicit */long long int) arr_5 [i_0])))))) : (3259025149901642626LL)));
            }
        }
        arr_42 [i_0] = max((arr_34 [i_0] [i_0] [6LL] [i_0]), (((/* implicit */long long int) ((0LL) >= (1152921504606846977LL)))));
        arr_43 [i_0] = (-(max((((/* implicit */long long int) arr_21 [i_0])), (var_5))));
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
        {
            for (unsigned int i_14 = 1; i_14 < 19; i_14 += 3) 
            {
                {
                    arr_48 [i_0] [i_13] [i_0] [i_0] = ((/* implicit */unsigned int) ((max((max((arr_20 [i_0] [i_13] [i_14]), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_14])))), (((/* implicit */long long int) var_6)))) & (((((/* implicit */_Bool) ((long long int) 4294967295U))) ? ((-(arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) arr_21 [i_14]))))));
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 551345540U)) ? (arr_10 [i_0] [i_0] [i_0] [i_14]) : (arr_34 [i_14 + 1] [i_13] [i_13] [i_13]))))) ? (((/* implicit */long long int) (+(arr_23 [i_14] [i_0] [i_0])))) : (max(((+(arr_11 [i_0] [i_13] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_47 [i_0]) : (var_11))))))));
                    arr_49 [i_0] [i_13] = max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0])))))) > (max((arr_5 [i_0]), (var_6)))))), (((((arr_31 [i_0] [i_13]) >= (((/* implicit */long long int) var_6)))) ? (1152921504606846962LL) : (((((/* implicit */_Bool) var_8)) ? (arr_6 [10LL] [i_0] [i_14]) : (((/* implicit */long long int) var_6)))))));
                    /* LoopSeq 3 */
                    for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        var_31 = max((max((((/* implicit */long long int) ((67108800U) >> (((arr_45 [i_0] [i_13]) - (5330453251227408548LL)))))), (((((/* implicit */_Bool) var_1)) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_33 [i_0] [i_13])))))), (((/* implicit */long long int) max((arr_3 [i_14 + 1] [i_0] [i_15]), (arr_3 [i_14 + 2] [i_0] [i_14])))));
                        /* LoopSeq 2 */
                        for (long long int i_16 = 0; i_16 < 21; i_16 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned int) max((-1152921504606846963LL), ((-9223372036854775807LL - 1LL))));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4279435515U)) ? (((/* implicit */long long int) var_2)) : (max((var_13), (max((((/* implicit */long long int) arr_17 [0U] [i_13] [i_0])), (arr_14 [i_16] [i_15] [i_14] [i_0] [i_0])))))));
                        }
                        for (long long int i_17 = 0; i_17 < 21; i_17 += 1) /* same iter space */
                        {
                            arr_56 [i_0] [i_15] [i_14] [i_0] [i_0] = ((((/* implicit */_Bool) ((max((var_5), (arr_6 [i_14] [i_0] [i_17]))) / (((((/* implicit */long long int) 592016858U)) ^ (var_5)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((var_1) == (arr_4 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) arr_39 [i_0])) ? (max((arr_45 [i_13] [i_15]), (arr_31 [i_13] [12U]))) : ((~(var_4))))));
                            var_34 = ((((/* implicit */_Bool) 497083385U)) ? (((/* implicit */long long int) 4078431455U)) : (max((arr_30 [i_0]), (-1152921504606846950LL))));
                            arr_57 [i_0] [i_13] [11LL] [i_15] [18U] = ((((/* implicit */_Bool) 3640658611U)) ? (max((((var_5) | (((/* implicit */long long int) arr_44 [i_14])))), (((arr_8 [i_0] [i_15] [i_17]) / (((/* implicit */long long int) 3797883917U)))))) : (((((/* implicit */_Bool) arr_3 [i_13] [i_0] [i_15])) ? ((-(var_3))) : (arr_31 [i_15] [i_15]))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_18 = 0; i_18 < 21; i_18 += 1) 
                        {
                            var_35 = ((/* implicit */long long int) (+(arr_46 [i_13] [i_0] [i_15])));
                            var_36 = ((/* implicit */unsigned int) var_9);
                            var_37 = ((/* implicit */unsigned int) max((var_37), ((-(1344648179U)))));
                            arr_62 [i_0] [i_0] [i_13] [i_13] [i_14] [i_15] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((var_12) >= (((/* implicit */long long int) var_7)))))) | (arr_0 [i_0] [i_0])));
                        }
                        arr_63 [i_0] [i_0] [i_14] [i_15] = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (arr_27 [i_0])))) && (((/* implicit */_Bool) arr_59 [20U] [0LL] [i_0] [i_13] [i_0] [i_13] [0LL]))))), ((-(max((arr_4 [i_0] [i_15]), (var_5))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_19 = 1; i_19 < 19; i_19 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_20 = 0; i_20 < 21; i_20 += 4) 
                        {
                            var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */long long int) arr_50 [i_0] [i_14] [9LL] [i_0]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_64 [i_20] [i_20] [i_19] [i_14] [i_13] [i_0])) : (var_0))) : (arr_11 [i_0] [i_14] [i_0] [i_20]));
                            var_39 = ((((/* implicit */_Bool) arr_17 [i_0] [i_14 + 1] [i_0])) ? (arr_11 [i_0] [i_13] [i_0] [i_13]) : (((/* implicit */long long int) arr_25 [i_0])));
                        }
                        arr_68 [i_0] [i_14] [i_13] [i_0] = ((long long int) (!(((/* implicit */_Bool) arr_20 [i_13] [6U] [i_19]))));
                    }
                    for (unsigned int i_21 = 0; i_21 < 21; i_21 += 4) 
                    {
                        var_40 = arr_2 [i_0];
                        arr_72 [i_0] [i_0] [i_0] [i_21] = ((/* implicit */unsigned int) max(((+(arr_34 [i_14] [i_14] [i_14 - 1] [i_14]))), (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_60 [i_0] [i_13] [i_14] [i_14] [i_21])) : (var_3))), (arr_6 [i_0] [i_0] [i_14])))));
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [i_21] [i_0] [i_14] [i_21] [i_0])))))) ^ (((((/* implicit */_Bool) 2774625813U)) ? (max((arr_1 [i_0] [i_0]), (5529914034724064026LL))) : (max((arr_67 [i_0] [i_13] [14LL] [i_14] [i_14] [0LL] [i_21]), (arr_71 [i_0] [i_0] [i_14] [i_21] [i_14])))))));
                    }
                    var_42 = (-(((((/* implicit */_Bool) arr_34 [i_14] [i_14 - 1] [i_14 + 2] [i_14 + 2])) ? (arr_37 [i_0] [i_0] [i_14 - 1]) : (arr_37 [i_0] [i_0] [i_14 + 1]))));
                }
            } 
        } 
        var_43 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_21 [9LL]) : (var_6)))) > (max((-3932164063852947981LL), (9223372036854775807LL)))))) << (((((long long int) max((3228234614276072431LL), (((/* implicit */long long int) arr_13 [16U] [16U] [i_0] [i_0] [i_0] [16U] [i_0]))))) - (3228234614276072429LL)))));
    }
    var_44 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_2))))));
}
