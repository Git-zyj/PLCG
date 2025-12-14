/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (-2147483647 - 1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = 255;
                    arr_11 [i_0] [i_1] [i_2] [i_1] = ((~(arr_3 [i_0] [i_1] [i_1])));
                    arr_12 [i_1] [2] = (arr_0 [i_2]);
                    var_14 = (((-2147483647 - 1) + 242));
                }
            }
        }
    }
    var_15 &= (var_6 % var_9);
    var_16 &= min((((!245) - -9223372036854775807)), var_11);
    var_17 = ((var_12 ? (-2147483647 - 1) : var_5));
    #pragma endscop
}
