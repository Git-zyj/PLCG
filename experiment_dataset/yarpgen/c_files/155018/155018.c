/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((min((max(4, 3028253596)), (~3028253596))) & var_12);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_17 = ((((((arr_2 [i_1] [i_1 - 1] [i_0 - 1]) && ((((arr_3 [i_1] [i_1] [i_0]) ? var_2 : var_6)))))) & ((~(arr_2 [8] [i_1 + 2] [i_0 - 3])))));
                var_18 = min(((((arr_3 [6] [i_0 - 1] [i_0 - 3]) == ((max((arr_2 [7] [i_1] [i_1]), var_8)))))), var_11);
            }
        }
    }
    var_19 = (((3028253596 ? 85 : (85 * -85))) & ((((~var_15) == -var_7))));
    var_20 = var_14;
    #pragma endscop
}
