/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [0] [6] [i_1] = (min((max((arr_3 [i_1]), -var_3)), (((((max(142156651, 24576))) && ((((arr_1 [i_0] [i_0]) ? 14940454896853239554 : 1))))))));
                var_12 = (((((min(24578, 1319927940)))) ? ((~(max(3101119001, 1)))) : ((min(var_8, -65535)))));
            }
        }
    }
    var_13 = -10984;
    var_14 = ((24572 ? -42 : -24555));
    #pragma endscop
}
