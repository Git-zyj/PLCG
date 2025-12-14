/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((min(((((((var_3 ? var_0 : var_8))) ? (73 * 0) : (var_6 / var_0)))), (-74 / 12156331368854430086))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_4 [i_1] = (((((arr_2 [i_1] [i_0] [i_0]) ? 15407 : (((arr_0 [i_0] [i_0]) * (arr_3 [i_0] [i_1] [8]))))) * (min(621762590, (((arr_0 [10] [10]) * 0))))));
            var_11 ^= (arr_1 [i_1]);
        }
        var_12 |= (arr_3 [i_0] [i_0] [i_0]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_13 = (((((389475965 || -4003) && ((16 && (arr_6 [i_2]))))) || (arr_5 [i_2])));
        var_14 = (min((((((arr_5 [i_2]) & (arr_6 [9]))) / ((((-1509345504 > (arr_5 [i_2]))))))), ((((arr_5 [i_2]) != (arr_5 [i_2]))))));
    }
    #pragma endscop
}
