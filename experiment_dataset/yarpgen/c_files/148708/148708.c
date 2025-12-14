/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (min(207, -118));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (min((((min((arr_4 [i_1] [i_1] [i_1]), 63)) ^ 4096)), (((min(0, 1)) ? -1 : 0))));
                var_19 = (min((((29290 ? (!var_8) : ((min((arr_2 [i_1]), (arr_5 [i_1]))))))), (min((arr_5 [10]), (max(500056073, (arr_2 [i_0])))))));
            }
        }
    }
    #pragma endscop
}
