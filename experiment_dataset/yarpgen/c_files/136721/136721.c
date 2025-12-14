/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= 252;
    var_18 = (min(var_18, -985591659));
    var_19 = 889315594;
    var_20 = 889315590;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = 32105;

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_21 = 1;
            arr_8 [i_0] = -889315610;
        }
        var_22 = (min(var_22, -64));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_23 = (max(var_23, 2047));
        arr_11 [i_2] [i_2] = 11553955167209052511;
    }
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        arr_15 [i_3] = 4294965249;
        arr_16 [i_3] = 889315594;

        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_24 *= 51;
                            arr_27 [i_3 - 3] [i_3] [i_5] [i_6] [3] [i_3 - 3] = 1;
                        }
                    }
                }
            }
            var_25 = 241;
            var_26 = 1;
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_27 = (min(var_27, 0));
            var_28 -= 0;
        }
        for (int i_9 = 2; i_9 < 19;i_9 += 1)
        {
            arr_34 [i_3] [i_3] = -889315591;
            arr_35 [i_3] [12] &= -64;
            arr_36 [i_9] [i_3] [i_9] = 2113046735;
            /* LoopNest 3 */
            for (int i_10 = 3; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_46 [i_12] [i_12] [i_3] [i_3] [i_3] [i_3] [i_3] = 105;
                            var_29 -= 32767;
                            arr_47 [i_3] [i_11] [i_10] [i_9] [i_3 - 3] [i_3] [i_3] = -468468429;
                            var_30 ^= 248;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
