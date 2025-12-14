/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_13 = var_1;
        var_14 *= (max((arr_1 [i_0]), ((-39 ? -31263 : (13085 ^ 255)))));
        var_15 -= var_6;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_16 = (max(var_16, (((var_8 ? (((var_2 > (arr_3 [i_1])))) : var_0)))));
        arr_6 [i_1] [15] = (var_8 ^ var_4);
        arr_7 [i_1] [i_1] = (arr_4 [i_1]);
    }
    for (int i_2 = 3; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_17 *= (var_5 - var_2);
        var_18 = (var_7 / var_10);
        var_19 = (max(var_19, var_6));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_20 *= ((var_9 ? var_9 : (!var_10)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                {
                    var_21 = var_9;
                    arr_20 [21] [i_3] [i_3] [1] = (((((~(arr_10 [i_3] [i_3])))) ? 1 : (var_11 == 3084581292438573477)));
                    arr_21 [i_3] = (((var_6 || 33089) ? (arr_12 [i_3 - 3]) : ((14289120901097027918 ? -22934 : 0))));

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_22 = var_0;

                        for (int i_7 = 4; i_7 < 22;i_7 += 1)
                        {
                            var_23 = (max(var_23, var_0));
                            var_24 = (max(var_24, var_3));
                        }
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_25 *= ((var_3 && (arr_18 [i_3 + 1] [i_5 + 3] [i_5 + 3] [19])));
                        arr_29 [i_4] [i_3] = var_1;

                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            arr_34 [i_9] [1] [i_9] |= ((-var_1 ? (arr_25 [i_3 + 2]) : ((var_1 ? var_4 : var_0))));
                            var_26 = (var_10 > var_3);
                            var_27 = (max(var_27, var_11));
                        }
                        for (int i_10 = 3; i_10 < 22;i_10 += 1)
                        {
                            var_28 ^= (((((var_10 ? -5990916527909323740 : 48))) ? var_7 : (arr_25 [i_8])));
                            var_29 -= ((1 % (arr_19 [4])));
                        }
                        arr_37 [i_5] [i_3] = (var_12 % var_1);
                        var_30 = var_5;
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_11 = 2; i_11 < 20;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            var_31 = (~var_4);
            var_32 = (max(var_32, var_7));
        }
        var_33 = (min(var_33, var_3));
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        var_34 += ((41549 / 10152518570635570046) ? (var_2 - 1984) : (((var_6 ? 46724 : var_4))));
        var_35 *= ((8128 ? 15469680761124064507 : -7714354558752068244));
    }
    var_36 = ((((!((((-127 - 1) ? var_1 : 126))))) ? (((var_4 & -9) ? var_7 : var_8)) : (((var_7 ? var_5 : 18446744073709551615)))));
    #pragma endscop
}
