/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_0] = (min(((var_6 ? var_0 : var_8)), ((var_8 ? var_2 : (min(65, 0))))));
                    var_10 = (min(var_10, (((496 >= ((18446744073709551615 ? 18446744073709551615 : 192)))))));
                    arr_12 [i_2] = (max(((((var_8 || var_8) ? (-178 >= 0) : var_6))), ((var_8 ? var_9 : var_6))));
                    var_11 = (((((var_6 ? var_3 : var_0))) && (((-1 ? 22872 : 3966473054735540008)))));
                }
            }
        }
    }
    var_12 = ((((min(((min(-87, -115))), 39)))) / ((var_2 ? ((var_8 ? var_2 : var_6)) : var_9)));
    var_13 = var_4;

    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        var_14 = ((var_5 ? ((var_8 ? var_5 : var_0)) : (((var_4 ? var_7 : var_8)))));
        arr_15 [i_3 - 1] = (((var_7 || var_7) && (var_5 && var_7)));
    }
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        arr_18 [i_4] |= (((var_7 % var_1) % ((var_0 ? var_0 : var_4))));
        var_15 |= ((3966473054735540006 || (107 / 18446744073709551593)));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 7;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    {
                        var_16 = ((var_1 / var_9) << ((((var_5 << ((((-21 ? 18446744073709551614 : -26)) - 18446744073709551611)))) - 363)));
                        var_17 = (((var_5 / var_2) ? var_7 : ((max(var_1, var_4)))));
                        arr_28 [i_7] [i_6 + 2] [i_5] [i_5] [i_5] [i_4] = ((((max(14839138889021840089, 162655874882598706))) ? ((var_9 ? var_7 : var_9)) : (((var_3 ? var_8 : var_7)))));
                        var_18 |= (max((((var_0 | var_4) ? var_2 : var_6)), var_6));
                    }
                }
            }
        }
        arr_29 [2] = (((((-1 ? 9771420484697147425 : 1178563069))) && (var_8 || var_1)));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_19 = (((((18446744073709551615 ? 18446744073709551610 : 2))) ? ((((max(var_1, var_9))) ? var_1 : var_1)) : ((max(var_1, var_5)))));
        var_20 = (min(((var_2 ? (var_3 / var_5) : var_6)), ((var_6 ? var_4 : var_8))));
        var_21 = (((((var_0 ? var_9 : var_1))) ? var_2 : (min(var_0, var_4))));
    }
    #pragma endscop
}
