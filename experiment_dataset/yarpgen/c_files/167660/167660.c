/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = ((var_3 | ((~((var_1 ? var_11 : (arr_5 [i_0])))))));
                var_14 = ((((((((var_6 ? var_6 : (arr_5 [i_0])))) ? (((var_7 != (arr_1 [i_0] [i_1])))) : (arr_5 [i_0])))) ? 1755936009 : (((!((((arr_0 [i_1]) % (-2147483647 - 1)))))))));
                arr_8 [i_0] = (((-2147483647 - 1) ? 1755936001 : (-2147483647 - 1)));
                arr_9 [i_0] [i_0] = ((((max((arr_6 [i_0 + 1] [i_1] [i_1]), (arr_4 [i_0 + 1])))) ? (min((arr_4 [i_0 + 2]), -4873100828377764513)) : ((((arr_0 [i_0 - 1]) ^ ((~(arr_4 [i_1]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_15 = (min(var_11, var_6));
                arr_15 [i_3] [i_3] = ((min((155551645853950624 != 1), (((arr_6 [i_2] [i_2] [i_2]) ? (arr_10 [i_3] [21]) : (arr_14 [i_3]))))));
                var_16 = ((((~(arr_2 [i_3]))) | (arr_2 [i_3])));
            }
        }
    }
    var_17 = var_3;
    var_18 = 0;
    var_19 = (~var_7);
    #pragma endscop
}
