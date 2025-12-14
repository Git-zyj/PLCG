/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 += ((1 ? -95 : 0));
                    var_15 = (((1 ? (arr_2 [i_0]) : ((var_3 ? var_5 : 448)))));
                    arr_8 [i_2] = var_9;
                }
            }
        }
    }
    var_16 = var_12;
    var_17 = (min(((((min(var_12, 131071)) == (var_4 == 1)))), -12145));
    var_18 = (-32767 - 1);
    var_19 = (((min(var_1, var_2))));
    #pragma endscop
}
