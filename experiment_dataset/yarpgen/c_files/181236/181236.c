/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0 + 2] [i_0 - 3] = (max((arr_1 [i_0]), (((max(var_11, 0))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [i_0 + 1] [i_0] = (((-1 - var_3) <= ((0 ? 2305505500 : -6033380625324074091))));
                var_14 -= (!0);
            }
            var_15 = (max(var_15, ((((((var_6 % (arr_5 [i_0 - 3] [i_0 - 1] [i_0 - 3])))) < (arr_1 [i_0 - 1]))))));
        }
        var_16 = (arr_7 [i_0] [i_0]);
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_17 = (arr_14 [i_3] [i_4] [i_5]);

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_18 = ((355908911 ? (arr_8 [i_3] [i_4] [i_5] [i_6]) : var_5));
                        var_19 *= (((arr_8 [i_3] [i_3] [i_3] [i_3]) - -1676));
                        var_20 = -0;
                    }
                }
            }
        }
        var_21 = (max(1, -355908911));
    }
    #pragma endscop
}
