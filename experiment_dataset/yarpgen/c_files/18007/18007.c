/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((!((((var_8 >= var_5) ? (var_1 - var_1) : (max(var_7, var_7)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_11 = var_8;
                            arr_13 [i_0] [5] [i_1] [15] [i_0] [i_3] = var_2;
                        }
                    }
                }
                var_12 = var_10;
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_16 [i_4] = (((1 & 18001758112464263147) || (!var_0)));
        arr_17 [14] [i_4] = ((var_10 ? var_8 : var_2));
        arr_18 [i_4] = (var_3 | var_0);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = ((6265729773253955754 ? -1963526176070239319 : 4243941182));
        arr_22 [i_5] [3] = -var_10;
    }
    var_13 = (max(var_13, var_8));
    #pragma endscop
}
