/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (((arr_0 [i_0]) ? (arr_2 [i_1]) : (arr_2 [i_1])));
            var_15 = (arr_2 [i_0]);
        }
        var_16 = (min(var_16, 524287));
        var_17 = (((arr_2 [i_0]) ? ((70 ? ((-2686165142339458276 ? 7288011071254283840 : 2686165142339458277)) : (~0))) : 8922584790747028042));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                {
                    var_18 = arr_10 [i_4 - 3] [i_4 + 2] [i_4 - 3] [i_4];

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_19 = var_12;
                        var_20 = (min(var_20, var_2));
                        var_21 += (arr_12 [i_2] [i_2] [i_2] [i_2]);
                    }
                }
            }
        }
        var_22 = 0;
        var_23 = ((-9223372036854775807 - 1) ? (arr_15 [i_2] [i_2] [i_2] [i_2]) : 1719765854043304939);
    }
    #pragma endscop
}
