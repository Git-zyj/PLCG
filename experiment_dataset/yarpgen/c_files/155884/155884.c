/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_2 ? ((var_6 ? var_4 : var_8)) : var_0);
    var_12 = 886191024867208135;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_13 *= (~-77);

            for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
            {
                var_14 = 58;
                var_15 = (arr_4 [i_0] [i_0]);
                arr_6 [i_0] = (((-77 ? 65 : var_8)));
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
            {
                var_16 = -21;
                arr_10 [i_0] [i_1] [2] = var_8;
            }
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                var_17 = (-(arr_5 [i_4 + 1] [7] [i_4 + 1]));
                var_18 = ((arr_5 [i_0] [i_0] [i_4 + 1]) ? (arr_5 [i_0] [i_1] [i_4]) : (arr_5 [i_4 + 2] [i_4 + 2] [i_4]));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 7;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_19 = var_0;
                            var_20 = (((arr_14 [i_0] [i_0] [i_5 + 1] [i_4 - 1] [i_6] [i_0]) ? (((-(-127 - 1)))) : 18446744073709551608));
                            var_21 = (max(var_21, -105));
                        }
                    }
                }

                for (int i_7 = 3; i_7 < 8;i_7 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, var_2));
                    var_23 |= var_5;
                    arr_20 [i_0] [i_0] [i_0] [i_0] [6] = (((arr_19 [i_4 + 1] [i_4 + 2] [i_4 + 1] [i_7] [i_7 + 1] [i_7 + 1]) ? var_8 : (arr_0 [i_4 + 2])));
                }
                for (int i_8 = 3; i_8 < 8;i_8 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_1] [i_1] = var_7;
                    var_24 = 8725575224669736478;

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_25 = (((((8725575224669736498 ? (arr_2 [i_0]) : (arr_4 [i_9] [1])))) ? -66 : (arr_24 [i_8] [i_8 - 3] [i_8] [i_8 - 1] [i_8 - 2])));
                        var_26 = -113;
                    }
                    arr_28 [i_0] [i_1] [i_4 - 1] [i_0] = (arr_24 [i_1] [i_1] [i_4 + 2] [i_4 + 2] [i_8 + 2]);
                }
                for (int i_10 = 3; i_10 < 8;i_10 += 1) /* same iter space */
                {
                    arr_32 [i_4] [1] [i_4 - 1] [i_4 + 1] = ((4 ? 12 : -34));
                    var_27 = (arr_5 [i_0] [i_1] [i_10]);
                }
            }
        }

        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {

            /* vectorizable */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                var_28 = (-45 ? 15967517652816642553 : 8349856755448494391);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 4; i_14 < 8;i_14 += 1)
                    {
                        {
                            var_29 = -36;
                            var_30 |= var_5;
                            var_31 = var_5;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    {
                        var_32 = (max(var_32, (arr_34 [i_0])));
                        var_33 = 71;
                    }
                }
            }
            var_34 = -42;
        }
    }
    #pragma endscop
}
