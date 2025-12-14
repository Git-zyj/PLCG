/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 += ((~(min(191, (((arr_0 [i_0]) ? 65 : 69))))));
                arr_5 [i_0] [i_0] = (max(var_2, ((((!(arr_0 [i_0])))))));
            }
        }
    }
    var_21 += var_12;
    #pragma endscop
}
