/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0]) * (arr_0 [i_0] [9])))) % var_6));
        var_10 = arr_1 [i_0];

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_11 = ((~(((max(var_5, var_3)) & (arr_4 [4] [i_1])))));
            var_12 ^= ((~(((var_2 % -32617) ? var_6 : var_9))));
            arr_6 [6] = ((!(~var_6)));
        }
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        arr_9 [i_2] = var_6;
        var_13 ^= (max((arr_8 [i_2] [i_2 + 2]), (arr_7 [i_2 + 1])));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_14 ^= ((~((((var_4 % (arr_11 [i_3]))) << ((((var_9 << (((arr_10 [i_3]) - 49372)))) - 14021272568257708029))))));
        arr_13 [i_3] [i_3] = ((21726 < -32617) % (arr_12 [8] [i_3]));
    }
    var_15 = (((((-var_8 > (var_5 != var_8)))) + var_2));
    #pragma endscop
}
