/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = var_7;
        arr_4 [i_0] = ((((~3823071925) ? (max(var_2, 0)) : (((1930686399 ? 1930686372 : 1930686372))))));
        var_13 = (max(var_13, (max((((((1930686402 ? var_3 : 2364280909))) ? (((arr_2 [2]) ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0]))), (((1930686387 * (((~(arr_2 [i_0])))))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((-(max(((((arr_5 [i_1]) && (arr_6 [i_1] [i_1])))), (min(var_6, (arr_1 [i_1] [i_1])))))));
        arr_8 [i_1] [i_1] = ((((((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))) ? (arr_6 [i_1] [i_1]) : ((-(arr_6 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_14 = (max(var_14, var_8));
        var_15 = (max(var_15, 1930686387));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        var_16 -= (min(((var_10 ^ (arr_6 [i_3] [i_5]))), (arr_22 [17])));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_17 = ((-(~2364280908)));
                            var_18 = (((arr_24 [i_3] [i_4 - 2] [i_5] [i_4 - 1] [i_7]) ? (((arr_23 [i_3] [i_3] [i_3] [i_6] [i_6] [i_7]) ? 1930686387 : var_10)) : (!14568)));
                        }
                        var_19 = (max(var_19, 2364280895));
                        var_20 -= (((-2087254492 != 1) ? ((2364280897 ? var_5 : 7227919378497625833)) : (((arr_1 [i_4 - 3] [i_4 - 2]) * (arr_14 [i_5] [i_6])))));
                        var_21 = (2087254492 / 7227919378497625833);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_22 = (max(var_22, ((min(((-(arr_14 [i_3] [i_9]))), (arr_19 [i_3] [i_8]))))));
                    arr_33 [i_3] [i_8] [i_9] = arr_0 [i_8];
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                {
                    var_23 -= ((~(((var_2 || (arr_5 [i_11 - 1]))))));
                    var_24 = (max(var_24, ((((((18446744073709551614 & (((min(-12992, 0))))))) ? (arr_37 [i_11 + 1]) : (max(-2147483646, (((arr_6 [i_10] [i_10]) ? -4093 : (arr_2 [1]))))))))));
                    arr_42 [i_10] [i_11 - 1] [i_12] = (((((((((arr_36 [i_10]) ? (arr_40 [i_10] [i_10] [i_10]) : var_0))) ? -2087254471 : (!0)))) ? ((((max(1930686399, -32253)) < (var_9 % 2364280897)))) : (((arr_39 [i_11 + 1]) ? (arr_39 [i_11 - 1]) : 1))));
                    var_25 = ((((var_4 ? (~var_3) : ((max((arr_34 [i_12]), (arr_2 [i_10])))))) << (((-8974126120608747399 * 1) + 8974126120608747412))));
                }
            }
        }
    }
    var_26 = ((-(~7227919378497625833)));
    var_27 -= ((var_3 ? ((((max(43146, -7))) ? (!1) : ((var_5 ? 1 : (-127 - 1))))) : (!var_9)));
    #pragma endscop
}
