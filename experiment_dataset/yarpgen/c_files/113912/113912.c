/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((arr_4 [i_0 + 3] [i_0 - 3]) == var_13);
                var_14 = ((1 ? (arr_0 [i_1]) : (((arr_4 [i_0 + 1] [i_0 + 3]) + ((-(arr_3 [i_0])))))));
                arr_7 [i_0] [i_0] = (arr_5 [i_0] [i_0] [i_1]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_15 -= (max(-1273666736, ((-1 ? 1 : (-2147483647 - 1)))));
        arr_12 [i_2] [i_2] = (((-(arr_11 [i_2] [i_2]))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_16 = var_6;
        arr_15 [i_3] = (min(764083818, -1));
    }
    var_17 = (min(var_17, var_7));
    var_18 = ((var_13 ? 117440512 : var_0));
    var_19 = (max(var_19, 60));
    #pragma endscop
}
