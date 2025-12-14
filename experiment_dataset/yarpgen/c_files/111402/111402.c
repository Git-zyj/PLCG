/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 8;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1] [i_1] = 1;
            arr_8 [i_0] [i_1 - 3] [i_1 - 3] = var_1;
        }
        for (int i_2 = 3; i_2 < 8;i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_2 + 1] = (arr_10 [i_0] [i_2]);
            var_16 = 1;
            var_17 = (min(var_17, ((min((arr_3 [i_2 - 2] [i_2 - 3] [i_2 - 1]), 73)))));
            var_18 = (max(var_18, (((max(((max(1, 182))), ((127 ? (arr_10 [i_0] [i_2]) : 1))))))));
            var_19 = (max(203, (((max(0, (arr_11 [i_0] [i_0] [i_0])))))));
        }
        for (int i_3 = 3; i_3 < 8;i_3 += 1) /* same iter space */
        {
            arr_15 [i_3] = max(246, -23465);
            arr_16 [i_3] [i_3] = ((((arr_11 [i_3 - 1] [i_3 + 2] [i_3]) ? (arr_11 [i_3 + 1] [i_3 + 1] [i_3]) : -1)));
            var_20 = ((!((((var_8 ? (arr_13 [i_0] [i_0] [i_3]) : var_7)) > (max(var_12, 1))))));
            var_21 = (2147483647 < 1);
        }
        arr_17 [i_0] = max(1, 56996);
        var_22 = ((1 ? var_15 : (arr_1 [i_0])));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_20 [i_4] = (((arr_18 [i_4]) ? 53 : (((!(1 || var_9))))));
        arr_21 [i_4] = (min((((var_1 || var_2) ? (arr_18 [i_4]) : var_12)), ((-((243 ? -25 : 90))))));
        arr_22 [i_4] = 33;
        var_23 = (((max(-105, 1))) == (arr_19 [i_4]));
    }
    var_24 = ((var_1 ? var_6 : -var_8));
    #pragma endscop
}
