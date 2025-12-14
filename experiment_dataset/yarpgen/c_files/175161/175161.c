/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_8;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_20 *= 21037;
            var_21 = (max(var_21, (max(((~(max((arr_0 [i_0]), 21037)))), ((((arr_2 [i_0] [i_0]) ? var_7 : ((var_16 ? (arr_2 [i_0] [i_1]) : var_16)))))))));
            var_22 = (min(-21023, 19));
        }
        arr_4 [5] = (247 >= -8);
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_23 *= ((-(max((arr_3 [i_2] [i_2] [i_2]), (((~(arr_1 [17]))))))));
        arr_8 [i_2] = ((3209 || (arr_5 [i_2])));
        arr_9 [i_2] = ((((((max(var_4, 14515450767944003662)) / ((max(var_15, var_18)))))) ? (min(var_11, (var_7 & var_10))) : (min((min(var_17, (arr_1 [i_2]))), ((max(8747, -28963)))))));
    }
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        arr_12 [i_3] = ((var_10 >> (~-7)));
        var_24 &= (~0);
        arr_13 [i_3] = (((min((arr_11 [i_3]), ((var_8 - (arr_3 [2] [i_3 + 1] [0]))))) + ((max(((min(2147483647, (arr_2 [i_3] [i_3])))), (max((arr_2 [i_3] [i_3]), var_15)))))));
    }
    #pragma endscop
}
