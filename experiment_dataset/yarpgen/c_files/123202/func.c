/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123202
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_12 = arr_4 [i_0] [i_1 - 1];
                    arr_8 [i_2] [16LL] [i_2] = ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (var_0) : (arr_1 [i_2]));
                    arr_9 [i_0] = (((+(9223372036854775807LL))) & (9223372036854775807LL));
                }
                for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_4] [i_3] [i_3] [i_5] = (((+(arr_7 [i_0] [i_0]))) - (arr_7 [i_1 + 2] [i_1]));
                                var_13 = (-((+(arr_3 [i_1 - 3] [i_1]))));
                                var_14 += max((((((/* implicit */_Bool) min((-4521037898806061976LL), (arr_6 [i_0] [i_4])))) ? (arr_5 [i_0] [i_3] [3LL]) : (var_11))), (min((((/* implicit */long long int) ((var_3) > (var_8)))), (max((arr_6 [18LL] [i_3]), (444976230550974740LL))))));
                                arr_19 [5LL] [i_4] = min((((((/* implicit */_Bool) (+(-9223372036854775807LL)))) ? ((-(var_8))) : (max((var_6), (var_7))))), (max((max((arr_14 [i_0] [i_3] [i_4]), (var_4))), (((((/* implicit */_Bool) var_2)) ? (arr_2 [i_0] [i_4]) : (var_0))))));
                                arr_20 [i_4] [i_4] [i_4] [11LL] [i_1] [i_4] = min(((~(var_11))), (arr_13 [4LL] [4LL] [i_4] [i_5]));
                            }
                        } 
                    } 
                    var_15 = ((((/* implicit */_Bool) (+(444976230550974734LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((arr_14 [i_3] [i_1] [i_0]) / (var_6))) <= (arr_4 [i_1 + 2] [15LL]))))) : ((~(arr_17 [6LL] [i_1] [i_1 + 2] [i_1] [i_1 - 2] [i_1]))));
                    arr_21 [i_0] [i_0] [i_0] = var_1;
                    arr_22 [i_1] [i_1] = (-(min(((+(var_0))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_3]))))))));
                }
                /* LoopSeq 3 */
                for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 3; i_7 < 18; i_7 += 2) 
                    {
                        for (long long int i_8 = 2; i_8 < 17; i_8 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (((-(-9223372036854775784LL))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7320173340623318517LL)) ? (arr_16 [i_1 + 1] [i_6] [i_6]) : (var_5)))))))))))));
                                var_17 = var_6;
                                var_18 = min(((-(arr_33 [i_8 - 2] [i_1 - 1] [i_7 - 3] [i_8 - 2] [i_8 - 2] [i_8] [i_8 + 2]))), ((+(9223372036854775807LL))));
                            }
                        } 
                    } 
                    arr_34 [i_0] [0LL] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_1 - 4] [13LL] [i_1 - 2])))))) > (((((/* implicit */_Bool) ((long long int) -6394069887703657786LL))) ? (arr_1 [i_1 + 1]) : (((arr_10 [i_0]) + (var_0)))))));
                }
                for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    var_19 = (-(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_2)) ? (var_9) : (var_11))) : (min((-1483925832953905517LL), (arr_13 [i_0] [i_1] [i_0] [15LL]))))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 2; i_10 < 17; i_10 += 2) 
                    {
                        for (long long int i_11 = 3; i_11 < 18; i_11 += 3) 
                        {
                            {
                                var_20 = (+(min((arr_12 [i_1 - 1] [i_10 - 2] [i_11 - 2]), (arr_12 [i_1 - 1] [i_10 - 2] [i_11 - 2]))));
                                var_21 = min((((((/* implicit */_Bool) -23LL)) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775783LL))) : (((long long int) 1693809448499750434LL)))), (((arr_11 [i_11 + 1] [i_11] [i_11 + 1] [i_10 + 3]) / (((long long int) var_2)))));
                                var_22 = ((((/* implicit */_Bool) (-(4740004330832255821LL)))) ? (((arr_32 [i_11 + 1] [0LL] [i_11 + 2] [i_11 - 2] [i_11] [12LL] [i_0]) / (arr_32 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11] [i_11] [i_11] [i_0]))) : (min((-7472343857208265070LL), (((-9223372036854775784LL) / (var_3))))));
                                var_23 = ((((/* implicit */_Bool) var_8)) ? (max((arr_31 [i_9]), (arr_31 [i_9]))) : (arr_24 [i_1 - 1] [i_10 + 3] [i_11 + 1] [i_11 - 3]));
                            }
                        } 
                    } 
                    arr_41 [9LL] [i_1] [i_1] [i_0] = arr_25 [i_0] [i_1] [i_1 - 1];
                }
                /* vectorizable */
                for (long long int i_12 = 1; i_12 < 16; i_12 += 2) 
                {
                    var_24 = var_0;
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        for (long long int i_14 = 2; i_14 < 18; i_14 += 2) 
                        {
                            {
                                var_25 = arr_28 [i_0] [i_1] [i_1] [i_13] [i_13] [i_13];
                                var_26 = ((/* implicit */long long int) ((var_7) > (arr_13 [i_14] [i_14 + 2] [i_12 - 1] [i_1 + 1])));
                            }
                        } 
                    } 
                }
                arr_51 [i_0] [i_1] [i_0] = (+((+(-444976230550974750LL))));
                arr_52 [i_1] = max(((-9223372036854775807LL - 1LL)), (-21LL));
            }
        } 
    } 
    var_27 = ((min((-1483925832953905519LL), (-444976230550974754LL))) | (min((-7114396802110281552LL), (-5LL))));
}
