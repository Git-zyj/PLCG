/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!16376);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 ^= (max(((1023 ? 4294967295 : 8191)), ((-8199 ? 4294966267 : var_14))));
                    arr_10 [i_0] [11] = 92203890;
                }
            }
        }
    }
    var_22 = 16760832;
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    arr_21 [i_3] [1] [i_5] [10] = (min(((1 ? 1749162116109645842 : 125)), -8191));
                    var_23 = var_15;
                    arr_22 [i_3] = (~1023);
                    var_24 = var_11;
                }
            }
        }
    }
    #pragma endscop
}
