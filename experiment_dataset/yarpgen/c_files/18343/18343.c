/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [1] [1] = (((((-4153930568048328742 + 9223372036854775807) >> 37)) & (arr_0 [i_0] [i_0])));
        var_12 = 1;
        var_13 = (max(var_13, 250));
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                var_14 = ((!(((+(min((arr_9 [i_1] [i_2]), (arr_9 [i_1] [i_1]))))))));
                var_15 = ((var_4 & (((-127 - 1) ? -754024925 : 128))));
            }
        }
    }
    #pragma endscop
}
