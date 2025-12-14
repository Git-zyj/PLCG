/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((((min((min(var_7, 40)), 216))) ? (((((234 ? 216 : (arr_1 [i_0] [1])))) ^ ((-1 ? (arr_2 [i_0] [i_0]) : var_4)))) : (1 || -15)));
        var_10 = min((~12290740106111795482), ((((arr_1 [i_0] [i_0]) == (arr_2 [i_0] [i_0])))));
        var_11 = (min(var_11, (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        var_12 = (min(((13197746131178241493 ? -14 : 1)), ((var_5 ? (arr_1 [i_1 - 1] [i_1]) : (arr_1 [i_1 - 4] [i_1])))));
        arr_6 [1] = (arr_1 [i_1 + 1] [i_1]);
    }
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            var_13 = (min(var_7, (arr_12 [i_3 + 2] [i_2 - 1] [i_2 - 3])));
            var_14 = ((((max((arr_2 [i_2 - 2] [i_3 - 2]), var_0))) ? (arr_2 [i_2 - 3] [i_3 + 2]) : (((arr_2 [i_2 - 1] [i_3 + 1]) - var_6))));
        }
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            var_15 = ((var_4 ? (((arr_12 [i_2] [i_2 - 2] [i_4 - 1]) << 1)) : ((((arr_2 [i_2 - 1] [i_2 + 2]) && var_1)))));
            var_16 = (max(var_16, ((min(((max(((var_4 ? var_9 : -7)), (((arr_15 [1] [i_4] [1]) ? var_5 : (arr_12 [i_4] [i_4] [i_2])))))), (((var_2 / 163) * (arr_8 [i_2 + 1]))))))));
        }
        var_17 = (min((max(8483, 10791561099615298844)), (((var_5 << (((arr_8 [i_2]) + 126)))))));
        var_18 = ((-515567002706066379 ? ((var_0 ? (arr_14 [i_2 - 1] [i_2 - 2]) : (arr_14 [i_2 - 2] [i_2 - 2]))) : var_8));
        arr_16 [i_2 - 2] = var_2;
    }
    var_19 = (min(var_19, (((var_3 ? var_6 : (((var_2 << (((max(var_7, var_3)) - 3271975703197235552))))))))));
    var_20 = (-32767 - 1);
    var_21 = -3992497851976413814;
    var_22 = var_0;
    #pragma endscop
}
