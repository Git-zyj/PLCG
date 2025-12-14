/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, 22));
    var_17 = (min(var_17, (((((var_1 ? (12031982369915651728 * -1) : var_13)) / (((((min(var_5, var_2))) ? 1 : ((var_9 ? var_0 : var_2))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 -= ((-(arr_1 [i_0])));
                arr_6 [i_0 + 1] [i_0 + 1] = 6227682335314139114;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 += 0;
                            var_20 = (((((10698 ? 65527 : 0))) ^ 3804013787479966083));

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 20;i_4 += 1)
                            {
                                var_21 = (min(var_21, 155));
                                var_22 = ((-(var_0 & var_0)));
                                var_23 = (max(var_23, 8));
                            }
                        }
                    }
                }
                var_24 = var_7;
                arr_16 [i_1] [18] [18] = (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
