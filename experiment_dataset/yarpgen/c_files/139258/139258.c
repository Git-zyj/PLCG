/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = var_7;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_13 = (63 | 3120317882);
        var_14 = (max(var_14, 0));
        var_15 = (max(var_15, (((~(arr_0 [i_0] [i_0]))))));
        var_16 = ((min(var_7, var_6)));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_17 = (max(var_17, (((-(min(4294967290, 0)))))));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_18 = ((((var_5 && ((((arr_5 [9]) ? (arr_4 [i_1] [i_1]) : var_9))))) ? (arr_1 [4] [18]) : (arr_3 [i_1 + 1])));
            arr_8 [i_2] [i_2] = ((-((((arr_1 [i_1 - 2] [6]) <= 112)))));
            var_19 = (1612922808880601876 * var_10);
        }
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        var_20 = (min(var_20, ((min((((arr_12 [i_3 + 1]) - (arr_12 [i_3 + 1]))), (arr_12 [i_3 + 1]))))));

        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 19;i_6 += 1)
                {
                    {
                        var_21 = (2147483628 | (arr_17 [i_4] [i_5] [i_5]));
                        var_22 = ((!(arr_16 [i_3] [i_3 + 1] [i_6 - 4])));
                        var_23 = (max(var_23, var_2));
                    }
                }
            }
            var_24 = (max(var_24, (((((((!(arr_21 [i_3 + 1] [i_4] [2] [i_4 + 2]))))) <= (arr_11 [1]))))));
            var_25 &= 0;
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_26 += ((((((arr_9 [i_7] [14]) > 1174649414))) + (arr_9 [i_7] [10])));
        arr_25 [i_7] = (min(((((-15583 + 2147483647) >> (((arr_0 [i_7] [i_7]) - 6211283991372930017))))), ((var_10 ? 16383 : (arr_0 [i_7] [i_7])))));
    }
    var_27 = (((((var_0 && var_9) ? (var_3 % var_0) : var_9))) || ((min(((var_9 ? 12305 : 0)), var_0))));
    #pragma endscop
}
