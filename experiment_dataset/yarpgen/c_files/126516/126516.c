/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_20 += (((max((arr_0 [1]), (arr_0 [i_1 + 2])))) ? ((~((var_15 ? var_15 : var_0)))) : ((((arr_2 [16]) ? ((((arr_1 [i_0] [i_1 + 2]) ? (arr_1 [i_0] [i_1]) : var_12))) : ((var_19 ? (arr_3 [i_1 + 2] [i_1 + 2]) : var_13))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = ((-(((arr_8 [0] [i_2] [i_2 + 1] [i_1]) ? (arr_8 [i_2 - 1] [i_2] [i_2 - 1] [i_1]) : (arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_1])))));
                            var_22 = (min(var_22, ((max(67, 1)))));
                        }
                    }
                }
            }
        }
    }
    var_23 = ((1 ? 1 : var_10));
    var_24 = ((((((var_15 ? var_18 : var_6))) ? -var_1 : var_3)));

    for (int i_4 = 4; i_4 < 19;i_4 += 1)
    {
        var_25 = (min((min(var_12, (arr_2 [i_4]))), (arr_2 [i_4])));
        arr_12 [i_4] = (((((165 ? 67 : 253))) - var_9));
        var_26 = var_0;
    }
    var_27 = var_10;
    #pragma endscop
}
