/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [0] [i_1] [i_1] = (((((~(arr_5 [10] [i_0 - 1] [i_0 - 1])))) ? (((((var_5 ? var_8 : var_6)) < var_8))) : ((max(6539, 6555)))));
                arr_7 [i_1] = (var_9 / var_3);
            }
        }
    }

    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((min((arr_8 [i_2 - 1]), var_0)));
        arr_12 [i_2] [i_2 - 1] = (((max(-var_4, ((var_0 ? var_10 : var_9)))) / (((min((arr_4 [i_2 + 2]), (arr_5 [i_2 + 2] [i_2 - 2] [i_2 + 2])))))));

        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            arr_15 [i_3] = var_7;
            var_11 ^= ((min((!var_10), (min(var_3, var_0)))));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        var_12 = ((((max((min((arr_0 [i_2]), (arr_17 [i_5] [i_3] [i_4]))), (((~(arr_3 [i_5] [i_4] [i_2]))))))) ? (max(((var_5 ? var_2 : var_6)), var_0)) : ((~((var_7 ? (arr_10 [i_2]) : var_9))))));
                        arr_20 [i_2] [10] [i_4] [i_5] |= (((((5003637947477360986 ? 65524 : -12545))) ? 1187890802 : 41514));
                    }
                }
            }
        }
        arr_21 [8] = ((var_2 ? (arr_3 [i_2 + 1] [i_2 - 1] [i_2 - 1]) : ((var_3 ? var_1 : (arr_9 [i_2])))));
        var_13 = (((var_9 ? var_2 : var_3)));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_14 |= ((941521868 ? 54432 : (((((6525 ? 6772464821877587456 : 1500286276348019833))) ? (arr_22 [i_6] [9]) : -6487820824787351975))));
        var_15 = ((~((min(((((arr_22 [17] [i_6]) && var_4))), var_4)))));
        var_16 = ((((!(arr_23 [i_6]))) ? var_8 : (((max((arr_22 [i_6] [7]), var_8))))));
        var_17 = (((((((max(var_9, var_9))) ? 941521854 : var_6))) ? (arr_24 [i_6]) : ((6772464821877587463 ? -941521869 : 145237421))));
    }
    var_18 = (max(var_18, (4294967295 | 27)));
    var_19 = ((((min((~var_4), (~var_2)))) ? ((-6953510486767125965 ? 17805 : 114)) : var_3));
    #pragma endscop
}
