/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_1;
    var_12 = ((-(min((32767 + -1901217975328571625), 9223372036854775802))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (((((!((max(var_3, var_8)))))) << (((((8 ? var_2 : var_1)) <= var_9)))));
                arr_6 [i_1 - 2] = min((min((min(-5572, 9223372036854775807)), ((-1901217975328571625 ? -2527935009585379702 : -5530765033254144776)))), ((max(var_3, var_0))));
                var_14 = var_8;
                arr_7 [i_1] [i_0 - 1] [i_0] = ((!(((-(min(var_9, var_3)))))));
                arr_8 [i_0] [i_1 - 2] [i_0] = (min(var_0, (max(-5530765033254144776, 32767))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_15 = ((!((max((((var_4 ? -653982583 : 17))), 3508954578)))));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_16 |= min((min(215, (min(var_5, 1901217975328571625)))), (((-1901217975328571637 > (((5530765033254144776 ? 1425245329 : 1425245345)))))));
                    var_17 = var_5;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {

                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            arr_31 [i_7] [i_8 - 1] [i_7] [i_6] [i_5] [i_5] [i_7] = ((+(((var_10 <= var_1) << (var_0 <= var_1)))));
                            arr_32 [i_7] [i_7] [i_6] [i_5] [i_7] = (438482577431398477 ? var_3 : (max(var_1, var_7)));
                            arr_33 [i_2] [i_5] [i_7] [i_7] [i_8 - 1] = (min(((min(var_1, 62323))), ((var_7 ? -1901217975328571637 : (max(var_8, var_4))))));
                            var_18 = (((-(var_8 - 20))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_19 = (min(var_19, ((((var_8 ? var_7 : var_1))))));
                            arr_37 [i_7] [i_7] [i_6] [i_5] [i_7] = var_6;
                        }
                        arr_38 [i_7] [i_7] [i_7] [i_2] = ((((((max(0, var_9))) ? var_2 : var_4)) & (var_5 | 27511)));
                        var_20 = (min(((min(-438482577431398473, var_10))), (((((max(1, 27506))) && 1740727628)))));
                        var_21 = (min(-438482577431398487, (max((~-1901217975328571608), 102))));
                    }
                }
            }
        }
        var_22 = (min(-5530765033254144784, 255));

        /* vectorizable */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_23 = ((-var_0 ? var_5 : -38025));
            var_24 = ((!(~var_9)));
        }
    }
    for (int i_11 = 2; i_11 < 12;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    {
                        arr_53 [i_11 + 2] [i_11] [i_13] = ((~((~(max(-653982583, 2147483647))))));
                        var_25 = (max((((-(min(var_1, var_5))))), var_4));
                        var_26 *= (max((max(var_10, ((max(653982554, 19))))), (((var_1 ? var_2 : 48)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                {
                    var_27 = (((!(!-37))));

                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        arr_61 [i_11] [i_11] [i_16] [i_17] = ((var_4 - (var_3 && 653982533)));
                        arr_62 [i_17] [i_11] [i_16] [i_15] [i_11] [i_11 + 2] = ((~((var_6 ? var_7 : var_10))));
                    }
                    var_28 = (min((((!((min(38024, -63)))))), (min((var_8 >> var_0), (min(5785730609345167309, -75))))));
                }
            }
        }
        arr_63 [i_11] = (max((max(var_8, ((max(1627280356, 38034))))), ((min(var_2, (!5785730609345167325))))));
    }
    #pragma endscop
}
