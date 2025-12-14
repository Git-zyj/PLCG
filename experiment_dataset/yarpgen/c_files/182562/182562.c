/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, var_6));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = (((((~(arr_1 [i_0])))) ? (min((arr_1 [i_2]), var_4)) : (~var_12)));
                        arr_10 [i_0] [i_0] [i_0] [i_1] = (((arr_0 [1] [1]) ? var_11 : 1));
                        var_18 = (max(var_18, var_8));
                    }
                }
            }
        }
        var_19 ^= -1;
    }
    var_20 = (!9223372036854775807);
    var_21 = var_11;
    #pragma endscop
}
