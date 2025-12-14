/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_0] &= -1005674858;
                    var_20 = (-var_12 | 5);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 23;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_3] [i_3] = (((max(var_16, (~var_2))) % (~var_7)));
                var_21 = var_12;
                arr_15 [i_3] = 4320141837084843646;
                var_22 = (min(var_22, ((min((max(7986, var_2)), 247)))));
            }
        }
    }
    #pragma endscop
}
