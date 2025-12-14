/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141398
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
    var_11 = (((~(999894576408828762LL))) ^ (((long long int) var_2)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_12 = max((((999894576408828738LL) / (6357841924222605527LL))), (((long long int) var_7)));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                arr_10 [i_1] [i_1] = var_7;
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1 + 2] [i_1]))))))))));
            }
            for (long long int i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                var_14 = ((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_1 - 1])) ? (arr_9 [i_1] [i_1 - 1] [i_1 - 2] [i_3 - 1]) : (min((arr_9 [i_1] [4LL] [i_1 + 3] [i_3 - 1]), (82481206761431199LL))));
                arr_13 [i_0] [i_1] [i_1] [i_3] = max((((long long int) min((arr_11 [i_1] [4LL] [2LL]), (0LL)))), (((((arr_12 [i_0] [8LL] [i_0]) + (9223372036854775807LL))) << (((arr_9 [i_0] [i_0] [i_0] [i_0]) - (8775694810512604151LL))))));
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(-82481206761431201LL)))))))));
                    var_16 = ((/* implicit */long long int) max((var_16), (((long long int) min((var_3), (999894576408828762LL))))));
                    var_17 = (~(max((((((/* implicit */_Bool) 8736050694725488115LL)) ? (var_2) : (-1LL))), (((arr_8 [12LL] [i_1 + 3]) / (-2801115857283527020LL))))));
                    var_18 |= ((((/* implicit */_Bool) -2124883607615796838LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 + 3] [i_3])) && (((/* implicit */_Bool) arr_5 [i_4] [i_0])))))) != (var_8))))) : (min((min((-2020615737878199833LL), (arr_12 [i_0] [i_1 - 1] [i_4]))), (((long long int) arr_12 [2LL] [4LL] [i_4])))));
                    arr_17 [i_1 + 1] [13LL] [i_1] = (((!(((/* implicit */_Bool) (~(-998957299408482227LL)))))) ? (-8736050694725488140LL) : (arr_6 [i_0] [i_0]));
                }
                for (long long int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
                {
                    var_19 = min((((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 2])) ? (arr_8 [i_0] [i_1 + 1]) : (arr_8 [6LL] [i_1 + 1]))), (((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 2])) ? (7958321244777093848LL) : (var_8))));
                    arr_22 [i_5] [1LL] [i_1] [0LL] [i_5] = ((-2124883607615796838LL) - ((-(7997835791986047493LL))));
                    var_20 = max(((-(3LL))), (var_4));
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                {
                    var_21 *= (~(-1LL));
                    var_22 = ((var_10) | (var_10));
                }
                var_23 = (((!(((/* implicit */_Bool) -8195912842861568207LL)))) ? (min((arr_20 [i_0] [11LL] [11LL] [8LL] [i_3 + 1]), (arr_6 [i_1] [i_1 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) > ((-(-4002227636647220177LL))))))));
                /* LoopSeq 1 */
                for (long long int i_7 = 2; i_7 < 13; i_7 += 1) 
                {
                    arr_28 [i_0] [i_1 + 2] [i_1] [2LL] [2LL] [i_1] = (-(var_0));
                    var_24 = ((/* implicit */long long int) max((var_24), (min((((((/* implicit */_Bool) arr_7 [i_1 + 2] [i_3 + 1] [i_7 + 1] [i_7 - 1])) ? (arr_19 [i_1 + 3] [i_1 + 2] [i_1 + 3] [i_0] [i_3 - 1] [i_7 + 1]) : ((~(-1LL))))), (((long long int) -6297096749922015708LL))))));
                }
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
            {
                arr_31 [i_0] [i_1 + 1] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_5)))) || (((/* implicit */_Bool) var_3))));
                var_25 = ((-3438839404390728169LL) | (-4550643188648660067LL));
            }
            /* vectorizable */
            for (long long int i_9 = 0; i_9 < 14; i_9 += 2) /* same iter space */
            {
                arr_34 [i_1] = 7LL;
                var_26 = arr_5 [i_1] [i_1];
                /* LoopSeq 4 */
                for (long long int i_10 = 1; i_10 < 13; i_10 += 3) 
                {
                    var_27 = ((((((arr_14 [i_0] [i_1 - 2] [i_1] [8LL] [i_1]) | (-2801115857283527017LL))) + (9223372036854775807LL))) << (((arr_35 [i_0] [i_9] [i_1] [i_0] [10LL] [i_10 + 1]) - (7303463963762821135LL))));
                    var_28 ^= (+(2179791122553827874LL));
                    var_29 = var_1;
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        arr_41 [9LL] [9LL] [9LL] [i_1] [i_11] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((((/* implicit */_Bool) -8607972460376802685LL)) ? (2179791122553827860LL) : (3511845561379183511LL)))));
                    }
                    arr_42 [i_10] [i_1] [i_1] [i_0] = ((long long int) (-9223372036854775807LL - 1LL));
                }
                for (long long int i_12 = 1; i_12 < 11; i_12 += 3) 
                {
                    arr_46 [i_0] [i_1] [5LL] [2LL] = ((long long int) var_4);
                    arr_47 [i_0] [i_1 + 1] [i_1] [i_9] [i_9] [i_1] = arr_30 [i_12 - 1] [i_12 + 2] [i_1];
                    var_31 = (~(arr_1 [i_1 + 2]));
                    var_32 &= ((/* implicit */long long int) ((((-2812735484323832210LL) & (-7912616743584913329LL))) >= (arr_19 [i_0] [i_1] [2LL] [i_9] [i_9] [i_12 + 2])));
                }
                for (long long int i_13 = 0; i_13 < 14; i_13 += 1) 
                {
                    var_33 = (+(((((/* implicit */_Bool) 9052696888154507725LL)) ? (6610962835698124725LL) : (arr_16 [i_9] [i_1] [i_9]))));
                    var_34 = var_8;
                    var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4002227636647220186LL))));
                }
                for (long long int i_14 = 3; i_14 < 13; i_14 += 1) 
                {
                    var_36 = var_6;
                    var_37 = ((((/* implicit */_Bool) -3511845561379183512LL)) ? (-9103947003683817561LL) : (-4377244906292925724LL));
                    arr_54 [i_0] [i_1] [i_0] [i_14 - 1] [6LL] [i_14] &= ((arr_24 [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_0] [i_1 - 1]) ^ (arr_24 [i_1 - 1] [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_0] [i_1 + 2]));
                    arr_55 [i_1] [i_1] = ((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (9007199250546688LL) : (var_0));
                    var_38 = var_3;
                }
            }
            var_39 = 4377244906292925723LL;
        }
        /* LoopNest 2 */
        for (long long int i_15 = 2; i_15 < 12; i_15 += 2) 
        {
            for (long long int i_16 = 0; i_16 < 14; i_16 += 1) 
            {
                {
                    var_40 = var_10;
                    var_41 = min(((~(((((/* implicit */_Bool) -7997835791986047488LL)) ? (3879349782222093797LL) : (arr_14 [i_16] [i_0] [i_0] [8LL] [i_0]))))), ((~(min((var_1), (arr_3 [i_15 + 1]))))));
                    var_42 ^= var_6;
                    arr_60 [4LL] [i_16] = var_0;
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_17 = 2; i_17 < 13; i_17 += 1) 
        {
            var_43 = var_0;
            arr_65 [i_0] = (-(-4630346273899362049LL));
            var_44 &= var_1;
            arr_66 [i_0] [i_17] = min((min((4849899623066450950LL), (arr_37 [i_17] [i_17 - 1] [i_17 - 1] [i_17 + 1]))), (((((/* implicit */_Bool) arr_32 [i_17 - 1] [i_17 + 1] [i_0])) ? (max((var_6), (arr_23 [i_0]))) : (var_9))));
        }
        /* vectorizable */
        for (long long int i_18 = 2; i_18 < 12; i_18 += 2) 
        {
            var_45 = arr_57 [i_0];
            arr_71 [i_0] [i_0] = (-(arr_16 [i_18] [i_18 + 1] [i_18 - 1]));
            arr_72 [i_0] [i_18] = var_9;
        }
    }
    /* LoopNest 2 */
    for (long long int i_19 = 0; i_19 < 14; i_19 += 3) 
    {
        for (long long int i_20 = 1; i_20 < 12; i_20 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_21 = 1; i_21 < 12; i_21 += 1) 
                {
                    for (long long int i_22 = 0; i_22 < 14; i_22 += 3) 
                    {
                        for (long long int i_23 = 1; i_23 < 12; i_23 += 3) 
                        {
                            {
                                arr_89 [i_19] [8LL] [i_19] [3LL] [i_23] = ((long long int) min((((((/* implicit */_Bool) var_7)) ? (arr_86 [i_23 + 1] [4LL] [2LL] [4LL] [i_23]) : (-1LL))), (var_6)));
                                var_46 = ((/* implicit */long long int) min((var_46), (((((/* implicit */_Bool) arr_68 [i_19] [i_20 + 1])) ? (((((/* implicit */_Bool) (~(arr_0 [9LL] [9LL])))) ? (var_9) : (min((9223372036854775807LL), (9075047416431051236LL))))) : (((((/* implicit */long long int) ((/* implicit */int) ((var_3) > (var_9))))) ^ ((~(var_9)))))))));
                                var_47 = ((((/* implicit */_Bool) 82481206761431199LL)) ? (-5037968787049912932LL) : (3511845561379183511LL));
                                var_48 = arr_83 [i_19] [i_19] [i_23];
                                arr_90 [1LL] [i_20 + 2] [4LL] [i_22] [i_23 + 1] = min((((((var_8) + (9223372036854775807LL))) >> (((arr_5 [i_19] [4LL]) - (8729690673400962519LL))))), (((((/* implicit */_Bool) arr_74 [i_19] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) -1635006464373307267LL)))))) : (min((1862284635063783113LL), (1394022751060772270LL))))));
                            }
                        } 
                    } 
                } 
                var_49 = ((((/* implicit */_Bool) 9223372036854775781LL)) ? (-7296453870673150183LL) : (562948879679488LL));
                arr_91 [i_19] [i_19] [i_19] = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (5017256687123220916LL) : (-4849899623066450936LL));
            }
        } 
    } 
}
