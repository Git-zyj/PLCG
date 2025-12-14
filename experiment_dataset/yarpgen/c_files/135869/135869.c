/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max((max(var_0, var_4)), (((-127 - 1) + 24185))))) || (~13288)));
    var_11 = (max((21291 & -7276519918433664384), 164));
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_0] = (arr_4 [5]);
                var_13 += (max((arr_0 [i_1]), (min((arr_5 [i_0] [9] [i_1]), (max((arr_4 [8]), (arr_3 [6])))))));
            }
        }
    }
    #pragma endscop
}
