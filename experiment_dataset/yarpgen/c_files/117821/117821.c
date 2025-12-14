/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_8 ? -9223372036854775807 : 1))) ? ((var_9 | (~26263))) : var_0));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0] = (((((1024 ? var_7 : var_3))) ? -1025 : 39274));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_14 *= (((~var_8) ? -var_8 : (((var_1 ? var_7 : var_11)))));
                        var_15 = ((-((var_6 ^ (arr_7 [i_0 - 1])))));
                        var_16 = (((arr_1 [i_0 - 1]) ? var_9 : var_3));
                        var_17 = 2147483647;
                    }
                }
            }
        }
    }
    #pragma endscop
}
