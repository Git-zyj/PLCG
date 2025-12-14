/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 ? ((((max(var_2, (-2147483647 - 1)))) ? ((var_4 ? var_6 : 241)) : -var_1)) : (var_7 && 2147483647)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1 + 2] [i_2] [i_1 + 2] = (~(arr_7 [i_1] [i_1 - 1] [i_1 + 1]));
                    var_11 = (arr_1 [i_0] [8]);
                    var_12 = ((((arr_7 [i_1] [i_2] [i_1]) ? (arr_2 [i_1 - 1] [i_1] [i_1 - 1]) : (arr_2 [i_1 - 1] [i_1] [i_1 - 1]))) == (arr_2 [i_1 - 1] [i_1] [i_1 - 1]));
                    var_13 = var_1;
                }
            }
        }
    }
    #pragma endscop
}
