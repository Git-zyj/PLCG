/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 &= ((var_3 >= (max(224, (max(var_2, 9223372036854775807))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((max(var_5, 14853079051821586543)) <= ((((arr_0 [i_0]) & (arr_1 [i_0]))))))) ^ (max((arr_0 [i_0]), (((var_7 + 2147483647) >> (4294967295 - 4294967284)))))));
        var_13 = (max(var_13, (((8796084633600 << (((max(var_3, (((-4286624478217295905 + 9223372036854775807) << (((-2245 + 2301) - 56)))))) - 4936747558637479889)))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_14 -= (!((((-127 * var_7) % (~-21967)))));
                        arr_13 [12] [i_1] = (i_1 % 2 == zero) ? (min((min(((min(4665, 34933))), (arr_9 [i_2]))), ((+(((((arr_11 [4] [i_1] [i_1] [i_4] [i_4] [i_3]) + 2147483647)) << (var_9 - 5077126299174437630))))))) : (min((min(((min(4665, 34933))), (arr_9 [i_2]))), ((+(((((((arr_11 [4] [i_1] [i_1] [i_4] [i_4] [i_3]) - 2147483647)) + 2147483647)) << (var_9 - 5077126299174437630)))))));

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_16 [i_4] [i_1] [i_1] [i_4] [i_4] = (arr_10 [i_1] [18] [i_4] [i_1]);
                            arr_17 [i_1] [i_2] [i_3] [i_1] [i_5] [i_5] = arr_0 [i_4];
                            var_15 += (((arr_11 [i_1] [i_2] [i_5] [i_3] [i_4] [i_5]) + (max(8796084633605, 44))));
                            var_16 = (-27946 > 2857820618145114451);
                        }
                    }
                }
            }
        }
        arr_18 [12] &= ((((((((var_0 ? 1312195602 : (arr_15 [16] [16] [i_1] [i_1] [i_1])))) && 16039))) < (((((arr_10 [i_1] [i_1] [i_1] [i_1]) & var_8))))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_17 = (max(var_17, (((((max((arr_20 [i_6]), var_8))) && (arr_5 [i_6]))))));
        var_18 &= (min(((((((-(arr_14 [i_6] [i_6] [0] [i_6])))) && ((((arr_7 [i_6]) ? var_10 : var_6)))))), ((var_2 ? (min(255, 0)) : (min(var_2, 15588923455564437165))))));
        var_19 -= ((~(arr_5 [i_6])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_20 = ((14 ? (arr_15 [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_15 [i_7] [i_7] [i_7] [i_7] [i_7])));
        var_21 = (max(var_21, (arr_8 [i_7])));
    }
    var_22 = (min(var_22, 235));
    #pragma endscop
}
