/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (max((((var_0 && ((min(32767, -2111237250)))))), (((arr_1 [i_1]) ? (arr_1 [i_0]) : 70))));
                arr_4 [14] [i_1] [i_0] = (~var_10);
                arr_5 [i_0] [i_1] = ((-(~0)));
            }
        }
    }
    var_18 ^= -1200;
    var_19 = -var_9;
    var_20 = var_10;
    var_21 += (-117 >= 252);
    #pragma endscop
}
