/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += 87;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 ^= ((+(((arr_2 [i_0 - 1] [i_0 - 1]) ? (arr_2 [i_0 - 1] [i_0 - 1]) : var_8))));
        arr_3 [i_0] = (((arr_2 [18] [i_0 - 1]) < (((arr_2 [1] [i_0 - 1]) ? (arr_2 [i_0] [i_0 - 1]) : (arr_2 [14] [i_0 - 1])))));
        var_13 = ((~((~((~(arr_1 [i_0])))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_6 [16] [i_0] = var_4;
            arr_7 [i_0] = (max(var_4, ((((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_1 [i_1]))))));
            arr_8 [10] [i_0] [i_1] = 65526;
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_13 [i_0] = ((((~(var_1 & 15899543818852538854))) * (((~(arr_0 [i_0 - 1] [i_0 - 1]))))));
            arr_14 [i_0] [i_2] [i_0] = (arr_10 [i_2] [i_0 - 1]);
            var_14 = (max(248, 30497));
        }
    }
    #pragma endscop
}
