/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((!(!254)));
        arr_3 [i_0] = ((+(((var_6 - 2) ? ((254 ? var_5 : var_5)) : var_2))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = 2571;
                    arr_11 [i_2] [i_2] [i_1] [i_2] = (4294967294 ^ 12);
                }
            }
        }
    }
    var_20 = var_15;
    #pragma endscop
}
