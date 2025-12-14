/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((var_9 >> (((max(var_1, ((var_6 ? var_9 : var_0)))) - 4211))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((((max((((arr_4 [14] [20] [i_0]) ? -1 : 192)), (((var_3 || (arr_3 [i_0] [14] [i_0])))))) != (((~((min(24, 41)))))))))));
                    var_14 = var_8;
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (arr_2 [i_1] [i_1] [i_1]);
                }
            }
        }
    }
    var_15 = var_4;
    #pragma endscop
}
