/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((!69) != var_9))) % var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_2 + 2] = var_11;
                    var_14 &= (((((((min(4294967279, 55))) ? var_12 : var_11))) ? ((-481985650 ? -285958219 : var_6)) : -2147483640));
                    arr_12 [i_0] [i_1] [i_2] [i_2] = ((!((min(var_2, var_8)))));
                    var_15 = (min((3454555677 % 20), (8191 - 38)));
                }
            }
        }
    }
    var_16 = (max((!var_1), (((var_6 | 14) ^ (!121)))));
    #pragma endscop
}
