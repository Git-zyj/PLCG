/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~-25);
    var_18 = ((var_15 < ((2771441146878631591 ? (((0 << (2771441146878631613 - 2771441146878631611)))) : -4308898160702605342))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_2] &= var_5;
                    var_19 += (-127 - 1);
                    var_20 = (min(var_20, (min(var_9, (((min(1, 9030))))))));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_17 [i_3] = ((-(arr_6 [i_0] [i_1] [i_0] [i_5 - 1])));
                                var_21 *= -2771441146878631592;
                            }
                        }
                    }
                    arr_18 [22] [22] [22] |= ((1 - (((min(1933715075, (arr_13 [i_0] [i_0] [i_3] [20] [9])))))));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    arr_21 [1] [i_6] [i_6] [15] = (((min(((var_12 ? var_0 : 140737488355327)), var_0)) != (863619999080187802 * -15148)));
                    arr_22 [i_6] [i_1] [i_6] = (min(-10788, 1846506747));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_29 [i_0] [i_0] [1] [i_0] [i_6] [i_0] [i_0] = -1;
                                var_22 *= ((var_9 ? (min(36999, (max(var_9, 65535)))) : 0));
                                arr_30 [i_6] [i_1] [i_6] [i_8] [1] [i_6] = -1;
                            }
                        }
                    }
                }
                var_23 = ((var_2 / (~var_10)));
            }
        }
    }

    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_37 [i_9] = 42445;
            arr_38 [15] [i_9] = 10787;
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_24 += 2361252222;
                            arr_46 [i_9] [i_10] [8] [i_10] [i_9] = (((((var_2 ? -4308898160702605342 : 255))) - -10788));
                            var_25 = 27964;
                        }
                    }
                }
            }
        }
        arr_47 [15] [i_9] = (24440 ? var_1 : ((((min(3627222411, -9223372036854775803))) ? ((((30857 && (arr_4 [i_9] [14]))))) : ((var_16 >> (((arr_7 [8] [i_9]) - 45)))))));
    }
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        arr_50 [1] [1] = var_10;
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    {
                        arr_58 [i_14] [i_14] [i_16] = 2458345484613770363;
                        arr_59 [i_16] = (((arr_41 [i_14] [i_16] [i_17]) ? (max((((0 - (arr_52 [i_14] [i_14])))), ((var_16 ? -1 : 3810163793)))) : 0));
                    }
                }
            }
        }
        var_26 = (((((1 | (max(var_4, -870))))) ? (((arr_1 [i_14] [i_14]) * (min(9, 0)))) : ((((arr_44 [i_14] [15] [7] [2] [i_14] [1] [2]) ^ (-19230 && 10))))));

        for (int i_18 = 1; i_18 < 7;i_18 += 1)
        {
            var_27 += (((min(3854717838654865273, var_6))) && (!var_1));
            var_28 += (min(((max((arr_28 [i_18 + 1] [i_18 + 3] [i_18 + 2] [i_18 + 2] [i_18 + 2] [i_18 + 2] [i_18 + 2]), 1))), var_15));
            var_29 = (!((((!var_14) ? 15988398589095781275 : ((var_15 ? var_16 : var_10))))));
        }
        /* LoopNest 3 */
        for (int i_19 = 2; i_19 < 8;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 10;i_20 += 1)
            {
                for (int i_21 = 1; i_21 < 8;i_21 += 1)
                {
                    {
                        arr_70 [i_19] [i_19] [i_19] [i_19] = (((((arr_24 [i_19 + 2] [i_19] [i_19]) || (arr_24 [i_19 + 2] [i_19] [20]))) ? (((arr_24 [i_19 + 2] [i_19] [0]) ? (arr_24 [i_19 + 2] [2] [7]) : var_7)) : (var_0 && var_7)));
                        arr_71 [i_19] [i_20] [i_19] [i_19] = (-1 >= var_5);
                    }
                }
            }
        }
    }
    #pragma endscop
}
