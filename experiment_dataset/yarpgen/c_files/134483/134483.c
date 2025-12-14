/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    var_20 = (min(var_20, ((((var_15 * (max(var_18, var_13))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = (((((-(((arr_2 [i_0] [i_0]) << (var_3 + 8494564981057755916)))))) ? (((arr_2 [i_0] [i_0]) % var_15)) : ((min(3189955094, 1)))));
        var_22 = (min(var_22, 113));
        var_23 |= var_15;
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_24 = (min(var_24, (((var_14 < (((arr_5 [i_1 + 3] [i_1 - 2]) ? (arr_5 [i_1 + 1] [i_1 + 1]) : (arr_5 [i_1 + 4] [i_1 - 1]))))))));
        arr_8 [i_1] [i_1 + 3] = ((((((arr_6 [i_1 - 2] [i_1 - 1]) << (arr_4 [i_1] [i_1 - 1])))) ? var_14 : (arr_1 [16])));
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            var_25 = (((~var_3) > ((var_3 ? (arr_1 [i_2 + 1]) : ((~(arr_3 [i_3] [i_2 + 3])))))));
            arr_14 [i_2 - 2] [i_3] [i_2 + 4] = var_0;
            var_26 = (min(var_26, 1919802077));
        }
        var_27 = ((!(arr_7 [i_2])));
    }
    #pragma endscop
}
