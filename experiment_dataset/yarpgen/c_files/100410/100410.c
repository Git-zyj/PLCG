/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = (min((((arr_2 [i_0 + 3]) != 3506504285)), ((((max(var_5, var_10))) || ((!(arr_2 [i_0])))))));
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
        arr_5 [i_0] = 593194127565130479;
        arr_6 [i_0] = (max(((((arr_2 [i_0 - 4]) ? ((-(arr_1 [i_0]))) : var_8))), (max((arr_0 [10]), (((5 ? 181 : 5)))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_12 += (((((max((arr_10 [i_0 + 3] [i_0 - 2] [i_1 - 1] [i_1]), 0)))) + ((var_5 ? 0 : (arr_0 [i_0 - 3])))));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = var_9;
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        var_13 = (min(var_13, var_8));
        arr_17 [i_4] [i_4 - 1] = (arr_13 [i_4 + 1] [4] [i_4 + 1]);
        arr_18 [i_4] [i_4] = 205198613;
    }
    var_14 = (var_5 ? var_11 : ((((var_11 ? var_6 : var_1)) >> (((~var_6) + 34135)))));
    #pragma endscop
}
