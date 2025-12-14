/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, ((max(var_7, (max((arr_1 [i_0]), (min((arr_0 [i_0]), var_5)))))))));
        arr_2 [i_0] = 2825059816;
        arr_3 [i_0] &= (min(var_0, var_13));
        arr_4 [i_0] = 12174875849710262732;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (((var_4 >= (((var_12 <= 1) >> 1)))))));
        var_16 = ((((min(-20467, 162))) ? 20490 : (min(((min((arr_0 [i_1]), 1))), ((2319165464 ? var_6 : var_7))))));
        arr_8 [i_1] [i_1] = 1;
        var_17 = (max((((arr_6 [4]) ? (!var_8) : -47)), (12299 <= 0)));
        var_18 = ((17 ? 9044932843965421432 : (((max((arr_1 [i_1]), 11428))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_19 = (((arr_7 [i_2]) || 50));
        var_20 += (arr_7 [i_2]);

        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_21 = 27;
            var_22 = ((1 < (arr_6 [i_3])));
            var_23 = (((arr_6 [i_3 - 1]) ? (arr_11 [i_2]) : (((arr_12 [i_2] [i_3 - 1]) ? var_3 : -40))));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_24 = (arr_15 [i_2] [4] [4]);
                            var_25 *= ((31874 ? 3222445346 : 11415));
                            arr_25 [i_2] [i_4 - 1] = 18185;
                        }
                    }
                }
            }
            arr_26 [8] &= var_7;
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_29 [i_2] [i_2] = ((var_8 ? (arr_6 [i_8 - 1]) : (arr_6 [i_8 - 1])));
            var_26 = (min(var_26, ((((arr_1 [i_8 - 1]) ? (((var_6 ? var_8 : var_2))) : var_10)))));
            var_27 = (arr_15 [i_2] [i_2] [i_8 - 1]);
            var_28 = 1;
            var_29 = (var_8 != var_6);
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        var_30 = var_10;
                        var_31 = var_3;
                    }
                }
            }
        }
        var_32 *= 18446744073709551598;
    }
    var_33 ^= max(var_0, var_12);
    var_34 = ((172817778106353869 ? 1 : 1));
    #pragma endscop
}
