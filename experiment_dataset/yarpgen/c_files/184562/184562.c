/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = var_0;
        var_20 = (!var_0);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_2] [i_3] [i_3] = (((!var_16) ? 1 : -18354));
                    var_21 = var_2;
                    var_22 ^= ((var_5 > ((((var_18 + 2147483647) << (18347 - 18347))))));
                    arr_14 [i_1] [i_2] [i_3] = 18348;
                    arr_15 [i_3] [i_2] [i_1] = (1292239817 & var_12);
                }
            }
        }
        arr_16 [i_1] [i_1] = ((3002727479 ? 3002727486 : 1));
    }
    var_23 = 402653184;
    #pragma endscop
}
