/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (max(((((((var_6 << (((arr_2 [i_0]) - 7786))))) || -var_8))), ((var_7 - ((-(arr_0 [i_0] [4])))))));
        arr_5 [i_0] [i_0] = (((((var_14 ? (arr_0 [0] [i_0]) : (arr_1 [i_0])))) ? 3965802395 : (arr_1 [2])));
        arr_6 [i_0] = (!(arr_2 [i_0]));
        var_18 = (max(var_18, ((((var_10 + var_4) | (((!(arr_2 [i_0])))))))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            var_19 &= ((-(((((var_2 + 2147483647) << var_8)) % (~var_16)))));
            var_20 = (min(var_20, (((((!((min((arr_9 [i_2] [i_1]), 4294967271))))) ? (arr_1 [7]) : (arr_11 [i_1 + 3] [9]))))));
        }

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_14 [i_1] [i_1] [i_1] = ((!(((arr_0 [i_1] [i_1 - 2]) != (arr_0 [7] [i_1 + 2])))));
            arr_15 [11] [i_1] = var_13;
            arr_16 [i_1] [13] [i_1 - 1] = ((((max(3138572954955566080, 2097151)) != var_1)) || ((!(13877672356814071028 / var_7))));
        }
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            arr_21 [6] [i_4 - 1] [6] &= ((((-(arr_9 [i_4 + 1] [i_4]))) * (((((max(var_15, var_2))) ? 15308171118753985561 : var_15)))));
            arr_22 [i_1] [i_4 + 1] = (!var_15);
            var_21 = var_12;
        }
        var_22 = (((arr_2 [i_1 + 1]) - ((((((arr_0 [i_1] [5]) ? (arr_11 [i_1] [11]) : 2097131))) + ((var_8 ? (arr_19 [i_1] [i_1]) : var_5))))));
    }
    var_23 = (1 | -611447573);
    var_24 = (var_0 || var_8);
    #pragma endscop
}
