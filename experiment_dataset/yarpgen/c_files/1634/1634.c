/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 == (((255 / var_8) ? var_3 : ((14 ? var_13 : var_9))))));
    var_16 |= ((var_4 & (+-0)));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_17 = (min(var_17, (((0 ? (((!(arr_3 [i_0 + 1])))) : (((!(arr_3 [i_0 - 1])))))))));
        arr_4 [i_0] [i_0] = (((min(var_7, (arr_3 [i_0 + 1]))) == -586814628));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((-(((1 < -107) ? var_6 : var_13))));
        arr_8 [i_1] = (!1178729750);
        arr_9 [i_1] [i_1] = var_1;
        arr_10 [i_1] = 5;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_18 -= (arr_12 [i_2] [i_2]);
        arr_15 [i_2] = ((-((var_10 ? 0 : 16135650471598049295))));
        arr_16 [i_2] = (((arr_11 [i_2] [i_2]) < 1));
        var_19 = ((-(((arr_3 [i_2]) & var_2))));
    }
    #pragma endscop
}
