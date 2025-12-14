/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_2));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_14 &= (0 > var_3);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = (((1 | 57292) + 0));
                                var_16 = (max(var_16, (var_9 - var_0)));
                            }
                        }
                    }
                    var_17 = (min(var_17, 0));
                }
            }
        }
        arr_15 [i_0] [i_0] = ((~((-3933781821962823403 ? var_7 : var_5))));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_18 [i_5] = (((~1) > -var_3));
        var_18 = (i_5 % 2 == zero) ? ((((((!((min(1, 33082)))))) * ((((max(67, 4227))) << (((arr_16 [i_5] [i_5]) - 3438983510))))))) : ((((((!((min(1, 33082)))))) * ((((max(67, 4227))) << (((((arr_16 [i_5] [i_5]) - 3438983510)) - 1614892131)))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = (!1);
        var_19 = 1;
        arr_24 [i_6] [i_6] = ((2268129030 ? 13959917335052410229 : 1));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 7;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    {
                        arr_38 [i_7] [i_9] [i_7] [i_7] [i_8 - 1] [1] = (((~950376656) && 1));
                        var_20 *= (((-127 - 1) % -var_8));
                    }
                }
            }
        }
        arr_39 [i_7] = (-1 || var_0);
        arr_40 [i_7] = ((1 ? 0 : ((((min(0, 15242421298835867991))) ? (((-101 ? 0 : -879201509))) : 2061842318621761038))));
        var_21 = ((0 ? 0 : -1));
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_13 = 1; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 14;i_15 += 1)
                        {
                            {
                                var_22 = ((~((var_12 ? (min((arr_43 [i_11] [i_12] [i_11]), var_5)) : (((max(0, 0))))))));
                                arr_52 [i_12] [i_12] = -var_9;
                                var_23 = ((var_4 % -var_12) * (min(0, (33793 > 57349))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            {
                                var_24 = ((~(~2136696212848638282)));
                                arr_60 [i_12] [i_12] [i_16] = (min((((((var_1 ? 1 : 1))) ? (~var_2) : 0)), (0 ^ 106)));
                                var_25 = ((~(((((1 ? 1 : 1391565463)) > (~-116))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
