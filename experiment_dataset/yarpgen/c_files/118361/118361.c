/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = ((~(arr_0 [i_0 - 2])));
                arr_4 [1] |= ((var_5 ? -1 : var_2));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_2] = var_12;
                var_17 = (min(var_17, ((((0 ? var_2 : var_11))))));

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_18 = (((~7052504730317865613) & var_11));
                    arr_14 [i_2] = 17798724705594445446;
                }
                arr_15 [i_2] [i_2] = 2114473958;
            }
        }
    }
    var_19 = var_10;
    #pragma endscop
}
