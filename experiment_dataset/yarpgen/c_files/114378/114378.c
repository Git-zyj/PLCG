/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -11291;

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_21 = -58;
        var_22 ^= 1198521111;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] = (!65535);
        var_23 = (min(var_23, (!-59)));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_24 *= -3385150099;
                        var_25 = (~2916637770);
                        var_26 = (~32530);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                arr_20 [i_6] &= 1;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_26 [i_5] [i_5] [i_5] [i_5] = (~-47682);
                            var_27 += -58;
                        }
                    }
                }
            }
        }
    }
    var_28 = (min(var_28, 255));
    #pragma endscop
}
