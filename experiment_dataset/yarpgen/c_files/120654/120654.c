/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_8));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = (min((arr_5 [i_1] [i_0] [i_0]), (max((((!(arr_3 [i_0] [i_0])))), (max(65521, 65529))))));
                arr_9 [i_0] [7] = ((-0 < (~1)));
            }
        }
    }
    var_15 = ((var_4 ? ((max(18, ((min(var_1, var_11)))))) : ((-(var_2 + var_8)))));
    #pragma endscop
}
