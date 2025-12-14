/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((((min((arr_1 [i_0] [i_0]), (!var_15)))) >> (((arr_2 [i_1 - 3] [i_1 + 1]) - 1310717354))));
                arr_5 [i_0] [i_1] = ((((-32767 - 1) ? (arr_1 [i_1 - 1] [i_1]) : ((0 ? 21422 : (arr_1 [i_0] [i_1]))))));
            }
        }
    }
    var_18 = (((((((4 ? var_7 : 6)) >> ((min(28, 4)))))) ? var_11 : ((((((1 ? var_8 : var_6)) + 2147483647)) << ((((var_0 ? var_5 : var_3)) - 817743356))))));
    #pragma endscop
}
