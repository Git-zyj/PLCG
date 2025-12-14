/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_17 <= (((15243251885159622015 ? 28529 : var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = ((~(((arr_3 [i_0] [i_0]) ? (arr_2 [i_1] [i_0] [i_0]) : (max(var_18, 3203492188549929600))))));
                var_21 = (arr_3 [i_1] [i_1]);
                var_22 = (!36197);
                var_23 = var_18;
                var_24 = (min((((arr_2 [i_1] [i_0] [i_0]) ? var_12 : (arr_0 [i_0] [i_1]))), (min((min(var_1, (arr_3 [i_1] [i_0]))), (((282523100135612746 > (arr_2 [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
