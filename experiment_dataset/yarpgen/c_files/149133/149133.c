/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((var_5 ? ((var_5 ? var_10 : var_2)) : ((264750534 ? var_18 : 0))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_20 = 64;

        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_2 - 1] = var_2;
            var_21 = (arr_5 [i_2 - 1] [i_2 + 2]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_2 - 1] [i_4] [i_4] [i_4] = ((18374686479671623680 ? (arr_6 [i_4]) : var_5));
                        var_22 = (min(var_22, 569));
                    }
                }
            }
            var_23 = (min(var_23, (arr_12 [i_1] [i_1] [i_2 + 1])));
        }
        var_24 = var_16;
    }
    var_25 = (max(var_25, var_15));
    var_26 = var_8;
    var_27 &= (-((var_16 ? var_18 : ((var_15 ? 64 : 1)))));
    #pragma endscop
}
