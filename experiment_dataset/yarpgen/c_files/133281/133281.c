/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 -= var_6;
                    arr_10 [12] [14] [i_0] [17] = ((((min(18322834698899228928, -87))) ? (((var_12 | (arr_3 [0])))) : ((((arr_5 [i_1 - 1] [18]) != ((4230620552237925573 ? 14928813348429536192 : -5)))))));
                }
            }
        }
    }
    var_14 ^= ((((((~4738766842372226515) ? var_11 : var_9))) ? ((~(max(var_2, 16140901064495857664)))) : (max(40, var_4))));
    var_15 = (min(((((var_6 * var_8) - var_6))), 484271001212245078));
    var_16 = ((max(var_2, (18446744073709551614 && var_7))));
    var_17 = 202;
    #pragma endscop
}
