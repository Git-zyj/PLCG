/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_16, (max(((var_9 ? var_5 : var_1)), (var_5 | var_15)))));
    var_18 = (max((max(4294967295, (((var_15 ? var_13 : var_2))))), var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = var_6;
        arr_2 [i_0] = var_7;
        arr_3 [i_0] [i_0] = 4294967290;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [2] [i_0] [i_0] [i_0] = var_3;
                        var_20 = (!var_13);
                    }
                }
            }
        }
    }
    var_21 |= var_10;
    #pragma endscop
}
