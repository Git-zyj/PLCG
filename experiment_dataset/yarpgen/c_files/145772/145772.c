/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 5;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_14 = 83031611;
        arr_4 [i_0] [i_0] = -119132068;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] = -1;
        arr_9 [i_1] = 238139914;
        arr_10 [i_1] = 4056827382;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_15 *= 214;
        var_16 = 4056827381;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        arr_20 [i_2] [0] [i_3] [i_3] [i_3] [i_5] = 1798485871;
                        arr_21 [i_2] [i_2] [i_4 + 2] [i_5] &= 2821954996;
                        var_17 = 4056827385;

                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_2] [i_3] [i_3] [i_4] [i_3] [i_5] [i_3] = 238139911;
                            var_18 = 63;
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_19 = 4056827382;
                            var_20 *= 153;
                            arr_27 [i_3] [i_5] [i_4] [i_3] [i_3] = 12;
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        var_21 = 357253073;
                        var_22 ^= 3079107460;
                        arr_35 [i_2] [i_9] [i_9] [i_10] [i_9] [i_2] = 238;
                        var_23 = (max(var_23, 238139911));
                        var_24 = (max(var_24, 245));
                    }
                }
            }
        }
        arr_36 [i_2] = 0;
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_25 = (max(var_25, 0));
        var_26 -= 724998571;
        arr_40 [i_11] = 74;
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    {
                        arr_50 [i_11] [i_11] [i_13] [i_11] = 858863931;
                        arr_51 [i_14] [i_13] [i_13] [i_12] [i_11] = 14;
                        arr_52 [0] [i_11] [i_13] |= 958929670;
                        var_27 = (-2147483647 - 1);
                        var_28 ^= 48;
                    }
                }
            }
        }
        arr_53 [i_11] = 4056827382;
    }
    var_29 += var_7;
    #pragma endscop
}
