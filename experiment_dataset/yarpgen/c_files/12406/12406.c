/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_0;
    var_12 = (min(var_12, ((max((max((((var_0 ? var_2 : var_0))), (var_10 / var_1))), (((min(var_10, var_6)))))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_13 = ((var_9 && (arr_1 [i_0])));
            var_14 = (((arr_1 [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_6 [i_0] [i_1])));
            var_15 = (max(var_15, ((((((var_6 ? var_6 : var_10))) ? (arr_1 [i_0]) : (var_4 && var_3))))));
            var_16 |= (((arr_1 [i_1]) > var_0));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_17 = 9223372036854775807;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_18 -= (((arr_4 [5] [i_2] [i_2]) ? ((min((arr_4 [i_2] [i_3] [i_4]), (arr_4 [i_2] [i_3] [i_4])))) : ((1 ? -20389 : -20384))));
                        var_19 -= (arr_9 [i_0] [i_4] [i_0]);
                    }
                }
            }
            var_20 = (i_0 % 2 == zero) ? ((min((max((arr_9 [i_0] [i_0] [i_0]), (!var_5))), ((((var_1 ? var_6 : var_10)) / ((min((arr_2 [7] [i_0]), var_9)))))))) : ((min((max((arr_9 [i_0] [i_0] [i_0]), (!var_5))), ((((var_1 ? var_6 : var_10)) * ((min((arr_2 [7] [i_0]), var_9))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_19 [i_0] [i_0] = (arr_10 [0] [i_5]);
            var_21 = -2389244049;
            arr_20 [i_0] [i_0] = ((-(arr_0 [i_5] [i_0])));
            arr_21 [i_0] [i_5] = (arr_0 [i_0] [i_5]);
            arr_22 [i_0] = (!var_2);
        }
        arr_23 [i_0] = (((min((arr_12 [i_0] [i_0] [i_0]), var_4))));
        var_22 = ((((max((arr_9 [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0])))) ? (arr_9 [i_0] [i_0] [i_0]) : ((~(arr_9 [i_0] [i_0] [i_0])))));
        arr_24 [i_0] = ((((((((var_4 ? var_5 : var_2))) ? var_2 : (arr_9 [i_0] [i_0] [i_0])))) ? var_4 : (max(((~(arr_11 [6] [i_0] [i_0] [i_0]))), (min(var_4, (arr_4 [i_0] [i_0] [i_0])))))));
    }
    #pragma endscop
}
