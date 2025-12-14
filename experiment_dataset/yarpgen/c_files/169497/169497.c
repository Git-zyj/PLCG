/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((min((((var_9 ? var_4 : var_3))), (~var_12))) * var_3);
                    arr_9 [i_0] [i_0] = (~(((var_8 || ((min(var_10, var_2)))))));
                }
            }
        }
    }
    var_18 = (((min(var_7, (min(var_8, var_10)))) - (((min((var_17 != var_9), var_6))))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 8;i_7 += 1)
                        {
                            {
                                var_19 = ((-var_3 ? (!var_1) : (var_4 & var_14)));
                                arr_24 [i_3] = (!var_3);
                                arr_25 [9] [8] [i_3] [i_6] = (((!var_12) & ((var_3 ? var_16 : var_12))));
                                var_20 = (min(var_20, -var_3));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_32 [i_5] [i_4] [i_3] [i_8] [2] = (var_10 > 1);
                            var_21 = ((~var_4) > (!var_10));
                        }
                        for (int i_10 = 3; i_10 < 9;i_10 += 1) /* same iter space */
                        {
                            var_22 = ((var_17 ? var_16 : var_10));
                            var_23 = (18656 ? 116 : ((1 ? 1 : 0)));
                        }
                        for (int i_11 = 3; i_11 < 9;i_11 += 1) /* same iter space */
                        {
                            arr_37 [i_3] [i_3] [i_3] [i_8] = ((((0 ? 1 : 218))) && (((var_17 ? -1 : -17))));
                            arr_38 [i_3] [i_8] [i_3] = var_10;
                            arr_39 [i_11] [i_3] [i_5] [i_3] [i_3] = (((var_6 || var_6) > (~var_2)));
                        }
                        var_24 = ((var_0 * (1 == 5049302108383739386)));
                        arr_40 [i_3] [9] [i_4] [i_3] = (((~var_10) ? var_0 : ((var_15 << (var_6 - 45130)))));
                    }
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        var_25 = (var_12 || var_8);
                        arr_43 [i_3] [i_4] = (((var_13 ^ var_7) == (var_7 == var_1)));
                    }
                }
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            {
                                var_26 = (((~-5379163507020754662) < ((min((var_11 * var_7), 10503)))));
                                arr_52 [i_3] [i_14] [i_13] [i_4] [i_3] [i_3] = ((-842601145 ^ (213 & 8)));
                                var_27 = (((((((var_11 | var_17) <= ((var_14 ? var_4 : var_8)))))) <= (((min(-5379163507020754652, var_0)) & ((min(-5257, -705867432)))))));
                            }
                        }
                    }
                    var_28 = ((((((min(var_11, var_9)) ^ (((var_7 ? var_3 : var_5)))))) | var_10));
                }
                var_29 = var_6;
                var_30 |= ((+(((var_0 - var_0) ? (var_14 - var_14) : (min(var_15, var_8))))));
            }
        }
    }
    #pragma endscop
}
