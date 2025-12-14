/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = (((((~32758) ? 15 : (~-16646))) == (!var_7)));
                var_11 &= (min(238, (min(16645, (arr_1 [i_1 - 3] [i_0 - 2])))));
                var_12 = (min(((min((arr_3 [i_1 + 4] [i_1 + 3] [i_1 + 2]), (arr_3 [i_1 - 2] [i_1 + 2] [i_1 + 4])))), ((0 ? -25209 : (-127 - 1)))));
                var_13 = (min(var_9, (((arr_1 [i_0 - 2] [i_0 - 2]) ? (((min((arr_0 [9] [3]), var_6)))) : (arr_2 [0] [i_1] [6])))));
            }
        }
    }
    var_14 = 16644;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                var_15 = 242;
                var_16 = (min(17232, (236 / 24588)));
            }
        }
    }
    var_17 *= ((min(var_5, var_3)));
    #pragma endscop
}
