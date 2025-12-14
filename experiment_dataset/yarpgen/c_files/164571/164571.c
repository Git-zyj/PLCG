/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max(((8 ? var_11 : -2147483647), (27 >= var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_3 [i_0] [i_0] [1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_3] [i_0] [i_1] = (max(((-449259811 ? 449259810 : 24160)), (((((3 ? 15 : var_5))) ? ((432893163 ? 125 : 21)) : -449259814))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] = (+((((arr_1 [9]) ? (arr_2 [i_2]) : (arr_10 [i_0] [i_0] [i_2] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_13 = ((+((var_9 ? (var_11 < var_10) : (!var_11)))));
    var_14 = var_4;
    var_15 = (((((~(min(var_9, var_4))))) ? (((((449259815 ? 449259824 : -53)) % ((~(-2147483647 - 1)))))) : 7500166055726437548));
    #pragma endscop
}
