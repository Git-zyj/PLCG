/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = ((-(((!(var_2 + var_6))))));
                    var_12 = (min(var_12, var_3));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_13 = (min(var_13, ((max(var_3, (var_3 + var_2))))));
                        var_14 ^= (((min(-var_9, (var_0 / var_7))) - var_5));
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        var_15 = (min((var_2 >= var_0), (var_0 | var_4)));
                        arr_16 [i_0] [i_1 + 1] [1] [i_4] = (!var_4);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_16 -= (var_10 <= var_8);

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_17 = var_9;
                            var_18 = var_7;
                            arr_21 [i_0] [i_1] [i_2] [7] [i_5] [i_5] [i_6] = ((var_0 - (~var_4)));
                            arr_22 [i_0] [i_0] [i_1 - 2] [i_2] [i_6] [i_6] = (var_10 == var_7);
                        }
                    }
                    var_19 = (max(var_5, (max(var_6, var_10))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_20 -= ((-((var_5 << (var_10 - 45)))));
                                var_21 = (((-2886346575064532780 > 2886346575064532782) & var_5));
                                arr_29 [i_8] [i_7] [i_8] [i_1 + 1] [11] = (((((~-var_8) + 2147483647)) >> var_2));
                                arr_30 [i_8] [i_8] [i_7] [i_7] [i_0] [i_8] [i_0] = (((var_9 || var_3) < (!var_6)));
                                var_22 = (((min((!var_6), var_8)) ^ -var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_10;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 22;i_10 += 1)
        {
            {

                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_24 += (~var_3);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                arr_45 [6] [i_10] [10] [i_12] [i_12] |= ((max(-2886346575064532786, -2886346575064532782)));
                                var_25 *= ((((max(var_4, (var_3 ^ var_6)))) && var_9));
                            }
                        }
                    }
                }
                var_26 = (min(var_26, (((((((min(var_8, var_3))) ^ -var_2)) >= (var_7 & var_1))))));
                arr_46 [i_9] [i_9] [9] = var_0;
                arr_47 [i_9] [i_9] [i_10 + 1] = (((((min(var_8, var_6)))) << (((2886346575064532779 - -2886346575064532790) - 5772693150129065558))));
            }
        }
    }
    var_27 = -var_0;
    #pragma endscop
}
