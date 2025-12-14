/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = var_8;
        var_20 -= (min(var_1, 1));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((min(1, 79))) ? (((((arr_3 [i_1]) + (arr_5 [3]))) - (arr_4 [i_1]))) : (arr_5 [i_1]));
        var_21 = (max(var_21, 3293187126465427630));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_10 [17] [i_2] [i_2] = (((((~(arr_7 [i_1] [i_2] [i_2])))) ? ((((arr_8 [i_1] [i_2]) | (~var_9)))) : ((((((arr_9 [i_1] [i_1] [i_1]) ? var_7 : (arr_3 [i_2])))) & (var_5 - 3744439087)))));
            arr_11 [i_2] [i_2] = (min(3744439113, (((var_10 ? (arr_4 [i_1]) : var_4)))));
            var_22 -= 3744439137;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_14 [i_1] [i_3] = (max(((max(3962547298, (arr_4 [i_1])))), (((min(var_0, var_1))))));
            var_23 = (min(var_23, -102288479));
            var_24 = (min(var_9, ((1 ? 32756 : 2514))));
            arr_15 [i_1] [i_1] [i_1] = var_8;
        }
        var_25 ^= (550528202 == -123);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_21 [i_5] = ((var_8 ? (var_12 <= var_10) : -var_3));
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_28 [i_4] [i_5] = ((((max(4, -4459441046055793713))) ? (min((max((arr_17 [i_7]), 0)), (((!(arr_9 [i_4] [i_6] [i_7])))))) : (((var_5 ? var_13 : var_0)))));
                        arr_29 [i_7] [1] [i_7] [i_7] = 1000748193882332619;
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            arr_33 [i_4] [i_8] = (((2001934951 ? (arr_30 [i_4]) : (((3962547322 ? var_0 : -22))))));
            arr_34 [i_4] [i_8] = (((((var_15 ? var_2 : var_16)))) ? ((-1954179640597279352 ? var_6 : (((min(3, var_12)))))) : ((min(3754910915, 1242272343))));
        }
        for (int i_9 = 3; i_9 < 21;i_9 += 1)
        {
            var_26 *= -1073830442;
            arr_39 [i_4] [i_4] [i_4] = (min((max(((((arr_16 [i_4]) ? -1 : (arr_5 [i_4])))), var_16)), (((~(29506 < 2071747725))))));
            arr_40 [i_4] [i_9] = (((((((!11018) || ((((-127 - 1) / var_1))))))) | (min((arr_18 [i_4] [i_4] [i_4]), 63035))));
            arr_41 [i_4] [i_9] = ((-((min((arr_31 [i_9 + 1]), var_3)))));
        }
        arr_42 [i_4] [i_4] = 1390172140;
    }
    var_27 = min((((~2904795124) ? (((min(var_12, var_11)))) : ((var_6 ? 601893006 : var_12)))), -11031);
    var_28 = ((var_10 ? var_16 : (((~((min(2520, var_11))))))));
    #pragma endscop
}
