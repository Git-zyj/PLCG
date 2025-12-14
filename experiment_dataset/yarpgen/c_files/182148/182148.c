/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = 4294967292;
        arr_4 [i_0] = 32;
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_7 [10] &= 245;
        var_12 *= 32745;
        var_13 -= 12;
        arr_8 [i_1] = 1;
    }
    for (int i_2 = 1; i_2 < 24;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    {
                        var_14 |= -1;
                        var_15 = (min(var_15, 120));
                    }
                }
            }
            arr_20 [i_3] [i_3] = 127;
        }
        var_16 = 16348164;
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_26 [i_6] [i_7] = 59355;
            var_17 ^= 65505;
        }
        var_18 = 15356184752130062550;
    }
    #pragma endscop
}
