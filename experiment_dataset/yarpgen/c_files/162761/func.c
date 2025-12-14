/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162761
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
    var_11 = var_5;
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_12 = ((((/* implicit */_Bool) 13194139533312LL)) ? (4611686018425290752LL) : ((-9223372036854775807LL - 1LL)));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_5 [i_0] [i_1] [i_1])))));
            arr_6 [i_1] [i_1] = ((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (var_9) : (var_9))) ^ ((~(var_4))));
            var_14 = (~(arr_1 [i_1 + 2] [i_1 + 2]));
            arr_7 [i_0] [i_1] = -8645060136658139663LL;
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                var_15 = ((((/* implicit */long long int) ((/* implicit */int) ((var_3) != (var_6))))) * (arr_5 [i_0] [i_1] [i_0]));
                /* LoopSeq 3 */
                for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    var_16 = 3636338349592949784LL;
                    var_17 = ((((/* implicit */_Bool) 6521757733750696205LL)) ? (-9223372036854775796LL) : (4136226815002325042LL));
                }
                for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    var_18 = arr_13 [i_4];
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_19 = (~(((((/* implicit */_Bool) var_10)) ? (5781914774927672637LL) : (-7887210411709843549LL))));
                        var_20 = ((((/* implicit */_Bool) (~(arr_4 [i_2] [i_1] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) ((5136469432171279290LL) == (6929585419397977012LL))))) : (var_2));
                    }
                    for (long long int i_6 = 3; i_6 < 16; i_6 += 4) 
                    {
                        arr_21 [i_0] [i_0] [i_1] = var_8;
                        arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((((/* implicit */_Bool) var_0)) ? (476389215047900639LL) : (arr_12 [i_0] [i_0] [i_0] [i_0]))) ^ (arr_8 [i_0]));
                        arr_23 [i_0] [i_1] [i_2] [i_4] [i_1] = arr_13 [i_6];
                    }
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_1] [i_0] = (~(360293714246744096LL));
                        var_21 = (+(arr_20 [i_0] [i_1] [i_2] [i_4] [i_7]));
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_1 + 2] [i_1 + 2]))));
                    }
                }
                for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    var_23 = ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1 + 1])) ? (arr_4 [i_1] [i_1] [i_1 - 1]) : (var_4));
                    var_24 = arr_14 [i_0] [i_1] [i_2];
                    arr_29 [i_0] [i_0] [i_1] [i_2] [i_8] [i_8] = var_2;
                }
            }
        }
        for (long long int i_9 = 1; i_9 < 15; i_9 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_9 + 2]))));
            var_26 = arr_13 [i_0];
        }
    }
    var_27 = min(((~(((var_5) / (var_2))))), (var_10));
}
