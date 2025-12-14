/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (min(var_17, var_13));
                var_18 += ((~(((arr_2 [0] [i_0 - 1]) << (((arr_2 [14] [i_0 - 1]) - 3173061105387383778))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_1] [i_0] = (-1 / 4294967295);
                    arr_9 [i_0 - 1] [i_0] [15] = (!var_10);
                    arr_10 [1] [i_0] [i_0] [i_2] = (((arr_4 [i_0 - 1] [i_2 - 2] [i_2]) ? 74 : var_2));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_13 [i_1] [i_1] [i_1] [i_0] = (arr_5 [i_0] [i_0] [i_3]);
                    arr_14 [16] [i_0] [i_3] [i_0] = var_9;
                    arr_15 [11] [7] [i_0] [i_1] = ((~(-9223372036854775804 / 127)));
                }
                var_19 = (min((((!(((1 ? (arr_2 [i_0] [i_1]) : var_10)))))), (min((min(0, var_14)), (arr_12 [i_1] [12] [12])))));
            }
        }
    }
    var_20 = (min(var_6, 9223372036854775803));
    #pragma endscop
}
