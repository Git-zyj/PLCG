/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_12 [i_2] = var_2;
                    var_18 = (min((435008911 == 220), ((((var_1 ? var_14 : var_3)) * (((var_17 ? var_9 : var_14)))))));
                }
            }
        }
    }
    var_19 = var_7;
    var_20 = var_11;
    #pragma endscop
}
