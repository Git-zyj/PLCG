/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((~-121) ? var_3 : ((((var_10 != (~var_2)))))))));
    var_18 = 120;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] |= 229;
                    var_19 = (max(var_19, var_15));
                    arr_9 [i_2] [i_2] [i_1] [i_2] = (min(var_8, var_12));
                }
            }
        }
    }
    #pragma endscop
}
