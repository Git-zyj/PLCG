/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((255 << (((((~var_8) + 854683702)) - 22))));
    var_11 = (max((((0 - (max(674825893, var_4))))), ((var_1 ? var_5 : var_2))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_12 |= max(0, ((min(var_8, ((1 ? 21 : (arr_0 [i_0] [i_0])))))));
        arr_3 [8] [8] = (((arr_2 [i_0]) && -255));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_13 = 1;
        var_14 = (((arr_0 [i_1] [i_1]) != ((3997467153 ? (arr_1 [i_1]) : (arr_1 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] |= (~(1 / 2147483647));
        var_15 = -6183333116298861824;
        var_16 &= (max((max(0, (arr_2 [i_2]))), (((arr_2 [i_2]) ? (arr_2 [i_2]) : 4243666157))));
    }
    var_17 = 1;
    #pragma endscop
}
