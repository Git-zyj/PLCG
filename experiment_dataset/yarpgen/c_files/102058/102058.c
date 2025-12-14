/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 &= ((((var_11 % (arr_8 [i_2]))) >= var_11));
                    var_17 = var_1;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_18 |= (arr_8 [i_0]);
                        var_19 = (((var_6 ? var_8 : var_7)) + (var_7 / 9));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_20 = (!var_7);
                    var_21 = (var_4 && var_10);
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {
        var_22 = (min(var_4, (var_11 % var_15)));
        var_23 = var_15;
    }
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        var_24 = ((((min(-1, var_1)) ^ -1371062325)));
        var_25 = (min(var_25, var_14));
        var_26 &= ((0 ^ ((var_0 ? (arr_3 [i_7 + 1] [i_7 - 1]) : (arr_3 [i_7 - 1] [i_7 + 1])))));
        var_27 = (max(var_12, var_3));
    }
    var_28 = var_15;
    var_29 = ((((var_7 & var_4) ? ((-1371062325 ? 64 : 3886085575)) : var_9)));
    #pragma endscop
}
