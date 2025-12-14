/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = (max(10964305151446557071, 3060215810));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_2] [i_0] [i_2] [i_0] = -122;
                                arr_13 [i_1] [i_2] = 0;
                            }
                        }
                    }
                    arr_14 [i_2] [i_0] [i_2] [11] = (3060215809 & -9223372036854775783);
                }
            }
        }
        arr_15 [i_0] [i_0] = min((max((arr_1 [i_0]), 18446744073709551615)), (3060215809 >= 3371876913));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    arr_21 [i_5] [i_5 - 1] [i_6] [i_5] = ((var_9 ^ ((max(((var_10 ? var_0 : (arr_0 [i_0] [23]))), (max(-1503625848457075705, 268304384)))))));
                    arr_22 [i_6] [i_5] [i_0] = (arr_2 [i_5 - 2] [i_5 - 2] [i_5]);
                    var_16 = (min(var_16, (((~(max((arr_1 [i_6]), 3940649673949184)))))));
                }
            }
        }
    }
    #pragma endscop
}
