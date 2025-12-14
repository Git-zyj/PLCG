/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 = (max(var_15, ((min(-65535, 37765)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (((0 * (74 < 0))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_16 += (((arr_6 [i_0] [i_0] [i_0]) ? (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : var_9)) : 29710));
            var_17 = -74;
            var_18 = 0;
        }
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            arr_11 [i_2] [i_0] = (arr_5 [i_2] [i_0] [i_0]);
            var_19 = -11;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_20 = (arr_1 [i_3] [i_4]);
                        arr_18 [i_0] [i_4] [5] [i_0] [i_0] = (((((-89 - ((-(arr_6 [i_2] [i_3] [i_4])))))) ? (arr_2 [i_2]) : ((((((arr_14 [4] [i_4] [i_4] [4]) * var_9))) ? -112 : 10))));
                    }
                }
            }
            var_21 = (max(var_21, var_13));
            arr_19 [i_0] [i_2 - 1] = (((((0 ? (~25) : 79))) ? (min(((var_1 ? (arr_10 [i_0] [i_0] [i_0]) : 0)), var_7)) : ((-15104 & (((97 <= (arr_17 [i_2] [2] [i_2]))))))));
        }
        var_22 = 0;
        var_23 = (max(var_23, ((((((-7 ? var_2 : 0))))))));
        var_24 = -75;
    }
    #pragma endscop
}
