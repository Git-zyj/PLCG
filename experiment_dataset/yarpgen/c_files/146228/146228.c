/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_9));
    var_16 -= var_5;
    var_17 = (max(3062870144678579417, 65535));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [12] = (max(((min(30, (arr_3 [i_0] [i_1])))), (((5329501842720688839 % -64) ? (~264202063004906518) : 75))));
                var_18 |= (arr_3 [2] [2]);
            }
        }
    }
    #pragma endscop
}
