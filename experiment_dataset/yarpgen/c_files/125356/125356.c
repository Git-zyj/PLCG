/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_4;
        arr_3 [1] = var_10;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [7] = var_3;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    {
                        var_13 = (min(((var_10 ? var_10 : 0)), (((var_5 + ((var_3 ? var_1 : -25837)))))));
                        arr_14 [i_4 - 1] [i_3] [i_2] &= (((1948815262 - var_3) / (((var_6 * var_4) ? (4294967265 / 1) : -8))));
                    }
                }
            }
        }
    }
    var_14 &= (((max(32767, (var_1 ^ var_9))) + var_1));
    #pragma endscop
}
