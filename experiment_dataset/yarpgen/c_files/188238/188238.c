/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_20 &= (((((-(((23428 == (arr_1 [14]))))))) ? ((~(arr_1 [i_0 + 2]))) : var_13));
        arr_3 [i_0 - 2] [i_0] = (((arr_1 [7]) < (85976468 ^ 9298)));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] [i_1 - 3] |= (min(var_10, var_15));
                        var_21 = (arr_2 [i_1 - 1] [i_1 + 1]);

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_15 [i_1] [i_3] = var_0;
                            arr_16 [i_0 - 2] [i_0 - 2] [i_2] [i_3] = arr_7 [i_1 - 1];
                        }
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            arr_19 [i_2] [i_2 + 1] [i_0] [i_3] [i_3] = (max((min(2364990478, (arr_5 [i_5 - 1]))), (arr_2 [i_5] [i_0])));
                            arr_20 [i_3] [i_3] [i_2] [i_1] [i_3] = (min(((var_12 ? -1225627622 : var_14)), ((((arr_14 [i_0 + 1] [i_0 + 2] [i_0 + 1] [4]) && (arr_14 [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 2]))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_22 = (((((1890533038 ? var_0 : 1))) ? ((((~(arr_8 [12]))) | (((var_0 ? var_13 : -23429))))) : (27125 && var_1)));
        var_23 = (((((arr_12 [i_6] [i_6] [i_6] [i_6]) ? (((var_3 ? 1064083754 : 1064083753))) : -4174481988)) & var_2));
    }
    #pragma endscop
}
