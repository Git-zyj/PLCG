/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_15 = (min((var_5 + var_6), (arr_6 [i_0 + 1])));
                        var_16 = (min(var_16, ((((max(((var_9 | (arr_9 [i_2]))), (var_13 & var_7))) % var_11)))));
                    }
                    arr_13 [i_1] [i_2] [i_1] = (~var_1);
                }
            }
        }
    }
    var_17 &= var_5;
    var_18 = var_3;
    var_19 = var_13;
    #pragma endscop
}
