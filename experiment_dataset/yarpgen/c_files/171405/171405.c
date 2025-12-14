/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = ((max((((-1140484807 > (arr_1 [i_1]))), -1140484813))));
                arr_4 [8] [i_1] [i_0] = (max(var_6, ((-1140484820 ? 2147483647 : -30341))));
                var_15 = (max((arr_2 [i_1]), (((arr_2 [i_0 - 3]) & var_3))));
            }
        }
    }
    #pragma endscop
}
