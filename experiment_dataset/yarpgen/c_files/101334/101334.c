/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (((arr_1 [i_0] [i_0]) << (((arr_0 [i_0]) - 10192))));
        arr_2 [i_0] = ((~(arr_1 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_15 = ((arr_1 [i_0] [i_1]) << (var_0 - 15888104999833328957));
            var_16 = (arr_4 [i_0] [i_0] [i_0]);

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                var_17 = (arr_1 [i_0] [i_1]);
                arr_7 [i_1] [12] &= ((46976870 ? 4294967285 : 1));
            }
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_18 = ((arr_10 [i_0]) ? ((10 ? var_5 : 255)) : (arr_8 [i_0] [i_0]));

                for (int i_4 = 4; i_4 < 15;i_4 += 1)
                {
                    var_19 += ((1107514387 << (((arr_3 [i_4 - 1] [i_4 - 1] [i_4 - 1]) - 3805692158))));
                    var_20 -= 17905992818542303945;
                }
                arr_13 [i_3] [i_1] = (((arr_1 [i_0] [i_0]) ? -1891965331 : (arr_9 [i_0] [i_3] [i_3])));
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_21 = 16388444034576245935;
                var_22 = (!1507842668);
            }
            var_23 = (max(var_23, (((var_3 ? (arr_6 [i_0] [i_1]) : (arr_6 [i_0] [i_1]))))));
        }

        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_24 = ((-777123744 % (arr_3 [i_0] [i_0] [i_6])));
            var_25 = (min(var_25, ((((arr_19 [i_0] [i_6]) ? (arr_19 [i_0] [i_6]) : var_0)))));
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            arr_24 [i_0] [i_0] = ((193 ? (arr_0 [i_0]) : ((1107514387 ? (arr_16 [i_7] [i_7] [i_0] [i_0]) : var_6))));

            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                var_26 = (var_11 % var_2);
                var_27 = (((arr_26 [i_0] [i_0]) % (arr_8 [i_8] [i_7])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_28 = (((((-777123749 + 2147483647) << (119 - 119)))) ? (((arr_20 [i_0] [i_0]) ? (arr_4 [i_0] [i_7] [i_8]) : (arr_11 [i_0] [i_7] [i_7] [i_8] [i_9] [i_7]))) : ((((arr_11 [i_0] [i_7] [i_8] [3] [i_9] [11]) || (arr_17 [i_0] [i_0] [i_0])))));
                            arr_31 [i_0] [i_7] [i_7] [i_0] [i_10] [i_7] |= 8362326003341637737;
                        }
                    }
                }
            }
            var_29 = (min(var_29, (((~(arr_10 [i_7]))))));
            var_30 = ((231 ? ((-1107514389 ? -28252 : 20)) : 3));
            var_31 ^= 4294967286;
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
        {
            var_32 = (((((837058366 ? 64 : var_10))) ? 67 : (var_8 % var_8)));
            arr_36 [i_0] [10] [i_11] = (((((-1 ? 28252 : 10084418070367913879))) ? (((-334088324 + 2147483647) << (4096 - 4096))) : -4107));
            var_33 = var_2;
            var_34 = 116074926;
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        var_35 = (((arr_38 [i_12]) ? (arr_17 [i_12] [i_12] [i_12]) : var_5));
        var_36 |= ((((var_11 << (var_5 - 81))) << (((((arr_3 [i_12] [i_12] [i_12]) ? 588387122 : var_4)) - 588387118))));
    }
    var_37 = ((var_1 % ((((((var_3 + 2147483647) << (var_0 - 15888104999833328957)))) ? var_3 : (max(1681590003, 251))))));
    #pragma endscop
}
