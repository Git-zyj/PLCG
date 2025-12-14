/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~((var_7 & (var_8 ^ var_2)))));
    var_15 = (((var_8 ? var_7 : var_12)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_2] [i_2] = var_11;
                    var_16 = var_4;
                }
            }
        }
        var_17 -= var_12;
        var_18 = (max(var_18, ((max(var_10, (((~(min((-127 - 1), var_6))))))))));
        var_19 = ((var_4 ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_0]))) : (min(((var_4 ? 3 : -9)), (~622867095)))));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_20 |= (max(var_7, 153));
        var_21 = (min(((((var_10 == (arr_13 [i_3]))) ? var_4 : (7761336213780155434 == var_6))), ((((arr_12 [i_3]) & var_11)))));
        arr_14 [i_3] [i_3] = var_5;
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_22 = (max((arr_6 [i_4]), var_8));
        var_23 = 63;
        arr_18 [i_4] = ((~var_7) ? 16383 : (arr_1 [i_4]));
    }

    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        arr_23 [i_5] = ((var_7 && (((-(var_4 / var_7))))));
        var_24 = var_0;
        var_25 = ((!((min(((~(arr_4 [i_5 - 1]))), (-1 && var_11))))));
        var_26 = (max(var_26, (((((max(-22, -1))) ^ (-19484 | -1472827049))))));
        var_27 = (min((~-947466947), 1));
    }
    #pragma endscop
}
