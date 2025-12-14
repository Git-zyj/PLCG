/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_17 = 0;
        var_18 = 101815636;
    }
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            {
                var_20 = var_13;
                var_21 = arr_1 [i_2] [i_1];
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_22 = max((arr_1 [i_1] [6]), (min(4294967295, 15)));
                            var_23 = min(var_1, ((-(arr_11 [i_1] [i_2] [i_3] [i_1]))));
                            var_24 = (1448280919 < 4294967295);
                        }
                    }
                }
            }
        }
    }
    var_25 = (((max(((var_9 ? var_12 : var_1)), var_15))) ? (0 == 2) : ((((!((max(16, 3253654873))))))));
    #pragma endscop
}
