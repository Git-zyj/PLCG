/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (max((((-(((arr_2 [i_0]) / 1))))), 0));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_17 = ((1 ? ((((2047 >= (arr_1 [i_0]))) ? (-999974646 / 99) : ((((arr_1 [i_0]) == 237))))) : (arr_4 [i_0])));
            arr_5 [i_0] = max((((((max(var_14, (arr_0 [3] [i_0])))) ? (arr_4 [i_0]) : (arr_3 [i_0])))), (min(2405, 29)));
            arr_6 [2] &= 179;
            var_18 += (((((min(11, (min(6144, (arr_2 [i_0]))))))) == ((((min((arr_0 [i_0] [2]), 2023535232))) ? 4294967295 : (-3313 == 3866163055)))));
        }
        var_19 *= (max((((arr_4 [8]) ? (arr_4 [2]) : (arr_4 [10]))), (min((max(var_9, var_11)), (arr_1 [1])))));
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        arr_10 [i_2] = (max((max((min(var_11, 53)), (arr_1 [i_2]))), ((((-23 ? 11 : var_13))))));
        var_20 = (max(((-(max((arr_8 [i_2]), (arr_0 [i_2] [i_2]))))), ((((arr_3 [i_2 + 2]) ? (arr_3 [i_2 + 1]) : (arr_7 [i_2 - 1]))))));
    }
    #pragma endscop
}
