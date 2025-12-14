/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        var_18 = (-9223372036854775807 - 1);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_4 [6] [i_1] = (arr_1 [i_1]);
        arr_5 [i_1] [i_1] = (arr_0 [i_1]);
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_19 = 15;
        var_20 = (max((arr_8 [i_2]), ((max(55, 198)))));
        arr_9 [i_2] = ((-(((!(arr_8 [i_2]))))));
        var_21 = (-4951 == var_15);
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = (57 + 198);

        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            arr_17 [i_4] [i_4] [i_4] = ((((max((arr_15 [i_3] [i_4]), (arr_15 [i_3] [i_4])))) ? (arr_15 [i_3] [i_4]) : -28477));
            var_22 = (72 * -9);
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_23 &= (((-(((arr_16 [1]) / 58)))));
            arr_20 [i_3] [i_5] = -var_11;
        }
        var_24 = (max((arr_15 [i_3] [i_3]), (((arr_15 [i_3] [i_3]) ^ 6994008668401405626))));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_25 = (min(var_25, (((((max((arr_18 [i_6] [i_6] [i_6]), 1))) * ((var_3 - (arr_14 [i_6] [10]))))))));
        arr_23 [i_6] = 17;
    }
    var_26 = var_16;
    #pragma endscop
}
