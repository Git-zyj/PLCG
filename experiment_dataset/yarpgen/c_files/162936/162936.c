/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (((arr_3 [i_0 - 1] [13]) ? (((arr_3 [i_0 - 2] [i_1 + 1]) ? 70 : 2850861166928897155)) : 1));
                arr_4 [i_0] [i_1] [3] = (max(18446744073709551615, ((((((arr_1 [i_0] [5]) ? -606 : -23819)) <= var_4)))));
                var_15 = (max(var_15, (((0 ? 1699683437 : 9223372036854775807)))));
                arr_5 [i_0] [i_0] [i_0] = ((((min(3415223965, (arr_2 [8] [2] [9]))) != (((var_0 ? var_6 : (arr_3 [i_0] [13])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            {
                var_16 = ((((!(3966 || -2088))) ? ((((arr_9 [i_2] [i_2] [i_2]) || (18446744073709551615 || 2350506898)))) : 1));
                arr_13 [i_2] [i_2] = -1699683438;
                var_17 = var_4;
            }
        }
    }
    var_18 = var_4;
    #pragma endscop
}
