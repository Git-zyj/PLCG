/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = ((var_11 + (max(var_4, var_8))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] |= var_4;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [i_2] [i_1] [i_1] = var_10;
                        arr_12 [i_1] [i_2] [i_1] [i_1] = 17378927128882999652;
                    }
                }
            }
            arr_13 [i_0] [i_1] [8] = (arr_2 [i_0 - 2]);
        }
        arr_14 [i_0] = (max(5904068566247014310, 18446744073709551615));
        arr_15 [i_0] [i_0] = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
