/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_1, ((var_4 ? var_3 : (var_3 % var_3)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [6] = var_10;
        arr_3 [i_0] |= ((((((arr_1 [i_0] [12]) ? (min(5244014800296245285, 270215977642229760)) : 3425402232))) ? 0 : (arr_0 [i_0])));
        var_13 -= (min(((var_8 ? (((-92 ? (arr_1 [i_0] [i_0]) : var_7))) : ((38 ? (arr_1 [i_0] [i_0]) : var_3)))), (arr_1 [i_0] [i_0])));
        var_14 = (((~-21619404188894056) < (((((arr_1 [10] [i_0]) >= 869565064))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_15 = ((var_5 % ((min((arr_9 [i_2]), var_9)))));
            var_16 += ((2016 * ((~(min((arr_0 [i_1]), 4294967294))))));
        }
        arr_10 [i_1] [i_1] = (arr_6 [12] [i_1] [i_1]);
        var_17 = (min(var_17, (!46)));
    }
    #pragma endscop
}
