/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_2;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_15 = (max(var_15, ((max((arr_4 [i_2]), (arr_4 [i_3]))))));
                        var_16 = ((var_10 ? (arr_1 [17] [i_0]) : (max((arr_2 [i_0]), 142))));
                    }
                    arr_10 [4] [i_0] [4] &= ((((((var_3 ? 87 : var_7))) || (arr_4 [i_0 - 2]))));
                }
            }
        }
    }
    #pragma endscop
}
