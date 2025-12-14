/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= 98;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, var_9));
                    arr_7 [i_0] [i_1] [i_0] = (((arr_5 [i_0 - 2]) && (~-98)));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = (((((((var_4 ? var_0 : var_5))) ? (max(var_11, var_5)) : var_11)) >> ((((arr_6 [i_0] [i_1] [i_2]) || -90)))));
                    var_16 -= (((min((max((arr_2 [i_0] [i_0] [i_2]), var_3)), 89)) >= var_1));
                }
            }
        }
    }
    var_17 *= 98;
    #pragma endscop
}
