/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!-218);

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    arr_10 [i_0] [1] [8] [i_0] = (min(((var_0 ? (!var_12) : (min((arr_7 [i_0] [9] [i_2] [i_2]), var_7)))), (((((min(185, var_13))) == (var_9 & var_6))))));
                    var_16 = 1;
                    var_17 = (((!(arr_7 [i_2 + 1] [i_2 - 2] [6] [0]))) && (min(var_11, 1)));
                }
            }
        }
        arr_11 [i_0] = arr_0 [i_0];
        var_18 = ((~(arr_5 [i_0])));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_18 [i_4] [i_4] [i_3] [i_4] = (((0 != (arr_9 [i_3] [i_4] [i_4] [i_4]))));
                    arr_19 [i_4] [i_4] [i_5] [i_3] = var_8;
                }
            }
        }
        var_19 = (min((arr_16 [i_3] [i_3] [0]), ((~((var_7 ? var_10 : 1))))));
        arr_20 [i_3] [i_3] = var_11;
        arr_21 [i_3] = 1;
    }
    var_20 = (min(var_20, ((min((((var_10 & var_7) ? ((0 ? var_10 : var_2)) : -var_4)), var_2)))));
    #pragma endscop
}
