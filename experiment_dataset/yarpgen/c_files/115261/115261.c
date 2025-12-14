/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (max(var_8, ((((var_2 ? var_8 : var_6)) ^ ((var_10 ? var_8 : var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (1453359082983838824 - 16993384990725712792);
                arr_6 [i_1] [i_0 - 1] &= ((1 ? 127 : 142));
                var_13 = (max(var_13, (arr_0 [i_1])));
            }
        }
    }
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            {
                var_15 = (arr_4 [i_3] [i_3] [i_3]);
                arr_13 [i_2] [i_2] = ((~(!2049011981)));
            }
        }
    }
    #pragma endscop
}
