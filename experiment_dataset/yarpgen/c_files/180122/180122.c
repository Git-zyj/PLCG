/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((~2) ? (((var_6 ? var_0 : -15975))) : (max(3350773020, 234881024)))) ^ (~-var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] = 3458856555;
                var_11 = (min(var_11, ((((((11 * 0) ? 0 : 3790434908)) / (arr_1 [i_1 + 3]))))));
                var_12 = (~3350773024);
            }
        }
    }
    #pragma endscop
}
