/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [9] = 4445696842883999097;
                arr_5 [i_0] [i_0] = (arr_0 [i_0]);
                arr_6 [i_0] [6] = (arr_1 [i_0] [i_1]);
                arr_7 [10] [i_1] [i_1] = (((((6571 ? -6572 : 255))) ? 4445696842883999118 : (((((arr_2 [i_1 - 1]) + 2147483647)) >> (((arr_0 [i_1 - 1]) - 53))))));
                arr_8 [i_1] [1] [i_0] = (((4619608320182704707 && 1432130572) < (max(-116, 1))));
            }
        }
    }
    var_20 = ((var_10 ? ((((4445696842883999097 ? 247 : 14447)))) : 1));
    var_21 = (!var_10);
    #pragma endscop
}
