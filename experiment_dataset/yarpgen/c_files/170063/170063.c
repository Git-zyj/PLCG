/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((+((max((arr_2 [i_0]), (arr_2 [i_0]))))));

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_16 = var_8;
                    var_17 = (min(var_17, var_13));
                    arr_8 [i_0] [i_2] [i_2] [i_0] = (~var_10);
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((max((((arr_15 [i_0] [14] [i_4] [i_5 - 3]) ? var_4 : (arr_15 [i_5 + 3] [i_3] [i_1] [i_0]))), (-187311798 % 3163819969))))));
                                arr_16 [i_3] [i_0] = (((((((max(var_7, var_9))) ? (max(111178139, -504456144842336449)) : (128 % var_0)))) ? (((((arr_4 [i_4 - 2] [i_5 + 2] [i_5 + 3]) > var_12)))) : ((111178139 ? ((-504456144842336455 ? (arr_14 [i_4 + 2] [i_1] [11] [i_4] [3]) : 0)) : (((max(var_5, (arr_10 [i_0] [i_1] [i_3] [i_5 + 3])))))))));
                            }
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 16;i_7 += 1)
                    {
                        var_19 = (((86 ? -187311798 : (arr_11 [i_7 + 1] [15] [10] [i_0]))));

                        for (int i_8 = 3; i_8 < 15;i_8 += 1)
                        {
                            var_20 = (((2011692400 - 3236633162) ? ((2011692416 + (-9223372036854775807 - 1))) : -14));
                            var_21 = var_9;
                        }
                        var_22 = ((!(2147483647 & 12)));
                    }
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        var_23 = (max((((arr_20 [12] [i_9] [i_9 + 1] [i_9 - 1]) ? (arr_22 [i_9 - 2] [i_9] [i_9 - 2] [i_9 - 2] [i_9 - 2]) : var_9)), (max(2509273881753777967, -20))));

                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            arr_31 [i_10] [i_1] [i_6] [3] = (((((arr_21 [3] [i_10 + 1] [i_10] [i_10] [i_10] [i_10 + 1] [i_0]) + 9223372036854775807)) >> (((arr_21 [i_10] [i_10] [i_10] [i_10 - 2] [i_10] [i_10 - 2] [4]) + 6301656081314865082))));
                            var_24 = ((arr_20 [i_9 - 2] [12] [i_6] [i_6]) ? (arr_20 [i_9 - 2] [i_9] [i_6] [i_6]) : var_15);
                        }
                        for (int i_11 = 2; i_11 < 16;i_11 += 1) /* same iter space */
                        {
                            var_25 += (arr_3 [i_0] [i_0]);
                            var_26 = (min(var_26, (((-var_10 ? ((var_5 ? 4183789156 : ((((arr_33 [i_9] [i_1] [11] [i_0] [i_9]) ? 238 : (-32767 - 1)))))) : var_13)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_27 = (max(var_27, ((((max(var_12, (arr_26 [11] [i_1] [i_6] [i_6] [i_12] [i_12])))) ? -5853121457736752457 : ((-187311795 ? -6239198880029948050 : 1913022156160247503))))));
                                var_28 = ((~((max(25, 111178139)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (((((var_7 ^ var_8) && (((var_5 ? var_11 : var_13))))) ? (((~4428810408888790414) ? (max(2147483647, var_13)) : (var_4 ^ var_8))) : var_13));
    /* LoopNest 2 */
    for (int i_14 = 2; i_14 < 21;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {
            {
                arr_46 [i_14 + 1] [i_14] [i_15] = (arr_42 [i_14]);
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 19;i_17 += 1)
                    {
                        {
                            var_30 |= 1757034231;
                            var_31 = max(((var_14 ? ((max(-2147483647, 187311798))) : ((1641637298 ? 4294967283 : -1254194180580945682)))), (((var_3 ? var_11 : var_9))));
                        }
                    }
                }
            }
        }
    }
    var_32 = var_4;
    #pragma endscop
}
