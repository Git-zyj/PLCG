/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((((((((var_6 ? var_10 : 524286))) ? ((4294967295 ? var_13 : var_12)) : var_0))) ? (max((max(103327209, 7)), (((var_2 ? var_0 : 65532))))) : ((((((var_13 ? var_0 : var_8))) ? ((var_10 ? var_10 : -111)) : 0)))));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] &= (max((((arr_1 [i_0 - 3]) ? (arr_1 [i_0 - 1]) : var_14)), ((-(arr_1 [i_0 - 4])))));
        var_19 += (min((((arr_1 [i_0]) ? var_10 : 65532)), ((var_11 ? 41 : ((max(89, -35)))))));
        var_20 += 13993;
    }
    var_21 += ((((max(3700978266, ((0 ? 1311404583 : -39))))) ? (((237 ^ 17976138492873646788) ? var_15 : var_12)) : var_10));

    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_22 = ((((!(arr_5 [i_1] [i_1]))) ? (~var_2) : (((arr_5 [21] [i_1]) ? (arr_5 [i_1] [i_1]) : var_4))));
        var_23 ^= var_4;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_24 |= var_10;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_25 = (max(var_25, -28));
                    var_26 = (((((((((22282 ? (arr_4 [i_3]) : 9258043272110964580))) || (var_1 > var_3))))) == (((((var_17 ? 6 : var_8))) ? (((var_10 ? var_2 : (arr_7 [i_4])))) : (arr_8 [i_2])))));
                }
            }
        }
        arr_15 [i_2] [0] |= ((((((((1 ? 127 : var_1))) ? (((2147483634 ? (arr_4 [i_2]) : -10))) : 3617767046577396536))) ? ((var_8 ? (((var_7 ? var_2 : var_15))) : ((var_9 >> (22390 - 22367))))) : 139));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_27 = var_0;

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_28 = (arr_7 [i_5]);
            var_29 = (max(var_29, var_9));
            var_30 = 1;
            arr_20 [21] [i_6] [i_5] = (-(arr_14 [i_5] [i_6] [i_6] [i_6]));
        }
    }
    var_31 = var_10;
    #pragma endscop
}
