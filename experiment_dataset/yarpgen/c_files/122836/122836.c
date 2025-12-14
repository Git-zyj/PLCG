/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((11641125468659484967 ? 137 : 4605076718324890466))) ? 115 : ((-7485228707776621733 ? (!-127) : ((1 ? 2011472546 : (arr_0 [i_0])))))));
                arr_6 [i_0] [i_1] = (arr_4 [i_0]);
                var_13 = max((arr_0 [i_0]), var_3);
            }
        }
    }
    var_14 = (((((((min(var_4, var_6))) * ((max(var_11, var_2)))))) ? ((var_5 >> (var_0 && var_6))) : (!var_2)));
    #pragma endscop
}
