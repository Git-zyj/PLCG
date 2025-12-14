/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0 - 2] = var_7;
        arr_3 [i_0] [4] = ((((arr_1 [i_0 - 1] [i_0 + 1]) + 2147483647)) >> ((26 >> (var_7 - 3676680169768565285))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = 12;
        var_11 = (min(var_11, (arr_5 [i_1])));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_11 [21] = ((59150 ? (arr_10 [i_2]) : (arr_10 [i_2])));
        var_12 -= ((+(((arr_7 [8]) ? var_4 : var_4))));
        var_13 &= var_7;
        var_14 = ((-((27383365 ? 413840124 : var_1))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_15 = (((arr_14 [i_3]) ? ((((arr_5 [i_3]) | -2614271594282441151))) : var_10));
        arr_15 [i_3] [18] = ((-((987269186 % ((var_9 ? 13 : 12801568887057469912))))));
    }
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = ((((var_4 | (arr_4 [i_4 - 2]))) << (((min(-5739813850193246713, (arr_4 [i_4 - 2]))) - 12706930223516304846))));
        arr_19 [20] = (arr_7 [i_4]);
    }
    var_16 = (min(var_16, var_5));
    var_17 = var_7;
    var_18 = (max(var_18, var_7));
    #pragma endscop
}
