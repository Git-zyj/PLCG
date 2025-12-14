/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (min(var_18, var_17));
                    arr_8 [i_0] = 7;
                    var_22 &= (((((var_9 ? ((-8 ? 7 : var_2)) : var_5))) ? var_3 : 1));
                    var_23 = (max(var_23, 0));
                }
            }
        }
    }
    var_24 = (max(var_24, 0));
    #pragma endscop
}
