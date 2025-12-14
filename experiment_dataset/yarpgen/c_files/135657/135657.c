/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((var_9 ? (~var_12) : var_7)), var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_0] = (!12185);
                    var_19 = (max(-20168, 2104323685));
                    var_20 = (arr_2 [i_2] [i_0] [i_2 - 3]);
                    arr_7 [i_0] [i_1] [i_0] = var_11;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_21 = (min(var_21, (!18446744073709551594)));
                var_22 = (!-19020);
            }
        }
    }
    var_23 = ((var_8 ? (0 - 16769024) : var_5));
    #pragma endscop
}
