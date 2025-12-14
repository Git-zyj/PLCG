/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = var_5;
    var_16 = (min(33906, 1533931183));
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((4299665527865748602 * ((((((arr_2 [i_0]) ? 0 : 1533931183)) >> (-1533931183 - 61))))));
        var_18 = var_6;
        arr_4 [i_0] = 1551274954793289426;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 = (min((min((arr_5 [i_1] [i_1]), (((var_1 >> (-1533931184 + 1533931215)))))), ((1551274954793289426 >> (8182705993236416491 - 8182705993236416445)))));
        arr_7 [i_1] = (arr_5 [i_1] [i_1]);

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_20 *= (((((169 ? 79 : 96))) ? 6 : -12));
            arr_10 [i_2] = (min(((((max(var_3, 1835008))) ? 1 : ((min(1, 1))))), (((!((min((arr_9 [i_1]), 18446744073709551610))))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_21 |= ((-1533931184 ? (24 ^ 3739579803) : (arr_11 [i_4] [i_3] [i_1])));
                arr_16 [i_1] [5] [i_4] = (((((14 ? 16832 : 12996))) ? (-2147483647 - 1) : (1587611970 / var_12)));
                arr_17 [i_3] [1] [i_3] [i_1] = (((arr_5 [10] [i_4]) ? 576460683583946752 : (arr_9 [i_4])));
            }
            var_22 = (12775455205442858318 < 101);
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_20 [i_5] = (arr_19 [i_5]);
        arr_21 [i_5] [12] = ((var_5 * (3 / -8237059941305229111)));
        var_23 = (((8908471693459633669 ^ 1551274954793289432) ? ((((arr_19 [i_5]) != var_0))) : (arr_18 [i_5] [17])));
        var_24 = 235;
    }
    #pragma endscop
}
