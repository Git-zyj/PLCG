/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 = (min((min(8539348563956156736, (arr_0 [i_0]))), var_0));
        var_12 = 4601;
    }
    var_13 = (max(var_13, -320055139));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 13;i_2 += 1)
        {
            {
                var_14 = (~1);
                var_15 = (((max((arr_2 [i_2 - 4]), var_1))) ? (((min(1, 1)))) : -320055139);
                arr_6 [i_2] = (min(1, (min(((3024240822 ? 38664 : 24698)), (~-1138594326)))));
            }
        }
    }
    var_16 = var_4;
    #pragma endscop
}
