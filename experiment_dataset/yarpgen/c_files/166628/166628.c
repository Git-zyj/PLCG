/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((39 ? (min(18446744073709551613, (~var_10))) : 38));
    var_17 = var_15;
    var_18 = (((((var_13 ? ((max(var_0, var_4))) : (~var_1)))) ? var_11 : 11340));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = 18446744073709551606;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] = ((4 ? (10129918563832338020 / -122) : 3997039137));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (11325 ? 8316825509877213587 : 18446744073709551615);
                    var_19 = (arr_0 [i_0]);
                    var_20 = (arr_4 [i_2] [i_1] [i_0]);
                }
            }
        }
        arr_10 [9] = ((var_0 >> (var_15 - 19755)));
    }
    #pragma endscop
}
