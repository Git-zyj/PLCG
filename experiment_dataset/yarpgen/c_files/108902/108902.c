/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0 + 1]) ? (((arr_0 [i_0 - 4]) + (arr_0 [i_0 - 1]))) : var_10));
        var_15 = (min(var_15, ((((((arr_0 [i_0]) >= (arr_1 [1]))) ? (((var_9 >= (arr_1 [i_0])))) : 939524096)))));
        var_16 = (((max(var_1, ((~(arr_0 [i_0]))))) >> (((((((-939524122 ? 4094 : var_9))) ? (max(var_4, var_3)) : (var_5 == var_9))) - 15782145448626493541))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_17 = ((((+(((arr_0 [i_1]) ? -939524097 : var_14)))) > ((((arr_4 [i_1]) ? 3265048430 : (((min((arr_3 [i_1]), (arr_1 [i_1]))))))))));
        arr_5 [i_1] = var_1;
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_18 = (((((((~(arr_8 [i_2])))) & (max(var_14, var_6)))) ^ (((min(var_3, (arr_0 [i_2]))) | ((var_5 ? var_9 : var_14))))));
        var_19 = (((((arr_7 [i_2 + 3]) | var_13)) * (((min((var_11 && var_12), 2))))));
        var_20 = var_6;
        var_21 = (min(var_21, ((((((var_11 ? (arr_1 [i_2 + 3]) : (arr_1 [i_2 + 1])))) ? (((arr_8 [12]) * var_13)) : (((((var_1 % var_11) <= ((max(1029918865, 1946998195))))))))))));
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        var_22 = ((((((arr_9 [i_3] [21]) != (min(9886868938117546290, (arr_10 [i_3] [i_3]))))))));
        arr_11 [i_3] = var_4;

        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            var_23 -= (((((((min((arr_13 [1] [i_4]), var_8))) ? var_5 : (arr_13 [i_3] [i_3 + 1])))) ? (((((-15229 ? var_8 : var_0))) ? (var_11 | var_6) : (15982 / var_3))) : (((((arr_1 [i_3 - 2]) > (arr_1 [i_3 + 1])))))));
            var_24 = ((((max((var_10 >= var_7), var_4))) ? ((((var_14 ? var_14 : var_10)) ^ (0 <= var_0))) : var_1));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            var_25 = (arr_14 [i_3 + 1]);
            var_26 = var_10;
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    {
                        var_27 = (var_7 | var_5);
                        var_28 = ((((((arr_19 [i_6] [i_3]) ? (arr_16 [i_3] [2]) : var_10))) ? (arr_10 [i_3 + 1] [i_3 - 1]) : var_2));
                    }
                }
            }
        }
    }
    var_29 = (var_8 | var_5);
    var_30 = ((1 ? var_14 : (((var_7 != var_12) * ((var_4 ? var_12 : var_13))))));
    #pragma endscop
}
