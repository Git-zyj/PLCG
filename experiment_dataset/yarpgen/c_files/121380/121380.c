/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [15] = ((-28822233510841675 ? ((((max(-15413, 255))) ? 15413 : (~0))) : 247));
                var_11 = ((((max((max(46627, 5)), ((min(142, -15413)))))) ? 32 : ((((22509 ? 140736951484416 : 32)) * (arr_1 [i_0 + 1] [i_0 + 1])))));
                arr_8 [i_0] = (min((arr_0 [i_0] [i_1 + 1]), ((((arr_0 [i_0] [i_1 + 1]) >= (arr_5 [i_1 + 2] [i_1 + 3]))))));
            }
        }
    }
    var_12 = (max(var_10, -26876));
    var_13 = (~-59);
    #pragma endscop
}
