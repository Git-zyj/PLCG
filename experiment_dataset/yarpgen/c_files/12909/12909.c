/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 -= var_6;

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_12 = (max(var_12, ((max(var_10, (((var_4 && var_7) ? (min(var_1, var_8)) : ((var_8 >> (var_6 - 3893885499255893930))))))))));
            var_13 = (min(((max(((var_9 ? var_4 : var_1)), (var_9 & var_4)))), (max((3910093678 & 2615641826387158352), ((min(var_2, var_5)))))));
            arr_7 [i_0] [i_0] [i_0] = var_2;
            arr_8 [i_0] [i_0] = (max(var_2, (min((var_5 >= var_10), (max(var_3, var_9))))));
            var_14 = (min(var_14, (((((((((var_1 ? var_2 : var_4)) < ((var_5 ? var_0 : var_3)))))) & (min(var_0, var_6)))))));
        }
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = (var_0 ^ (var_6 > var_8));
        var_15 = (var_0 ? (var_5 < var_1) : var_7);
        var_16 = (max(var_16, (((((var_6 ? var_6 : var_0)) & (var_0 & var_3))))));

        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            var_17 = (((var_10 && var_2) != var_6));
            var_18 = (((var_1 ^ var_3) ? var_0 : ((var_1 ? var_5 : var_8))));
            arr_18 [i_3] = ((((var_0 ? var_2 : var_6)) | (((var_1 ? var_1 : var_10)))));
        }
        for (int i_4 = 4; i_4 < 19;i_4 += 1) /* same iter space */
        {
            arr_21 [i_4] = ((((var_4 << (var_2 - 35029))) + var_3));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_19 = var_9;
                        arr_26 [i_4] [i_4] [i_4] [i_4] = var_0;
                        arr_27 [i_2] [i_4] [i_6] [i_2] [20] &= ((var_7 >= ((var_3 ? var_5 : var_1))));
                        var_20 = (max(var_20, (var_4 << var_9)));
                    }
                }
            }
        }
        for (int i_7 = 4; i_7 < 19;i_7 += 1) /* same iter space */
        {
            var_21 = (max(var_21, (((var_3 + ((var_9 ? var_2 : var_1)))))));
            var_22 &= (((((var_7 + 2147483647) << var_4)) >> (var_6 - 3893885499255893930)));
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 21;i_11 += 1)
                    {
                        {
                            var_23 *= var_9;
                            var_24 = var_7;
                        }
                    }
                }
            }
            var_25 &= ((var_4 ? (var_9 <= var_6) : var_2));
        }
        var_26 = ((((var_8 >> (var_1 - 65022))) & ((var_9 ? var_10 : var_1))));
    }
    var_27 = (max(var_27, ((((((var_0 | var_10) ? (((var_4 ? var_2 : var_1))) : ((var_10 ? var_6 : var_9))))) ? ((((var_4 ? var_4 : var_0)) + (max(var_5, var_7)))) : (((min(var_10, var_8)) + (max(var_8, var_4))))))));
    var_28 = (min(var_28, (((var_8 > ((((var_6 ? var_5 : var_6)) % (var_2 + var_5))))))));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            {
                var_29 = (max(var_29, ((max((max(((min(var_0, var_1))), ((var_7 ? var_2 : var_10)))), ((min(var_5, ((max(var_9, var_10)))))))))));
                var_30 -= (var_2 * ((((min(var_9, var_9))) * (var_1 * var_4))));
            }
        }
    }
    #pragma endscop
}
