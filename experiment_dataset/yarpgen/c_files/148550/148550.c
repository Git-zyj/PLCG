/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = 252;
        arr_3 [i_0] |= (((((min(820924510, var_3)))) * (min(18, var_3))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 -= 247;
        var_16 ^= (~-39);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_1] [14] [i_2] = var_1;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_17 ^= ((1 ? var_3 : 1));
                            arr_19 [i_4] [12] [2] [2] [i_5] = var_8;
                            arr_20 [i_1] [i_1] [i_2] [i_4] [i_4] [1] = 15360;
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_18 ^= (22 && var_6);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_19 = (5709304446061658005 && 38);
                            var_20 = 36;
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_21 = ((149 ? 195 : -38));
                            var_22 = (!var_11);
                        }
                        var_23 -= ((var_11 ? var_9 : 1310339014));
                        var_24 = 3;
                    }
                }
            }
        }
        var_25 *= (!38);
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        var_26 = 247;
        arr_38 [i_11] = 37;
        arr_39 [i_11] = (min(0, ((var_9 ? var_5 : 36))));
    }
    var_27 ^= var_9;
    #pragma endscop
}
