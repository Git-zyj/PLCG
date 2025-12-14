/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 103;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (~-123);
        var_20 = min((~-14976), ((~(~-29683))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = -406699504040872905;
                    var_21 = (max(var_21, ((((((min(-1023073434, 123))) ? (((min((-32767 - 1), 24)))) : 4294967273))))));
                    arr_9 [i_0 - 1] [i_2 - 2] = -var_11;
                }
            }
        }
        var_22 = (min(3217990789, 9380));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_4] [i_3] [i_3] = (115 >= 3170793794);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_27 [i_7] [i_6] [i_5] [i_4] [i_7] |= -9809480286523690818;
                                var_23 = (arr_22 [i_3] [i_3] [i_4 - 2] [i_4 - 2]);
                                var_24 = (min(var_24, (arr_26 [i_3] [i_7] [i_5] [i_3] [i_7] [i_3])));
                                arr_28 [i_7] [i_4] [i_5] [i_7] [i_7] [i_6] [i_3] |= ((((var_7 ? var_12 : -4)) < var_17));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_25 = (min(var_25, (arr_32 [i_3] [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_8])));
                                var_26 += -115;
                                var_27 = (max(var_27, 25));
                                arr_35 [i_3] [i_3] [i_3] [i_3] [i_8] [i_3] [i_9 + 1] = (((arr_18 [i_3]) | var_1));
                            }
                        }
                    }
                }
            }
        }
        arr_36 [16] |= ((0 ? (arr_34 [i_3] [i_3] [i_3] [i_3] [i_3]) : (-2147483647 - 1)));
        var_28 = (!var_6);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 20;i_11 += 1)
            {
                {
                    var_29 = 1;

                    for (int i_12 = 3; i_12 < 22;i_12 += 1)
                    {
                        var_30 = (min(var_30, ((((arr_18 [i_12]) ? (~1) : 1193895566)))));
                        var_31 = var_0;
                        var_32 ^= 251;
                        var_33 = 150;
                        var_34 = (max(var_34, (((-5 ? -8467332225574137467 : -3479391615983536806)))));
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        var_35 = (((~13570619803672871039) ? (arr_29 [i_11 - 2] [i_11] [i_3] [i_3] [i_11] [i_11 - 1]) : (arr_39 [i_3] [i_3])));
                        arr_49 [i_13] [i_10] [i_3] = (((arr_45 [i_11 - 1] [i_11 + 3]) ? var_2 : 123));
                    }
                    arr_50 [i_3] [i_3] = 37689;
                    arr_51 [i_3] [i_3] = ((0 ? 208 : 4154155947));
                }
            }
        }
    }
    #pragma endscop
}
