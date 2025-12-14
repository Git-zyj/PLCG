/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = arr_3 [i_0 + 3] [i_1 - 1];
                var_18 = (max(var_18, (((((max(160, 18230202956082370943))) ? (max((arr_4 [i_0] [i_0] [i_1]), (((arr_1 [i_1]) ? var_12 : 4907337167839414092)))) : (((((max(10416037009408674166, 4125352165))) ? 4125352165 : 4125352157))))))));
            }
        }
    }
    var_19 = (max(var_11, var_2));
    #pragma endscop
}
