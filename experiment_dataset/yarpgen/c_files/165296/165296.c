/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = (max(((max(((var_10 ? var_10 : 120)), var_2))), ((var_16 ? var_7 : (max(var_3, 30671))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_20 = -125;
        var_21 = var_3;
        var_22 = (min(((-(125 >= 255))), (arr_0 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = ((~((~(max(var_5, 13))))));
        var_23 = ((max(var_4, -2036019889)) > (((((((-127 - 1) ? 0 : 243))) ? ((-(arr_5 [i_1]))) : (((arr_4 [i_1]) / 248))))));
        var_24 = var_14;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] = 34;
        var_25 = 230;
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_12 [i_3] = (max(7, -var_6));
        var_26 = ((((~((min((-127 - 1), 254)))))) ? (arr_0 [i_3]) : 222);

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_27 = ((((!((max(1, var_17)))))));
            arr_15 [i_3] [i_4] [i_3] = ((!(arr_1 [i_3])));
            var_28 = -var_5;
        }
    }
    var_29 = -var_13;
    #pragma endscop
}
