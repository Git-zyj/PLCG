/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max(var_0, var_7)) == (((96 ? 255 : var_2)))));
    var_14 = ((-776719795792571298 + (((var_10 ? -5 : var_11)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] |= (arr_2 [i_0]);
        var_15 = (max(var_15, (min(45, var_1))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_16 = var_5;
                    arr_16 [4] [i_2] [9] [9] &= ((((((min(-15099, -776719795792571298))) ? (arr_10 [i_1] [i_2] [i_1]) : (~-14))) | (max((((arr_11 [i_1]) | 0)), ((159 ? 25 : var_5))))));
                    var_17 = (min(var_17, (((var_10 ? ((min((max(15085, 15098)), (arr_10 [i_2 + 1] [i_2 - 1] [i_2 - 1])))) : (arr_9 [i_3] [i_2] [i_1]))))));
                    var_18 = var_11;
                    arr_17 [18] [i_3] [i_1] [18] = (((13 > -15085) < (((arr_15 [i_1] [i_1] [i_1]) ? var_1 : (arr_4 [i_2 - 1])))));
                }
            }
        }
        arr_18 [7] [i_1] = ((((((((arr_8 [8]) > 32763)) ? (((arr_8 [i_1]) ? -12325 : var_2)) : (var_8 < var_1)))) || (((~(arr_6 [i_1]))))));
        arr_19 [i_1] = var_6;
        arr_20 [i_1] = (((var_11 ? -20797 : (arr_8 [i_1]))));
    }
    #pragma endscop
}
