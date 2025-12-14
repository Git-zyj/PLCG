/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (arr_1 [i_0 + 2]);
                    var_20 = (((63 != (arr_6 [i_2]))));
                    var_21 = (min(var_21, (((var_4 ? var_2 : (~71))))));
                }
            }
        }
        arr_9 [2] = (-(arr_0 [i_0 + 1] [i_0 - 2]));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_22 += var_14;
        var_23 = arr_1 [i_3];
    }
    var_24 += var_17;
    var_25 = var_11;
    #pragma endscop
}
