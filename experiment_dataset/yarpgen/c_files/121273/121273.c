/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_16 = (var_13 >= ((var_7 << (12010572091853390356 - 12010572091853390356))));
        var_17 = (((((var_2 - (-9223372036854775798 ^ 1727786488)))) ? (min((arr_0 [i_0 - 2]), var_14)) : var_3));
        var_18 = (arr_2 [i_0]);
        var_19 = -839;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_20 = ((+(((var_7 * var_3) ? ((min((arr_4 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_2] [i_3])))) : (min(3023986513, 8754753419435331686))))));
                        var_21 -= (((~-8754753419435331657) ^ ((~(~0)))));
                        var_22 -= (((7258083825544706427 > -32759) && (((~(arr_4 [i_0 - 2] [i_0] [i_0 + 1]))))));
                        var_23 = var_6;
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_24 = (((((((8754753419435331686 ? var_15 : 4294967295))) == (arr_7 [i_4 + 1] [4] [i_4]))) || -8754753419435331686));
        var_25 += -8754753419435331663;
        var_26 = (((((((arr_8 [17]) ? (arr_2 [i_4]) : (arr_13 [i_4]))) > (max((-2147483647 - 1), 1447773812)))) ? (arr_1 [i_4] [i_4]) : (~-8754753419435331663)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    var_27 = (((min(-8754753419435331662, -8754753419435331648)) % (((-(arr_8 [i_6]))))));
                    var_28 = ((-(min(139203263, (arr_16 [i_4] [i_5 + 1] [i_6])))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_29 ^= ((var_0 + ((var_13 ? (~-8754753419435331662) : ((var_0 ? (arr_14 [i_4] [i_4]) : -8754753419435331662))))));
                                var_30 = ((max(var_9, (arr_6 [20] [i_5] [i_4]))));
                                var_31 -= (var_10 << (((arr_22 [i_8 + 1] [i_8] [i_8 - 3] [i_8] [i_8] [i_8 - 1] [14]) + 1784744127)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 20;i_9 += 1) /* same iter space */
    {
        var_32 = var_1;
        var_33 = var_12;
        var_34 = (((arr_0 [i_9]) ? 8754753419435331657 : -1));
    }
    var_35 = var_8;
    #pragma endscop
}
