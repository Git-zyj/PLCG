/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((min(var_2, var_12)))));
    var_17 = ((((min(var_15, -1423128483))) ? var_5 : var_6));
    var_18 -= ((-var_4 + ((((var_7 | 7461964149840517637) ? var_3 : ((max(var_15, -12))))))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_4 [1] [i_0 + 1] = ((max(0, (arr_1 [i_0 + 1]))));
        arr_5 [i_0] [i_0] = -8;
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (var_8 <= (min((38 / 1423128472), (min(var_12, 0)))));
        arr_9 [i_1 + 1] [i_1 - 1] = (arr_6 [i_1]);
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_19 = ((((((max(var_1, 0))) & (arr_7 [i_2 - 2] [i_2 - 2]))) << (((-1423128455 / var_8) ? ((min(1, 1))) : (var_10 != var_6)))));
        arr_12 [i_2 + 1] [3] = ((((((min((arr_2 [i_2]), (arr_11 [i_2])))) & -279071933)) & (((min((arr_0 [i_2] [1]), (arr_10 [i_2 - 1])))))));
        var_20 = (max(var_20, (arr_0 [0] [10])));
    }
    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        arr_16 [i_3] = arr_3 [i_3 - 3] [i_3];
        arr_17 [i_3] = (max((arr_3 [i_3] [i_3 - 2]), 33));
    }
    var_21 = (max(var_21, ((max(var_9, var_11)))));
    #pragma endscop
}
