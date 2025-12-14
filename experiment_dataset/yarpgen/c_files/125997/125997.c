/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 6667628148560178655;
    var_17 += ((((((~-71) ? var_10 : var_0))) ? var_3 : -71));
    var_18 = 19;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_19 -= ((var_6 <= (var_6 && var_7)));
                arr_6 [1] [3] = var_4;
                var_20 = ((~((min((arr_4 [i_1 + 1] [i_0 + 1]), (arr_4 [i_1 + 1] [i_0 + 1]))))));
            }
        }
    }
    #pragma endscop
}
