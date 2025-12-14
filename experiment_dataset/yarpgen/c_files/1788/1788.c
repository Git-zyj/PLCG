/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((-(var_5 || var_3)))) - var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = 4294967295;
                    var_16 = (min(var_16, (arr_9 [8] [i_1] [i_1])));
                }
            }
        }
    }
    var_17 = var_12;
    var_18 = min((((min(306740496, var_13)))), var_13);
    var_19 = (!var_8);
    #pragma endscop
}
