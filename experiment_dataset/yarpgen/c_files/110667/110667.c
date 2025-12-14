/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(32155, 0));
    var_15 = (min((min(var_6, -5)), 0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((((((-5 ? var_6 : 1))) ? ((9952 ? var_7 : 5)) : (((var_13 ? -5 : 0)))))))));
                    var_17 &= (min(-5, 6));
                    arr_12 [i_2] [i_0] [i_1 - 1] = ((var_3 ? var_7 : ((((var_13 ? var_2 : -8919466321449259303))))));
                }
            }
        }
    }
    #pragma endscop
}
