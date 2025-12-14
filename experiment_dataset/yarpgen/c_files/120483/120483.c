/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((!var_14) & var_4)), ((((min(20, var_16))) * 25))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_1] &= var_6;
                    var_21 = (max(var_21, ((min((min(11, 16663342758611137879)), (arr_5 [i_0] [i_2 + 1] [i_2 + 3]))))));
                }
            }
        }
    }
    #pragma endscop
}
