/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_10 ^= (var_5 + var_0);

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_11 += (max((max((~var_8), var_6)), (1 & var_3)));
            arr_5 [i_0] [i_1 + 3] [i_0] = ((!((max(((min(var_4, var_0))), 1048258082)))));
            arr_6 [1] &= 6785;
            var_12 = (-(max(((min(var_0, var_1))), (max(var_3, var_6)))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_13 = ((!(((min(var_8, var_3))))));
            var_14 = -893631746953535978;
        }
    }
    var_15 = var_8;
    var_16 *= -var_2;

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_17 = ((min(var_5, var_9)));

        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            arr_14 [i_4] [i_4] = (((!(var_6 & var_9))));
            arr_15 [i_4 - 2] [i_4] [i_3] = (min((1 != -163), ((-(var_7 != var_8)))));
            var_18 *= ((var_5 % ((~(var_0 / var_5)))));
        }
    }

    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = (min(179, (min(-var_8, 0))));
        arr_19 [i_5] = (~((~(var_0 || var_3))));
    }
    #pragma endscop
}
