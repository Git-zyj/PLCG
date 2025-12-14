/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = ((~(max((arr_2 [i_0]), (arr_0 [i_0] [i_0])))));
        arr_4 [i_0] [i_0] = ((var_9 ? ((((arr_1 [i_0]) != (arr_1 [i_0])))) : (arr_0 [i_0] [i_0])));

        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            var_11 = (min(var_11, (((((((((var_8 ? var_7 : var_9))) ? (((arr_0 [i_0] [1]) | var_2)) : 1889646894070697526))) ? (((((arr_2 [9]) != 0)) ? 18446744073709551615 : (((max(65535, 1)))))) : ((((var_8 != var_5) ? -949054726 : (((arr_5 [i_0] [i_0] [i_0]) * 1073741823))))))))));
            var_12 = min((((((arr_5 [i_1] [8] [8]) >> (arr_1 [i_0]))))), ((~(arr_5 [i_1 - 3] [i_1 + 1] [i_1 - 1]))));
            arr_7 [i_0] = (max((arr_6 [i_1 - 4] [i_1]), var_1));
            arr_8 [i_0] [i_0] [i_1 - 1] = var_2;
        }
        var_13 = (((((((arr_6 [i_0] [8]) && (-2147483647 - 1))))) ? (((arr_1 [i_0]) ? 1073741823 : (arr_1 [i_0]))) : var_4));
    }
    var_14 |= ((((min((var_4 / 65535), var_9))) ? ((-49951904 ^ ((708931191366251762 ? var_2 : var_5)))) : (((var_8 || 51) ? (min(var_8, var_9)) : (var_9 || var_9)))));
    var_15 &= (((((max(var_9, -23156)) ? var_6 : ((var_1 ? var_1 : var_9))))));
    var_16 = var_3;
    #pragma endscop
}
