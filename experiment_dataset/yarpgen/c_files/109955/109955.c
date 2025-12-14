/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_1] = 231;
                    var_12 = (max(var_12, ((((((var_4 && 924392866640385948) <= 31)) ? var_7 : var_4)))));
                    var_13 ^= (min(var_5, (min(1, var_6))));
                }
            }
        }
    }
    var_14 &= 24502;
    #pragma endscop
}
