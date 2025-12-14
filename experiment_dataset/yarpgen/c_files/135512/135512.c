/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= 192;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0 + 1] [i_1 + 1] = ((~((((max(var_10, 32640))) ? 36809 : (4382079522980867062 - 1758152174)))));
            var_15 &= (((((((((arr_4 [i_0] [i_1]) ? 15872 : (arr_3 [i_0] [i_0 - 1])))) & (~2417461203519648915)))) ? 3147552356 : (min(3128221260, (~var_4)))));
            var_16 = ((((((arr_5 [i_1 + 1] [i_0 - 3] [i_0 + 1]) <= (arr_5 [i_0] [i_0 - 2] [i_1 + 1])))) ^ (!1734515670)));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_2] = ((((((!(arr_2 [i_2 + 1]))) ? (arr_5 [i_0] [i_2 + 1] [i_2]) : (arr_1 [i_0 - 3] [i_2]))) <= (arr_4 [i_2 + 1] [i_2])));
            arr_10 [i_0] [1] [i_0 - 1] = (arr_1 [i_0 - 1] [i_2]);
        }

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_13 [i_3] [i_3] = max(var_9, ((((((arr_0 [i_0] [i_0]) ? var_5 : var_11))) ? (((arr_2 [5]) ? 2536815125 : -23487)) : (2044 - var_4))));
            arr_14 [i_0] [8] [i_0] |= var_12;
            var_17 = (min(23489, var_13));
            var_18 |= (+(((arr_1 [i_0 - 3] [i_0 - 1]) & (((arr_12 [i_0]) ? 4432087320787138800 : -1905970708)))));
        }
        var_19 &= ((((-5085864578450343 ^ 4342501475441278025) ? (((arr_1 [i_0] [i_0]) - 2629302125)) : (1147414915 || 3147552373))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_20 = (max(var_20, (~18030504982367048448)));
        var_21 -= var_3;
    }
    for (int i_5 = 3; i_5 < 24;i_5 += 1)
    {
        arr_22 [8] [10] &= (max((arr_18 [i_5]), ((((min(5085864578450342, -4692279157807333444))) ? ((var_1 ? (arr_18 [24]) : 110)) : var_4))));
        var_22 = 23490;
        arr_23 [i_5] = (arr_19 [i_5 - 1]);
        var_23 = (min(((-(arr_20 [i_5]))), ((((arr_19 [i_5 - 3]) || (((var_10 ? var_8 : var_6))))))));
    }
    #pragma endscop
}
