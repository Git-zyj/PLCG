/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_13;
    var_19 = (max(32767, (~var_6)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_20 = (((arr_9 [i_0 + 1] [i_3 - 1] [i_3 - 1]) && 197));
                        arr_14 [i_0 - 1] [i_0 - 1] = (32766 > var_7);
                        var_21 |= (var_15 | 4100095859);
                    }

                    for (int i_4 = 3; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_0 + 1] [i_0 + 1] = (max((((!(~var_10)))), 32769));
                        var_22 += ((0 ? 16003552211409059577 : 12366));
                        var_23 = 36;
                        arr_18 [19] [i_1] [i_2] [i_4 - 1] = (1 ? ((2443191862300492039 >> (32769 - 32713))) : 20717);
                    }
                    for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_0 - 2] [i_0] [i_0 - 2] [i_1] [i_1] [i_5 - 3] [3] = -255;
                            var_24 ^= 2047;
                            arr_26 [8] [i_0] = (var_6 ? ((var_13 ? 32765 : (arr_8 [i_0] [i_0 + 1]))) : 4029647312976697837);
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_1] [2] [20] [i_7] = ((902238170260762346 ? ((var_2 ? 175254813 : (arr_8 [i_5 - 3] [i_0 - 1]))) : (max((arr_0 [i_0 + 1] [i_5 - 2]), (arr_8 [9] [9])))));
                            arr_30 [i_2] [i_1] [i_1] [i_5] = (arr_21 [9] [i_1] [i_1] [i_5] [6] [i_1]);
                            var_25 = ((max((!var_9), (arr_16 [3]))));
                            arr_31 [i_7] [i_5] [i_1] = (~-var_5);
                        }
                        var_26 ^= (((arr_16 [i_0 - 1]) < (max((((arr_21 [i_1] [i_1] [i_1] [i_1] [4] [i_1]) ? 3085695999437747126 : 1932323811)), var_9))));
                        arr_32 [i_5 - 2] [i_2] [i_0] [i_1] [i_0] [i_0] = (max(var_8, (max(var_1, (!444093264)))));
                        arr_33 [13] = ((~(((arr_13 [i_1]) % ((162403388 ? var_11 : 536870912))))));
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_27 = 2233785415175766016;
                        var_28 -= -3809255902;
                        var_29 = (arr_34 [20] [i_1] [i_1] [11]);
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_38 [i_0 - 3] [14] [13] [2] = 2764154318;

                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_30 = (!var_15);
                            arr_41 [17] [1] [i_2] = (((arr_39 [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 3] [i_1]) ? var_17 : var_5));
                        }
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            var_31 = (max(var_31, (arr_0 [i_0 + 1] [i_9])));
                            var_32 |= (arr_19 [i_0 - 3] [i_0 - 3] [i_0 - 2] [15]);
                            var_33 = (max(var_33, var_16));
                        }
                        for (int i_12 = 0; i_12 < 0;i_12 += 1)
                        {
                            var_34 *= ((!(((-(arr_28 [i_0] [11] [15] [i_1] [16] [i_9] [i_12 + 1]))))));
                            arr_48 [i_2] [i_2] [i_2] [i_2] [i_2] = (!-2362643483);
                        }
                        var_35 -= (arr_5 [i_0 + 1]);
                        var_36 = ((1 <= (arr_40 [i_0 - 1] [i_0 - 1] [i_2] [i_2] [10])));
                        arr_49 [i_0] [i_1] [5] = ((2233785415175766016 ? 2362643484 : (arr_16 [i_0 - 1])));
                    }
                    /* vectorizable */
                    for (int i_13 = 4; i_13 < 20;i_13 += 1)
                    {
                        arr_52 [18] = var_9;
                        arr_53 [i_0] [i_1] [i_1] [i_1] = var_0;
                    }
                    for (int i_14 = 1; i_14 < 20;i_14 += 1)
                    {
                        arr_57 [i_1] [i_14 + 1] = ((max(2443191862300492038, 2893408116)));
                        arr_58 [i_1] [i_2] = var_5;
                        arr_59 [i_0 - 1] [i_0 - 1] [i_2] [i_14 - 1] [i_14 + 1] = (arr_46 [i_0 + 1] [1]);
                    }
                    var_37 = (567926831 > 1432495731);

                    for (int i_15 = 3; i_15 < 19;i_15 += 1)
                    {
                        var_38 = var_5;
                        var_39 = (max(var_39, ((max(((-(arr_54 [i_0 + 1]))), (arr_54 [i_0 - 2]))))));
                        arr_62 [i_15] [i_15] = 0;
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        arr_67 [i_0] [i_2] = var_10;
                        var_40 = (~3754869895);
                        arr_68 [i_0 - 2] = (((arr_8 [i_1] [i_0]) ? 2764154320 : 32769));
                        var_41 = (~-48);
                        arr_69 [19] = ((~(arr_12 [1] [1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
