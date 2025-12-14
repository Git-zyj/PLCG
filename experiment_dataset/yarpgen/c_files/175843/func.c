/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175843
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
    var_12 = ((/* implicit */unsigned int) ((long long int) var_7));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5054100390633634753LL)) ? (1961263990U) : (24U)))) || ((!(((/* implicit */_Bool) var_9))))));
                var_14 = ((/* implicit */long long int) ((unsigned int) 2333703308U));
                var_15 = 1961263980U;
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_16 = var_5;
        arr_9 [i_2] = ((2603821139U) / (1961263990U));
    }
    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 2) 
    {
        var_17 += 553291963U;
        var_18 = min((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_8) : (var_9))))), (max((((/* implicit */long long int) arr_11 [i_3 + 1])), (max((((/* implicit */long long int) 2955817207U)), (-1305438495257121161LL))))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) 12196292U))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (var_0)));
        var_21 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 2845424965325681472LL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))), (((((/* implicit */_Bool) (-(arr_3 [16U])))) ? ((~(158274366U))) : (2684165169U)))));
    }
    for (unsigned int i_4 = 4; i_4 < 8; i_4 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((((unsigned int) var_9)) * (((unsigned int) 2215106759U))))));
        /* LoopSeq 4 */
        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_6 = 3; i_6 < 9; i_6 += 2) /* same iter space */
            {
                var_23 &= ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_18 [i_6] [i_5] [i_4 - 3] [i_4 - 3])) ? (1273448714U) : (2331452440U)))))) ? (var_3) : (min((1963514837U), (((unsigned int) var_5)))));
                arr_22 [i_4 - 1] [i_4 - 1] [i_4 - 1] &= ((/* implicit */long long int) max(((!(((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1305438495257121160LL)) ? (var_11) : (var_6))))))));
                var_24 = max(((-(2603821139U))), (min((arr_11 [i_5 - 1]), (553291963U))));
                arr_23 [i_6] [i_5] [i_4 - 3] [i_4] = ((/* implicit */unsigned int) ((arr_5 [i_4] [i_5] [i_6 - 2]) == (((/* implicit */long long int) (~(arr_21 [i_6 - 3] [i_6 - 3] [i_6 - 3]))))));
                arr_24 [2U] [10U] = ((unsigned int) -528742437207169341LL);
            }
            for (unsigned int i_7 = 3; i_7 < 9; i_7 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) 2903643528U)) : (var_10)))) ? (((((/* implicit */long long int) 3956126306U)) - (8287839571117190417LL))) : (((/* implicit */long long int) var_7))))) ? (((((/* implicit */_Bool) 3754578993U)) ? (-8768021081738187351LL) : (((((/* implicit */_Bool) var_6)) ? (-2215949481278606867LL) : (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((unsigned int) ((long long int) 536782489469272374LL))))));
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) max((((/* implicit */long long int) arr_7 [i_4 + 3] [5U])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-5263906707629838065LL) : (((/* implicit */long long int) var_3))))) ? (min((-1664487905493892740LL), (arr_14 [i_5]))) : (((/* implicit */long long int) ((unsigned int) arr_25 [i_4] [i_5] [i_7 + 1]))))))))));
            }
            for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_9 = 2; i_9 < 11; i_9 += 4) /* same iter space */
                {
                    arr_34 [i_4] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_7))))));
                    var_27 = ((((/* implicit */_Bool) 2305843009213693952LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5892946494231689267LL)))))) : (-4402533914054595888LL));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        var_28 = arr_36 [i_4 + 3];
                        arr_39 [i_4] [i_5] [i_8] [i_9 - 1] [i_10] = var_8;
                        var_29 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_4 [i_5])) ? (var_11) : (arr_19 [i_4] [11LL] [i_8] [i_9 - 1]))));
                        var_30 = ((((/* implicit */_Bool) -536782489469272368LL)) ? (-528742437207169341LL) : (((/* implicit */long long int) 953425151U)));
                        arr_40 [i_4 + 1] [4U] [4U] [10LL] = ((/* implicit */long long int) ((((/* implicit */long long int) ((arr_38 [10LL] [i_9] [6LL] [i_4 - 3] [i_4 - 3] [i_4 - 3]) - (1193229232U)))) != (3809200455080086150LL)));
                    }
                    var_31 = ((((long long int) arr_19 [i_4] [i_5 - 2] [i_8] [i_9 - 1])) * (((/* implicit */long long int) arr_0 [i_4 + 1])));
                }
                for (long long int i_11 = 2; i_11 < 11; i_11 += 4) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_13 [i_4 + 4])) > (var_10)));
                    var_33 = ((/* implicit */unsigned int) ((long long int) max((((((/* implicit */_Bool) 2215106733U)) ? (925496124706725281LL) : (((/* implicit */long long int) arr_38 [i_4] [i_4] [i_8] [i_11] [9U] [3U])))), (((/* implicit */long long int) ((var_4) == (var_0)))))));
                    var_34 = ((/* implicit */unsigned int) (+(((long long int) 2215106738U))));
                    var_35 = ((((/* implicit */_Bool) (+(arr_38 [i_4] [i_4 + 4] [i_11 - 2] [8U] [i_11] [i_11 - 2])))) ? (((((/* implicit */_Bool) var_0)) ? (var_4) : (arr_25 [i_5 + 1] [i_4] [i_4 + 3]))) : ((((!(((/* implicit */_Bool) 1305438495257121161LL)))) ? (((((/* implicit */_Bool) arr_10 [i_5])) ? (var_5) : (arr_15 [2U]))) : (var_11))));
                    arr_43 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (+(3021802502U));
                }
                for (long long int i_12 = 2; i_12 < 11; i_12 += 4) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -258069606052199928LL)) ? (arr_32 [i_4 - 4] [i_5] [10U] [i_5]) : (((/* implicit */long long int) var_2))))) || (((/* implicit */_Bool) arr_42 [3LL] [i_5] [3LL]))))))))));
                    arr_48 [i_4] [i_5] [i_5] [i_12 - 1] [i_8] = ((long long int) max((((unsigned int) arr_45 [i_4] [i_5 - 1] [i_8] [i_12] [i_8] [i_8])), (var_5)));
                }
                arr_49 [8LL] [8LL] [8LL] = ((unsigned int) ((unsigned int) arr_31 [i_4 + 1] [i_5 + 1] [i_4 + 1] [1LL]));
                arr_50 [i_4] [i_5] [8U] [i_4] = min((((/* implicit */unsigned int) ((((/* implicit */long long int) 610627906U)) != (((long long int) 2995767496U))))), (max(((-(var_0))), (arr_20 [i_5 - 2] [i_5 - 2] [i_5 + 1]))));
            }
            var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_25 [i_5 - 1] [i_4] [i_4]))))));
            var_38 = ((/* implicit */long long int) 2331452438U);
        }
        /* vectorizable */
        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) 
        {
            var_39 = ((/* implicit */unsigned int) (+(((long long int) var_0))));
            /* LoopSeq 1 */
            for (unsigned int i_14 = 1; i_14 < 11; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_15 = 4; i_15 < 11; i_15 += 4) 
                {
                    for (long long int i_16 = 1; i_16 < 11; i_16 += 2) 
                    {
                        {
                            arr_61 [i_16] [i_13] [i_14] [i_15] [i_16] = arr_3 [i_16];
                            arr_62 [i_4] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2925540775U)) ? (((/* implicit */long long int) 2079860528U)) : (-1305438495257121161LL)))) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */_Bool) -2789724392844094738LL)) ? (arr_14 [i_4]) : (var_10)))));
                            arr_63 [10U] [i_16] [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_6)) : (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_1) == (-1LL))))) : (((long long int) var_0))));
                            var_40 = 480U;
                            var_41 = ((long long int) arr_58 [i_16]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 12; i_17 += 1) 
                {
                    for (unsigned int i_18 = 0; i_18 < 12; i_18 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned int) ((long long int) 4294967295U));
                            arr_69 [i_4] [i_4] [i_18] [i_4] [i_18] [0U] = ((unsigned int) ((((/* implicit */_Bool) 131070LL)) ? (var_8) : (var_11)));
                            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (!(((((/* implicit */long long int) 1538215141U)) != (arr_18 [i_17] [i_4 + 2] [i_4 + 2] [i_4 + 2]))))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (long long int i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_20 = 1; i_20 < 11; i_20 += 3) 
                {
                    var_44 = (((-(var_4))) / (var_9));
                    var_45 = ((((/* implicit */_Bool) arr_27 [i_4] [i_4 - 1])) ? (var_3) : (((((/* implicit */_Bool) -8768021081738187352LL)) ? (1439045153U) : (arr_7 [i_4] [i_13]))));
                    var_46 = ((long long int) ((((/* implicit */_Bool) arr_54 [11LL] [i_13] [i_19] [i_20])) ? (3559225254U) : (var_7)));
                }
                for (long long int i_21 = 0; i_21 < 12; i_21 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_22 = 0; i_22 < 12; i_22 += 3) 
                    {
                        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 281474976710652LL)) ? (5892946494231689267LL) : (((/* implicit */long long int) arr_37 [i_4] [i_13] [3U] [i_4 + 3] [i_4 + 3] [2LL] [i_13])))))));
                        arr_79 [i_22] [i_21] [i_22] [i_22] [i_13] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(59417493U)))) ? (var_8) : ((+(arr_1 [21U])))));
                    }
                    arr_80 [i_19] [i_13] [i_4] = (~(arr_25 [i_4] [i_4] [i_13]));
                }
                var_48 = (-(arr_7 [i_4] [i_4 - 1]));
            }
        }
        for (unsigned int i_23 = 0; i_23 < 12; i_23 += 1) /* same iter space */
        {
            var_49 |= 4294967295U;
            var_50 = ((/* implicit */unsigned int) min((var_50), (((unsigned int) -300335391824743622LL))));
            arr_84 [i_23] [6U] [i_4] = ((/* implicit */unsigned int) ((long long int) 65535LL));
            var_51 = (-(max((3324390698U), (var_8))));
        }
        for (unsigned int i_24 = 0; i_24 < 12; i_24 += 1) /* same iter space */
        {
            var_52 = ((((/* implicit */_Bool) var_3)) ? ((-(var_6))) : (((((/* implicit */_Bool) min((var_6), (arr_64 [i_24] [i_24] [i_24] [i_24] [i_4] [i_4 - 1])))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (304576841U) : (1073741824U))) : (((unsigned int) var_3)))));
            arr_87 [i_24] = var_2;
        }
    }
}
