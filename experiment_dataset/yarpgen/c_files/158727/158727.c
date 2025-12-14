/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((!var_4) % ((((max(9142, -31985))) ? var_14 : var_15))));
    var_21 = 22;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((~((((var_0 + 123) == 0)))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((((var_6 - (((var_7 % (arr_5 [i_0] [i_1] [i_2] [i_1])))))) % var_10));
                }
            }
        }
    }
    #pragma endscop
}
