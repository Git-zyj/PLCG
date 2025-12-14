/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_12 += (~(((arr_1 [i_1 - 3] [i_1 - 3]) ? (arr_9 [i_1 + 1] [i_3] [i_1 + 1]) : 23900)));
                        var_13 = ((var_0 - (2 || 2)));
                    }
                    arr_11 [9] [i_1] [9] = (((arr_9 [i_0] [i_1] [i_0]) > (max(((30165 ? 31624 : 1)), (((!(arr_2 [i_1] [i_1]))))))));
                    arr_12 [i_1] [i_1] [i_1] = -2874;
                }
            }
        }
    }
    var_14 = ((var_7 ? var_2 : ((((((min(var_6, var_3))) < ((var_1 ? -30165 : var_4))))))));
    var_15 += (!var_6);
    #pragma endscop
}
