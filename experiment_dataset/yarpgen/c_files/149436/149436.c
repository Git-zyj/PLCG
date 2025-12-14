/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_18 = ((min(((37372 ? 2640816245 : 659633228)), (arr_0 [i_0 - 1]))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {
            var_19 = (!var_10);
            arr_6 [i_0] [i_0] [i_0 - 1] = (min((((~((min(var_0, 255)))))), (min(((min(var_14, var_0))), var_7))));
            arr_7 [i_0] [i_0] = (min((min((arr_2 [i_0]), (arr_2 [i_0]))), var_4));
            var_20 = var_15;
            var_21 = ((((-((var_1 ? 2640816260 : var_7))))) ? (arr_3 [i_0] [i_0] [4]) : (min((min(var_16, var_1)), (((var_7 == (arr_5 [i_0] [i_0] [i_1])))))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_22 = max(5040636439709356167, (((((((arr_9 [i_0]) ? (arr_0 [i_2]) : 1))) ? (min((arr_5 [i_0] [1] [i_2]), var_8)) : var_6))));
            var_23 = var_8;
            var_24 = 65297;
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_12 [i_0] [i_3] [i_3] = var_10;
            var_25 = 253571896;
        }
        arr_13 [i_0] = (!(((var_11 & (((12288 ? 7727050583078215651 : 255)))))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_26 = ((2361671311 ? ((((min(213, var_10))) ? ((max(253, var_16))) : (min(var_11, (arr_14 [i_4]))))) : ((((!(((9376802595012983112 ? 65277 : 64)))))))));
        var_27 = 1;
    }
    var_28 = (min((((max(1, 1)))), ((((max(var_7, 1654151052))) ? ((var_11 ? var_7 : var_10)) : (((var_8 ? var_15 : var_12)))))));
    var_29 = var_12;
    #pragma endscop
}
