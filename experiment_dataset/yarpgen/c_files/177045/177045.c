/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_10 = var_9;
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (((arr_2 [i_1]) / ((-16231826347990932482 ? (max(-610928001, (arr_6 [i_2]))) : var_0))));
                }
            }
        }
    }
    var_11 = (var_4 < 252);
    #pragma endscop
}
