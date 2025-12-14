/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = var_4;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_19 = (min(var_19, ((min(3953831710, 216)))));
        var_20 += (((65535 + -134217728) ? (((-(1 + 4135)))) : (max(8866264444392368565, 3827715919131051604))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_4 [8] [i_1] = var_6;
        var_21 = ((~((((min(7849, var_2))) + (0 != 61437)))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_3] [i_4] = (((((var_9 - ((216 ? 3743764199 : 235))))) ? (((60786 ? (!3038175883) : (~-8866264444392368566)))) : 8930619994445673022));
                    arr_14 [i_2] [i_3 + 2] [i_2] [i_3] = (((arr_12 [i_3] [i_4]) == var_4));
                }
            }
        }

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_18 [i_2] = (max((14404222116947416707 >= var_11), ((((var_8 + 2147483647) << (361535225 / 1357926788))))));
            arr_19 [10] = (arr_12 [i_5] [i_2]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {
                        arr_28 [i_7] [i_7] [i_6] [i_7] [i_8] [i_8] = var_10;
                        var_22 = (min(var_22, ((((((18679 < (arr_25 [i_2] [i_6] [i_2] [i_2])))) << (((((arr_25 [i_2] [i_8] [i_7 + 2] [i_8]) | 341135585)) - 341135586)))))));
                        arr_29 [i_2] [2] [i_7] = var_5;
                    }
                }
            }
            var_23 += (((~(arr_15 [i_2]))));
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_24 = (((((20 << (-10334 + 10360)))) || (max((arr_11 [i_2] [i_2] [i_9]), (arr_11 [i_2] [i_9] [i_9])))));
            var_25 -= ((((min((arr_25 [i_2] [i_2] [i_9] [i_9]), (arr_25 [i_9] [i_2] [i_2] [i_2])))) ? (((~var_8) % var_9)) : 25898));
            var_26 *= ((0 ? 0 : 60543));
        }
        var_27 = (max(-20, 13731992811683427229));
        var_28 = (min((((!(arr_27 [i_2] [i_2] [i_2] [i_2])))), (min(((-1357926788 ? 25898 : 1526648227)), (min(3743764199, var_6))))));
        var_29 = (max(var_29, (((-(min((arr_20 [i_2] [i_2]), (arr_2 [i_2] [i_2]))))))));
    }
    var_30 = var_9;
    #pragma endscop
}
