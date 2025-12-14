/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((-(min(var_12, (min(var_11, var_13))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [1] = ((min(var_11, var_6)));
        var_15 = ((min((max(var_9, var_10)), var_5)));
        arr_3 [i_0] = var_5;
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_15 [i_1] [i_1] [i_1] [i_4] [i_4] = min((min(var_2, var_5)), (~var_6));
                            arr_16 [i_1] [i_2] [i_2] [i_2] [i_2] [i_1] = var_7;
                        }
                        arr_17 [8] [i_1] [21] [i_1] [i_1] = (((~(min(var_5, var_5)))));
                        arr_18 [1] [1] [i_1] [i_1] [i_1] = (min(var_4, ((var_0 ? var_10 : var_6))));
                    }
                    var_16 = ((+(min((((-2147483647 - 1) ^ 288230376151710720)), (var_1 & var_2)))));
                }
            }
        }
    }
    var_17 = ((min(var_2, var_0)));
    var_18 = var_11;
    #pragma endscop
}
