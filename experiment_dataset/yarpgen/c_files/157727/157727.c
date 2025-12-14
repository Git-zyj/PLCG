/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = -1736133379;
        arr_2 [17] = (-127 - 1);
        arr_3 [i_0] = 1736133379;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_15 [0] [i_3] [i_2] [i_2] [i_2] [0] [0] = 109;
                            var_17 |= ((-273696490 ? ((273696490 ? 273696467 : 65519)) : (108 || var_6)));
                        }
                    }
                }
                var_18 = (max(var_18, var_4));
                var_19 = 2001562138;
                arr_16 [i_0] [i_0] [i_1] [i_2] = (((((var_3 ? var_13 : var_4))) ? (arr_0 [1]) : -5656173428933211490));
            }
            arr_17 [i_0] [i_0] [10] = 588271742;
        }
    }
    var_20 = ((-((((min(1, 3005790784593657639))) ? var_3 : (59 - 0)))));
    #pragma endscop
}
