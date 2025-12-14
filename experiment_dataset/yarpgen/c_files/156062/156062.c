/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-5425976455909978075 < -var_7);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = 0;
                    var_21 += ((((((var_8 ? var_5 : var_18)) < (29646 < var_12))) ? 1 : (((-8 ? 85 : var_19)))));
                }
            }
        }
    }
    var_22 = 85;
    #pragma endscop
}
