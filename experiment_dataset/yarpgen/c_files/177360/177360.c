/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_4;
        var_15 = (min(var_15, (((((var_11 ? (arr_0 [i_0]) : 4111869377948812183)) * ((((((max(var_14, var_9))) <= ((max(var_13, var_0))))))))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_16 = var_4;
                            var_17 = 14334874695760739433;
                        }
                        var_18 = (!-var_13);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_19 = (min((((max(var_5, 67038256086874617)) + var_1)), var_8));
                    arr_20 [i_6] [8] [i_6] = (max(var_0, (((var_10 + 2147483647) << (((arr_10 [i_6] [i_5] [i_0] [i_0]) - 141))))));
                    arr_21 [i_6] [i_5] [i_5] [i_6] = (((((-1785456219 > (arr_15 [i_0] [i_6])))) + (0 | var_7)));
                }
            }
        }
        arr_22 [i_0] = -var_5;
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
    {
        var_20 -= var_9;
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        var_21 ^= ((~(var_1 + var_11)));
                        arr_34 [i_7] [i_8] [12] [i_9] [i_7] [i_7] &= 14334874695760739406;
                        var_22 = 1;
                    }
                }
            }
        }
    }
    var_23 = (var_6 < 1);
    var_24 = (((((max(11786, var_3)))) * var_14));
    var_25 = (((!(var_5 << 3))));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 4; i_14 < 13;i_14 += 1)
                    {
                        {
                            var_26 = (max(17465223907006618744, 1));
                            arr_45 [14] [i_12] = ((!((((-7934 + 2147483647) << (65526 - 65526))))));
                            var_27 *= var_1;
                        }
                    }
                }
                arr_46 [i_12] [i_11] = (((((!(-11768 ^ var_6)))) * (((!var_2) % var_12))));
                arr_47 [i_12] = var_9;
                arr_48 [i_12] = ((var_8 ? var_3 : (58006 % -34)));
            }
        }
    }
    #pragma endscop
}
