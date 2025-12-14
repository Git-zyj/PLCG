/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min((max(-66, -998317936)), ((min(var_8, var_10)))))) ? (!var_7) : ((var_10 ? 998317936 : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [10] &= (((arr_2 [i_0 + 1] [i_1 - 2]) + var_2));
                arr_8 [i_0] [i_0] = ((!((((max((arr_0 [i_0]), var_12)) - ((min(var_1, (arr_3 [i_0 + 1] [i_1])))))))));
            }
        }
    }
    #pragma endscop
}
