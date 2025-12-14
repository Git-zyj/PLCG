/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [6] |= var_14;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = (((arr_4 [i_0]) ? var_7 : var_12));
            var_20 *= (26 <= var_4);
        }
    }
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (-1354908336 % 1821055206);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_21 = (27179 ? -8748299475059704165 : -761685960);
                    arr_13 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2] = (((arr_12 [i_2 - 1] [i_2 - 2] [i_4]) / var_11));
                    var_22 = var_12;
                    arr_14 [i_3] [i_3] [i_3] = ((-(min((arr_11 [i_2 + 2] [i_2 + 1]), 24726))));
                }
            }
        }
    }
    var_23 &= (!675393732);
    #pragma endscop
}
