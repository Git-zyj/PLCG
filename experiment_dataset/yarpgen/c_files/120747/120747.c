/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (!(-9223372036854775807 - 1));
    var_21 = ((1 ? -2 : 1));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_22 = ((~((247 ? 1 : 1))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_23 = (max(var_23, var_8));
                    arr_7 [i_0 + 2] [i_0] [i_0] [4] = arr_2 [i_0 - 1];
                    arr_8 [i_0 + 1] [i_0 - 1] [11] = (((arr_3 [5] [i_1] [i_2]) ? (arr_3 [i_0 + 1] [i_0 - 2] [i_2]) : 9));
                }
            }
        }
    }
    #pragma endscop
}
