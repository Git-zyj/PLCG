/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (max(((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 2]) : (arr_2 [i_0 + 2])))), (~-7662372876506700374)));
                var_19 = (min((max(7662372876506700380, var_13)), (min(((min((arr_2 [i_0 + 2]), var_1))), (arr_5 [i_1] [i_1] [i_1 - 3])))));
                arr_6 [i_0] [i_0] [i_1] = 7662372876506700393;
                arr_7 [i_0] [i_0] = (arr_4 [i_0] [i_0] [i_1]);
            }
        }
    }
    var_20 = var_13;
    #pragma endscop
}
