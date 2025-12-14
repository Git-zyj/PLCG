/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 = -637686056355348644;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_21 = var_3;

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (((max((((-7620 + 2147483647) << (182 - 182))), 238)) | ((min(-6214, (arr_2 [i_0 - 1] [i_1]))))));
            arr_7 [i_0] [4] &= ((23390 ? var_4 : (arr_4 [i_0] [i_0 + 4] [i_0])));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_10 [i_0] = var_18;
            var_22 = ((((var_18 - (arr_9 [i_0] [i_2] [i_0]))) - -2147483646));
        }
        var_23 = (max((max(4833128617108140563, (arr_2 [i_0 - 1] [i_0 + 1]))), ((min(var_6, (arr_1 [7] [i_0 + 2]))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_24 = (arr_4 [21] [i_3] [i_3]);
        var_25 -= ((~(((var_9 + 2147483647) << (((((arr_9 [i_3] [i_3] [10]) + 16792)) - 14))))));
        arr_13 [13] [i_3] = var_1;
    }
    #pragma endscop
}
