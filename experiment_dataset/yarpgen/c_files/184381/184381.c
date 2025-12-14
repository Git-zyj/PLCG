/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_0 * 5472267884267363940);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= (~var_13);
        arr_4 [i_0 - 2] = ((~(arr_1 [i_0 - 2])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_12 [14] = (((arr_10 [i_2 + 1] [i_2] [i_2]) | (arr_10 [i_2 + 1] [14] [i_2 + 1])));
                    var_21 = (((arr_11 [i_0 + 2] [i_1 - 1]) < (arr_0 [i_0 - 3])));
                }
            }
        }
        arr_13 [20] = (((arr_2 [i_0 + 3]) ? var_1 : (arr_2 [i_0 - 1])));
    }
    var_22 = ((((min(var_11, var_11))) ? var_4 : ((max(((var_16 ? 86 : var_17)), var_6)))));
    var_23 = (var_14 || var_9);
    #pragma endscop
}
