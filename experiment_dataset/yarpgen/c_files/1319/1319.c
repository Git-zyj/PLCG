/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((((((3250063230 | 7883318201610279714) * (((min(var_11, var_10))))))) ? (((-2813914495314428521 ? -953409295 : 2105957372))) : var_2));
    var_13 &= (min(30339, ((-((1 ? 7883318201610279698 : 576460752303423487))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (((((((arr_1 [i_1]) ? (arr_5 [i_2]) : 159))) ? (((var_4 ? 953409314 : var_10))) : ((~(arr_1 [i_0]))))) * var_8);
                    arr_6 [i_2] [6] [i_1] [i_2] = (arr_4 [i_0] [i_1 - 4] [i_2]);
                }
            }
        }
    }
    var_15 = ((var_11 ? var_10 : var_2));
    #pragma endscop
}
