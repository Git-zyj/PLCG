/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 |= ((!(((-0 ? (var_8 * 0) : ((min(var_14, (arr_8 [1] [i_1] [i_2] [1])))))))));
                    var_20 = (max(var_20, (arr_3 [i_0])));
                    arr_12 [i_0] [i_1] [i_1] [i_0] |= 1;
                    arr_13 [i_1] [i_1] = ((((((((~(arr_8 [i_2] [i_1] [i_0] [i_0])))) ? (arr_4 [i_0] [i_0]) : (arr_0 [i_2] [i_2])))) ? ((((max((arr_9 [i_0] [i_1] [i_2]), var_5)) - (arr_2 [i_2])))) : -var_4));
                    var_21 -= (32086 ? (((((1 ? -1029457677 : 3615667667))) / -18446744073709551615)) : ((var_8 * (arr_8 [i_0] [i_1] [i_2] [i_1]))));
                }
            }
        }
    }
    var_22 = (!var_17);
    var_23 = max(var_6, (((-(!var_6)))));
    var_24 = var_9;
    var_25 = (((var_17 + 2147483647) << (var_18 - 1653322719)));
    #pragma endscop
}
