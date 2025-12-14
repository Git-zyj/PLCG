/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 2093243628;
    var_12 = ((2201723667 ? -var_10 : var_3));
    var_13 = ((!((max((var_1 ^ var_3), var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((((arr_3 [i_1] [i_1]) ? ((-(2093243643 - 1392096033))) : var_2)))));
                arr_6 [i_0] [i_0] [i_1] = (((!var_7) && var_4));
            }
        }
    }
    #pragma endscop
}
