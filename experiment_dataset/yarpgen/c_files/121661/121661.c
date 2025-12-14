/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (((arr_5 [i_0] [i_0]) ? ((var_11 * (((arr_1 [i_0] [i_1]) / var_11)))) : (((~(min((arr_3 [i_0] [i_0]), (arr_0 [i_0]))))))));
                arr_7 [i_1 + 3] [i_1 + 3] [i_0] = var_6;
            }
        }
    }

    for (int i_2 = 2; i_2 < 6;i_2 += 1)
    {
        arr_11 [7] = (min((arr_0 [i_2]), (arr_6 [i_2] [i_2] [i_2])));
        var_21 = ((~(arr_5 [3] [i_2])));
        var_22 = (min(36600, ((min(var_7, (arr_5 [i_2] [i_2]))))));
    }
    #pragma endscop
}
