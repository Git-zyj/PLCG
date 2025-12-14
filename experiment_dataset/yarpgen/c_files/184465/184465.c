/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 += (arr_6 [i_1] [i_2]);

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        var_12 -= 5284304751685993784;
                        var_13 = (arr_3 [i_2] [i_2 - 1] [i_2]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_4] = var_3;
                        var_14 = ((5284304751685993783 != (arr_7 [i_1 + 1] [i_0] [i_0 + 3])));
                        var_15 = (arr_3 [i_0] [i_1] [5]);
                        arr_14 [i_0] [i_1 - 1] [i_2] [i_4] [i_4] |= ((~(arr_10 [i_0] [i_1] [i_1 + 1] [i_4])));
                    }
                    arr_15 [i_1] = ((((max((arr_10 [i_1 - 1] [i_1 - 1] [i_2] [i_2]), var_0))) ? (((arr_11 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1]) / (((arr_12 [i_2] [i_1 + 1] [i_1] [i_0 - 2] [i_0 - 1]) ? (arr_5 [1] [i_1 + 1] [i_1 + 1] [i_0 + 2]) : var_3)))) : var_5));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = ((!((((arr_17 [8]) ? 5284304751685993768 : 159)))));

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_16 = (arr_19 [i_6]);

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_17 = (arr_2 [i_5]);
                var_18 = (arr_4 [i_5] [i_5] [i_5]);
            }
            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {
                var_19 ^= ((-(arr_7 [i_8 - 1] [i_8 + 1] [i_5])));
                arr_26 [i_8] [i_8] [i_8 + 1] = (arr_6 [i_5] [i_5]);
            }
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_20 += 5284304751685993782;
                var_21 = (min(var_21, (((126 ? 6722457254266854363 : (arr_22 [10] [12] [i_5]))))));
                var_22 = (arr_5 [i_5] [i_5] [i_5] [1]);
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {

                        for (int i_13 = 3; i_13 < 15;i_13 += 1) /* same iter space */
                        {
                            arr_40 [i_5] [14] [i_11] [0] [i_13] = ((15864843746174900723 ? 120 : 5281326811822533024));
                            var_23 = -75;
                            arr_41 [i_5] [i_10] [i_12] = ((-(arr_28 [i_10] [i_11] [i_10] [i_10])));
                            var_24 = ((156 ? (arr_23 [i_5] [i_11] [i_12]) : ((var_5 ? (arr_1 [i_10] [i_12]) : 15864843746174900723))));
                        }
                        for (int i_14 = 3; i_14 < 15;i_14 += 1) /* same iter space */
                        {
                            arr_44 [i_5] [i_14] [i_11] [i_12] [i_14] [i_14] = var_6;
                            var_25 ^= var_2;
                            var_26 = ((-(arr_34 [i_5] [3] [i_11 - 2])));
                            var_27 = (arr_38 [i_14] [i_14 - 1] [i_14 - 2] [i_14 - 3] [9] [i_14 - 3]);
                        }
                        for (int i_15 = 3; i_15 < 15;i_15 += 1) /* same iter space */
                        {
                            arr_47 [i_12] [i_15] [i_11] [i_12] [i_12] [i_12] = 225;
                            var_28 = (((arr_32 [i_11 - 1] [i_11 + 2]) ? var_1 : (~var_1)));
                        }
                        var_29 &= (var_9 != 209);
                    }
                }
            }
        }
        var_30 ^= ((~(arr_27 [i_5] [10])));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 16;i_17 += 1)
            {
                {
                    var_31 = 5643195756090176355;
                    var_32 = (arr_35 [i_17 + 1] [i_5] [i_5] [i_5]);
                    var_33 = (max(var_33, ((((arr_32 [i_5] [i_16]) ? 232 : var_6)))));
                    var_34 = (arr_1 [i_5] [i_5]);
                    arr_53 [i_16] [5] [i_17] = ((-(arr_3 [i_5] [3] [i_17 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
