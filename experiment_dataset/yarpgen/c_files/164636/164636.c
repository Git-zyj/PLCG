/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 -= 32764;
    var_13 = (min(var_13, (((((max(var_4, var_1)) ^ ((var_0 ? var_6 : var_8))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((!var_3) ? var_10 : (arr_0 [i_0 + 2])));
        var_14 *= ((8366888132267578456 ? 87464508 : 1));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_15 = -4012421109;
                        arr_12 [i_3] [i_1] [i_1] [i_1] [9] = (var_3 ? ((var_6 ? var_7 : var_10)) : (arr_11 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] [i_1]));
                        var_16 = (((arr_8 [i_0] [i_0 + 2] [i_2] [i_3]) < (arr_11 [i_0] [i_1] [i_2] [i_1] [i_1] [i_1])));
                        arr_13 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1] = ((((((arr_9 [17] [17] [i_3] [i_1]) % var_4))) ^ (~var_9)));
                        arr_14 [i_1] = (arr_5 [4] [i_1] [i_2]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
