/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((((65535 % var_3) ? var_5 : var_6))), ((-((77 ? 0 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = ((((((arr_0 [i_1]) ? (((arr_0 [i_1]) ? var_7 : 14785)) : (26 && var_14)))) ? ((-(((arr_0 [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : 0)))) : (((-12901 ? var_9 : -27)))));
                arr_4 [17] [i_1] = (((((arr_3 [1] [i_1]) + ((-27 ? 26 : -26)))) ^ (0 & 26)));
            }
        }
    }
    var_19 = var_4;
    #pragma endscop
}
