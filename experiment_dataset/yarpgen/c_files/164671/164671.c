/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_4 != ((var_5 << (((((var_7 * var_0) + 566354)) - 18))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_11 *= var_6;
        arr_2 [2] = (((min(var_6, var_4))) + ((max(var_3, var_0))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_12 = (max((var_7 % var_1), ((max(var_3, var_9)))));
                        var_13 = (max((var_7 - var_5), ((min(var_6, var_7)))));
                        arr_9 [i_3] [17] [i_2] [i_3] [i_3] = ((min(var_0, var_2)));
                        var_14 = ((var_1 != (max((var_0 / var_3), var_5))));
                        var_15 -= (((var_8 / var_5) - ((min(var_5, var_1)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_16 = (max(var_16, var_1));
        arr_12 [11] [19] |= (min(((var_4 - ((max(var_6, var_0))))), (((var_6 - var_1) - var_3))));
        var_17 += (((var_5 * var_1) | (var_0 >= var_2)));
    }
    for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_18 = (var_4 | var_7);
                            arr_25 [i_5 + 1] [7] [i_6] [i_7] [i_6] [i_8] [i_9] = (((var_2 / (var_7 != var_6))) / (((var_6 + 2147483647) << (((49961 - 15575) - 34386)))));
                        }

                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 19;i_10 += 1)
                        {
                            var_19 = (var_4 / var_7);
                            arr_28 [i_5 - 2] [18] [i_7] [i_5 - 2] [i_8] [i_10] &= (var_5 && var_9);
                        }
                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            arr_32 [i_5 + 1] [i_5 + 1] [i_7] [i_8] [i_7] = (max(var_1, (max(var_8, var_2))));
                            var_20 += ((((max(var_1, var_5))) - var_4));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_21 = ((var_0 == (((min(var_5, var_9))))));
                            var_22 |= ((((max(var_5, var_9))) & ((min(var_1, var_8)))));
                            var_23 = ((((max(var_2, var_1))) % (var_5 | var_5)));
                            var_24 = (min(var_24, (((var_6 ^ var_1) - ((max(var_7, var_0)))))));
                        }
                        var_25 = (((var_1 <= ((max(var_4, var_0))))));
                    }
                }
            }
        }
        var_26 |= ((min(var_3, var_4)));
        /* LoopNest 3 */
        for (int i_13 = 3; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                for (int i_15 = 4; i_15 < 20;i_15 += 1)
                {
                    {
                        var_27 = var_4;
                        var_28 = var_1;
                    }
                }
            }
        }
        arr_46 [i_5] [i_5] = var_4;
    }
    /* vectorizable */
    for (int i_16 = 2; i_16 < 21;i_16 += 1) /* same iter space */
    {
        var_29 ^= (var_0 & var_5);
        var_30 = var_7;
    }
    var_31 |= var_6;
    var_32 = var_8;
    var_33 = (((min(var_4, (var_0 & var_1))) >= var_4));
    #pragma endscop
}
