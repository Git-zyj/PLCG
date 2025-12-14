/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) >= (arr_1 [i_0])));
        arr_3 [i_0] &= 947638977;
        var_10 = min((min(1, -809410673)), ((((var_0 ? 809410671 : 0)) / (((arr_1 [i_0]) + (arr_1 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_11 = (((arr_4 [i_1 - 1]) || ((((arr_4 [i_1 - 1]) ? var_1 : (arr_4 [i_1 + 1]))))));
                arr_12 [i_2] [7] [i_1 - 2] [i_2] = ((!((min(var_4, (min(-1391175026, 1391175025)))))));
            }
            arr_13 [i_1] [5] [i_2] = var_2;
            arr_14 [i_2] [i_2] = ((((-var_4 & (min((arr_10 [i_2] [i_2]), (arr_7 [i_2]))))) != (arr_10 [i_2] [i_2])));
        }
        var_12 = -6038705891989768652;
    }
    var_13 |= (!((((((var_1 ? var_0 : var_3))) ? (-2147483647 - 1) : var_4))));

    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_14 = (((((var_0 / (arr_6 [i_4] [9])))) / (min((arr_6 [i_4] [i_4]), 2179640255))));
        var_15 = (max(var_15, (((((((min(-1222487555, 0))) ? (arr_6 [i_4] [i_4]) : (var_3 + var_1))) & ((-((((arr_10 [i_4] [i_4]) == (arr_11 [i_4] [i_4] [i_4])))))))))));
        var_16 *= (((min((var_2 & var_6), ((var_7 ? 2916007452 : 447246960)))) & ((((arr_11 [i_4] [i_4] [i_4]) ? (arr_11 [i_4] [i_4] [i_4]) : (arr_11 [i_4] [i_4] [i_4]))))));
    }
    #pragma endscop
}
