/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = (((((arr_1 [i_0 + 2]) ? (((arr_0 [i_0]) + 4294967273)) : (arr_1 [i_0]))) * -27552));
                arr_4 [i_1] [i_1] [i_0] = (min((((((min(var_0, (arr_3 [i_0])))) ^ (arr_1 [i_0])))), (max((arr_0 [i_0 + 2]), var_5))));
                arr_5 [i_1] = (arr_3 [i_0]);
            }
        }
    }
    var_18 = var_8;
    var_19 = (~var_8);
    #pragma endscop
}
