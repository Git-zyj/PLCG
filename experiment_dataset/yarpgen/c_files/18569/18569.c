/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 = (max(var_10, (((var_7 | (((((-12 ? var_3 : var_3))) ? var_7 : (((min((arr_1 [14]), 65535)))))))))));
        var_11 = (min(((-((1 ? (arr_0 [i_0]) : 65514)))), (((((arr_0 [i_0]) ? 1 : (arr_0 [i_0])))))));
        var_12 = ((((max(var_7, var_9))) && 308298372148414821));
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_13 = (min(var_9, ((((var_6 || 8424360761985311028) && ((min(1, var_8))))))));
        arr_6 [i_1] [i_1] |= var_6;
        arr_7 [i_1] = (min(((var_0 * (arr_1 [i_1]))), 4150));

        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            var_14 |= ((((max((arr_9 [i_2 + 2] [i_2 + 2] [i_2 - 1]), (arr_9 [i_2 + 2] [i_2 + 1] [i_2 - 1])))) ? (((((arr_8 [i_1] [i_2]) ? var_9 : 144)) << ((min(var_5, 0))))) : (65534 >= 5)));
            var_15 = (max(var_15, var_4));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            arr_13 [i_3] [i_3] = var_5;
            var_16 += -11589;
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            arr_17 [i_1] = var_8;
            var_17 |= (min(var_5, (!47787)));
            arr_18 [i_1] [i_1] = 1;
        }
    }
    #pragma endscop
}
