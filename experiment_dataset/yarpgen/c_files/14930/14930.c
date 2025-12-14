/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 *= 7378;
        arr_4 [i_0] = (((~1) ^ var_7));
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_1 + 3] [2] = ((var_4 ? -1588641460772975511 : var_1));
                    var_14 ^= (~2509271937646958162);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                {
                    var_15 += var_1;
                    var_16 &= (!5460127455909937074);
                    arr_16 [i_1] &= var_12;
                    var_17 -= -var_4;
                    var_18 = (var_4 - var_12);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                {
                    var_19 = (max(var_19, (((((max(1, -39))) << (var_11 + 30029))))));
                    var_20 *= (--1588641460772975511);
                }
            }
        }
    }
    var_21 *= var_2;
    var_22 += -262717621;
    #pragma endscop
}
