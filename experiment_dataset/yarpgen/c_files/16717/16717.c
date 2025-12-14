/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (min(var_15, ((15 ? -17585 : 0))));
        var_16 |= (!var_1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = var_9;
                    var_18 ^= (~1735732328605669312);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 8;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_19 |= ((8482874461394523702 && (arr_12 [i_5 - 2] [i_5] [i_5])));
                        var_20 -= var_1;
                        var_21 &= var_4;
                    }
                }
            }
        }
        var_22 = arr_12 [i_3] [i_3] [i_3];
        var_23 = ((1 >> (-8852 + 8867)));
    }
    var_24 -= (((12509827470477210304 - 3509721697674805651) ? var_10 : var_3));
    var_25 *= -var_9;
    #pragma endscop
}
