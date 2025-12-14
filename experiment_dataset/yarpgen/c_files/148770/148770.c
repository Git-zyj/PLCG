/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [16] [5] = var_4;
        var_16 += 128;
        arr_4 [i_0] [i_0] = ((((var_10 == (!var_6))) ? ((((((1 ? 128 : 122))) ? ((var_13 ? 106 : var_5)) : 52504))) : ((var_1 / ((0 ? 18446744073709551615 : 3808229907))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 += (~-52504);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                {
                    var_18 ^= (((((127 ? 1854871215 : 55))) ? var_1 : var_3));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [i_1] [14] [1] [15] [0] [i_5] = var_12;
                                var_19 = ((-((((var_4 ? var_2 : var_0)) / (((52491 ? 100 : var_7)))))));
                            }
                        }
                    }
                }
            }
        }
        var_20 = (min(var_20, ((-((((65535 ? var_2 : 52492)) / (((var_3 ? 52509 : var_14)))))))));
        arr_20 [16] = (+(((137 < 56422) ? ((var_4 ? 48914 : 750509038)) : 132)));
    }

    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_21 -= ((-((-var_12 ? ((var_10 ? -8192 : -3720302177376007425)) : (~var_8)))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_22 = (min(var_22, var_0));
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 0;i_10 += 1)
                        {
                            {
                                var_23 = (((~1) ? 6 : 33554431));
                                var_24 ^= ((0 ? 7993459411698192582 : -1356960437626009614));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 4; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                {
                    arr_44 [i_11] [3] [i_11] [i_12] = ((3625447902395717239 ? 126 : -1356960437626009612));
                    var_25 = (((~((var_11 ? var_9 : 1356960437626009635)))));
                }
            }
        }
        arr_45 [0] |= (!-var_8);
        arr_46 [i_11] = var_3;
    }
    #pragma endscop
}
