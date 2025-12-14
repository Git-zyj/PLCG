/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_8));
    var_12 = (min(var_12, (((10545505564100171654 ? -85 : 12320871832483319572)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = 4611686018427387902;
                arr_5 [i_0 - 1] [i_1 - 1] [i_0 - 1] = ((+((-var_10 ? (((arr_3 [i_0 - 1] [i_1 - 4]) ? (arr_2 [i_0 - 1]) : var_9)) : 11))));
            }
        }
    }
    #pragma endscop
}
