/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((-(25 % var_3))));
        var_18 = -var_7;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_19 = var_4;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_20 = 222;
                                var_21 = var_9;
                                var_22 = 9223372036854775807;
                                arr_15 [i_2] [i_2] [i_3] [i_1] [i_5] [i_3] = (min((-32767 - 1), (max(((124 ? 4293918720 : 18446744073709551615)), 1))));
                            }
                        }
                    }
                    arr_16 [i_1] = ((var_8 ? var_14 : var_2));
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 12;i_6 += 1)
    {
        var_23 = ((!(((var_15 ? (((var_0 ? var_2 : var_8))) : 17773197674759553876)))));
        var_24 *= var_16;
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        arr_24 [i_7] = ((!(6798358521601658236 / -2305843009213693952)));
        var_25 = ((((((var_5 ? 18446744073709551600 : var_6)))) && (((var_8 ? 44 : ((58 ? var_0 : var_1)))))));
        var_26 += var_14;
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    arr_33 [i_10] [i_9] [i_9] [i_8] = ((((((var_9 ? var_2 : var_0)))) ? (1 ^ -24306) : -var_0));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                arr_38 [i_9] [i_9] [i_12] [i_8] [i_12] = 1;
                                var_27 = (min(var_27, ((((var_3 <= var_3) ? ((673546398949997746 ? 1 : var_8)) : var_6)))));
                                arr_39 [i_11] [i_9] [i_10] [i_9] [i_12] [i_9] = (!var_9);
                                arr_40 [i_11] [i_9] [i_8] = (((((var_10 ? 562949416550400 : 1))) ? (var_13 / var_3) : 24306));
                            }
                        }
                    }
                    var_28 = (min(var_28, (((~((min(1, -236315638))))))));
                }
            }
        }
    }
    #pragma endscop
}
