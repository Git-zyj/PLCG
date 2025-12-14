/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (var_4 * var_14)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 ^= -8900007482011068366;
        var_21 = ((0 > (arr_1 [i_0])));
        var_22 = arr_0 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_23 ^= (((arr_4 [i_0] [i_0] [i_0]) ? 8900007482011068365 : (arr_7 [i_0] [i_1] [i_2])));
                    var_24 = ((((arr_6 [i_2] [i_1] [i_0] [i_0]) && 216)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                arr_13 [i_3] = var_0;
                var_25 = (min(var_25, -var_5));
            }
        }
    }
    #pragma endscop
}
