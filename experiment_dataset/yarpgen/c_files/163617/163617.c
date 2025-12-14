/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = ((((max(var_0, (arr_5 [i_2] [i_2 + 1] [i_1 - 1] [i_0 + 2])))) ? -var_5 : ((1 ? 0 : 1))));
                    var_11 = (min(var_11, ((!(((((var_4 ? var_9 : var_1)) % 9270)))))));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_12 = (((((arr_5 [i_0] [i_2 - 1] [i_2] [12]) - (arr_5 [i_2] [i_2 + 1] [i_3 + 1] [i_2]))) + (!-var_6)));
                        arr_11 [i_0] [i_1 + 1] [i_0] = ((-(((var_5 ? var_3 : var_4)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
