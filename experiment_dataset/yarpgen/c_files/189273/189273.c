/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!((((~-100) ? var_7 : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [13] = ((var_1 ? 576460752303423487 : (arr_0 [0] [13])));
                var_12 ^= ((((7 ? -18 : 9223354444668731392)) * (9903 / -1908218121)));

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [17] = (arr_7 [3]);
                    var_13 = (max(var_13, (((var_4 ? 41 : (min((arr_1 [i_0] [i_0 + 4]), (arr_1 [i_0] [i_0 + 1]))))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_14 = (arr_4 [i_3] [12] [i_0]);
                    var_15 = (~-1);
                    arr_12 [i_1] [i_1] [i_3] [0] = var_0;
                    arr_13 [4] = var_6;
                }
            }
        }
    }
    var_16 = ((255 ? 255 : -1));
    #pragma endscop
}
