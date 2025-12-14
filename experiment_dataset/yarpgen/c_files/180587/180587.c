/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 ^= ((arr_2 [12]) >= (!var_5));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = 16128;
                                var_20 ^= var_1;
                            }
                        }
                    }
                    var_21 = (~376527056);
                    arr_16 [i_0] [i_1] [i_2] [i_0] = var_3;
                    var_22 = var_16;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                arr_23 [i_5] [11] = (max(3162535583, ((var_13 ? var_9 : var_17))));
                var_23 = ((((min((max((arr_17 [2]), 61907)), (((var_8 <= (arr_12 [i_5]))))))) ^ (arr_18 [i_6])));
                var_24 = (min(3918440254, 29356));
            }
        }
    }
    var_25 = (min(var_25, (var_11 > var_0)));
    #pragma endscop
}
