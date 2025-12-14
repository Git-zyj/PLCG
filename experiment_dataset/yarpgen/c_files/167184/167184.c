/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_0 | 2147483647) ? var_9 : ((var_7 ? var_7 : var_6))))) ? var_4 : var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = (((max((((arr_6 [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_1] [i_0] [i_0]) : (arr_7 [i_0] [i_1] [i_1] [i_0]))), var_6))) || (((~(((-2147483647 - 1) ? 2147483630 : (arr_0 [i_0])))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_12 -= (arr_0 [0]);
                        arr_12 [i_0] [i_1] [i_1 - 2] [i_0] = (~var_8);
                    }
                }
            }
        }
    }
    var_13 = var_3;
    #pragma endscop
}
