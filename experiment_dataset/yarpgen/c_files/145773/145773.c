/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -21;
    var_12 = ((((min(var_9, (min(var_3, var_9))))) >> (var_0 - 1399616412)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((min((arr_2 [i_0 - 1] [i_0 - 2]), 1265109174))) && ((((min(var_10, 1265109174)) - (((-32767 - 1) ? 3029858121 : 255))))));
                arr_7 [i_0] [i_0] [i_0] = 9223372036854775807;
            }
        }
    }
    var_13 ^= (min(var_10, ((((max(var_9, 40))) ? 3029858135 : (var_4 && var_10)))));
    #pragma endscop
}
