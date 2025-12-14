/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (min(((((62600 ? var_4 : 1703658962136043795)) | ((var_0 ? var_2 : var_10)))), var_13));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_16 = (max(var_16, ((((min((arr_2 [i_0 + 3]), -115))) || (arr_2 [i_0])))));
        var_17 = ((((0 ? 9934 : (arr_1 [i_0] [i_0 + 1])))));
        var_18 ^= var_9;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 *= 78;
        var_20 += (((((var_9 != (arr_4 [i_1] [i_1])))) + (arr_3 [i_1] [i_1])));
        arr_5 [i_1] |= (arr_0 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_10 [i_2] = -1647886822888042478;
        arr_11 [i_2] = ((55716 == ((max((arr_0 [i_2] [i_2]), -1)))));
        arr_12 [i_2] [i_2] = arr_8 [i_2];
        var_21 = ((((119 && var_6) >= (arr_6 [i_2] [i_2]))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_15 [i_3] = (arr_9 [i_3]);
        var_22 = (((-2147041598 + 16382) ? (max((arr_9 [i_3]), 817946307)) : (((arr_9 [i_3]) ? (arr_9 [i_3]) : -5))));

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_23 = (min((arr_3 [i_3] [i_4]), (((arr_17 [i_3]) ? (max(var_6, 18)) : (arr_0 [i_3] [i_3])))));
            var_24 = (((max(-35, 17223128134474376970))) ? (((((-2 ? (arr_6 [18] [i_4]) : var_10))) ? 5692829090934637607 : -8431790347122163032)) : (arr_18 [i_3]));
        }
    }
    var_25 = var_13;
    #pragma endscop
}
