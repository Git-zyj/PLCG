/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = -var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (min(-16, 154));
                var_18 += var_5;
                arr_4 [i_0 + 2] = ((min(248, 2255299100)));
                var_19 = (max((((125 && var_10) + (((arr_0 [i_0 - 1] [i_0 - 1]) ? 201326592 : (arr_3 [i_0] [i_0 + 2]))))), (arr_1 [i_0] [i_0])));
            }
        }
    }
    var_20 = var_5;
    var_21 = (min((((var_3 ? 267911168 : (min(1, var_10))))), (min(34, ((1588549738207757271 ? 6571015098816633216 : var_10))))));
    #pragma endscop
}
