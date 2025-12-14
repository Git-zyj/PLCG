/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(var_7, (((49152 | var_6) ? var_0 : (var_11 | var_1))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_13 = var_2;
        var_14 = (((arr_1 [i_0]) / (arr_0 [i_0 + 4] [i_0 - 2])));
        arr_2 [i_0] = ((((4294967287 + (arr_1 [i_0])))) ? (arr_0 [i_0] [i_0 - 3]) : (arr_1 [i_0]));
        var_15 = (((-(arr_1 [i_0]))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_0] [i_0] = 1292494591574034343;
            var_16 -= ((((((arr_0 [i_1] [i_0]) ? (arr_3 [6]) : var_0))) ? 35 : (arr_0 [i_0 - 3] [i_0])));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_0] [i_0] = ((var_0 ? 1 : (arr_1 [i_0])));
            var_17 ^= (((arr_8 [6]) % (arr_6 [i_0 + 4])));
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_18 = (max(var_18, 17724));
        var_19 = (~57829);
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = (((((arr_14 [i_4] [i_4]) * 103781800)) | (arr_14 [1] [9])));
        arr_17 [i_4] [0] = var_0;
    }
    #pragma endscop
}
