/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!2147483647);
    var_18 = (((~2147483647) ^ 1));
    var_19 ^= -1;
    var_20 = (max(var_3, 1));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        var_21 = (!1);
                        var_22 = (max(var_22, var_15));
                    }
                }
            }
        }
        arr_11 [i_0] = 65024;
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_23 = (((((max(1, 0)))) ? (max(((1 ? 1 : var_9)), 1)) : 32767));
        arr_14 [i_4] [i_4] = (1 ^ 3);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    {
                        var_24 = var_7;
                        arr_24 [i_7] [i_7] [i_6] [i_6] [i_5] [i_4] = 8192;
                        arr_25 [i_4] [i_4] [i_4] [i_6] [i_7 - 1] = (max(8180, 1));
                    }
                }
            }
        }
        var_25 = var_0;
        arr_26 [i_4] = var_1;
    }
    #pragma endscop
}
