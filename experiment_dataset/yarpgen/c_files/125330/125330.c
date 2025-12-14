/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (18446744073705357312 ? var_5 : var_9);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_13 = var_3;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_14 = -1929180217;
                            arr_12 [i_4] [i_4] [i_0] [i_0] [i_1] [i_0] = -5119590477888671983;
                        }
                    }
                }
            }
            var_15 = 1;
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            var_16 ^= (arr_11 [0] [18] [i_0] [i_0] [i_0] [i_0] [i_0]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    {
                        var_17 = (min(var_17, var_0));
                        var_18 = var_1;
                        var_19 = (((arr_4 [i_0] [i_0]) ? 43350 : ((((arr_17 [i_0]) != var_6)))));
                    }
                }
            }
            var_20 = ((-1039855996 ^ (var_1 & 0)));
            var_21 = (9223372036854775807 | -74);
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            arr_24 [i_0] [i_0] = ((var_6 ? (((19 ? var_2 : 74))) : ((var_8 ? (arr_18 [i_0]) : var_8))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        var_22 = -9223372036854775778;
                        var_23 = (~-var_4);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 18;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        {
                            var_24 = 1039855990;
                            var_25 = var_9;
                            var_26 = (((arr_7 [i_0] [0] [i_8] [i_0]) <= var_10));
                            var_27 = (((((-5 ? (arr_5 [i_0] [i_0] [i_0]) : var_4))) && (!-1570421738363648457)));
                        }
                    }
                }
            }
        }

        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 17;i_16 += 1)
                {
                    {
                        var_28 = (max(var_28, var_0));
                        arr_46 [0] [i_15] [i_0] [i_0] [i_0] [i_0] = (((arr_33 [i_0] [i_15] [i_15]) ? -75 : -158687996492791247));
                    }
                }
            }

            for (int i_17 = 1; i_17 < 15;i_17 += 1) /* same iter space */
            {
                var_29 = (min(var_29, (((!(arr_11 [i_14] [i_14] [i_17 + 3] [i_14] [i_17] [4] [i_17]))))));
                /* LoopNest 2 */
                for (int i_18 = 3; i_18 < 17;i_18 += 1)
                {
                    for (int i_19 = 4; i_19 < 17;i_19 += 1)
                    {
                        {
                            var_30 = (arr_3 [11] [11]);
                            arr_54 [i_0] [i_17] [i_14] [i_0] = ((arr_21 [i_0] [i_17 + 3] [i_17 + 3] [i_17]) ^ var_5);
                        }
                    }
                }
                var_31 = (((!74) != (arr_34 [i_0] [i_14])));
            }
            for (int i_20 = 1; i_20 < 15;i_20 += 1) /* same iter space */
            {
                arr_59 [i_0] [i_14] [i_0] = ((((((arr_28 [i_20 + 2] [i_0] [i_0]) - var_4))) ? (-1187518666 >= -65536) : var_9));
                /* LoopNest 2 */
                for (int i_21 = 2; i_21 < 16;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 18;i_22 += 1)
                    {
                        {
                            var_32 = ((var_9 * (arr_10 [i_21 + 3] [i_20 + 1] [i_20 + 1] [i_21 + 1] [i_22 + 1])));
                            var_33 = (arr_10 [i_0] [i_0] [i_20 + 3] [i_21] [i_22 - 1]);
                        }
                    }
                }
            }
            var_34 = var_10;
        }
        for (int i_23 = 1; i_23 < 17;i_23 += 1)
        {
            var_35 = -1;
            var_36 = (((((1 ? 68 : (-2147483647 - 1)))) ? var_0 : 112));
            var_37 = var_9;
        }
        var_38 = (arr_11 [i_0] [i_0] [9] [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 10;i_24 += 1) /* same iter space */
    {
        arr_70 [i_24] = (var_5 ? -4194303 : 220);
        var_39 = ((var_1 ? ((1 & (arr_36 [4] [4] [4] [i_24] [4]))) : 37));
    }
    for (int i_25 = 0; i_25 < 10;i_25 += 1) /* same iter space */
    {
        var_40 = (min(var_40, ((~((var_5 | (min(var_11, var_2))))))));
        arr_74 [4] [i_25] = var_6;
    }
    #pragma endscop
}
