/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((-((var_1 ? 0 : -var_7))));
    var_13 = var_3;
    var_14 &= var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (((arr_2 [i_1]) <= var_7));
                    var_16 = (-5153 > var_6);
                }
            }
        }
    }
    #pragma endscop
}
