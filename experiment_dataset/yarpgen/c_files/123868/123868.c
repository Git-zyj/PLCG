/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(!8491598115772389411)));
    var_19 = ((((((var_2 != 9955145957937162205) * var_14))) && var_15));
    var_20 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((9955145957937162205 ? (~3785294581) : (min(-5991506248943428433, (arr_3 [1] [i_1 - 1] [i_1])))));
                arr_5 [i_1] [i_1] = (min((((!(arr_1 [i_1 + 1])))), (arr_1 [i_0])));
            }
        }
    }
    #pragma endscop
}
