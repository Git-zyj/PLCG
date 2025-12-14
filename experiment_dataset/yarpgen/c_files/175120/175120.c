/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] = (~(arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_13 = ((((((arr_1 [i_1] [i_1]) ? ((min((arr_1 [18] [i_1]), var_4))) : var_2))) != (max(0, 3471892458))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 ^= ((((var_0 || (arr_5 [i_1])))));
            var_15 = (min(((((var_11 ? (arr_5 [i_1]) : (arr_6 [i_2]))) % ((-(arr_6 [i_1]))))), ((((arr_6 [i_1]) && (arr_3 [i_1] [i_1]))))));

            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                var_16 -= (((!var_4) ? (arr_4 [i_1]) : ((((arr_4 [i_3]) || var_5)))));
                var_17 = (min(var_17, var_0));
            }
        }
        var_18 = ((((min(1, 3)) ^ 18446744073709551612)));
        var_19 |= ((((min((arr_1 [i_1] [i_1]), (arr_4 [i_1])))) << (min(1, (var_1 / var_11)))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_20 = ((((0 ^ (arr_9 [i_4] [i_4] [i_4] [i_4]))) & ((((arr_9 [i_4] [i_4] [i_4] [i_4]) ? (arr_8 [i_4] [i_4] [i_4] [i_4]) : var_8)))));
        var_21 = (arr_6 [i_4]);
    }
    var_22 = (min(var_22, (((var_8 || (((((min(var_0, var_8))) / 35328))))))));
    #pragma endscop
}
