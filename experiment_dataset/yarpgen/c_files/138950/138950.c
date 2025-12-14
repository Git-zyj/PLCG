/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = ((-(((((arr_6 [i_0] [i_1] [i_2]) != var_10)) ? (((arr_3 [i_1]) ? var_8 : 4429235422087407336)) : (arr_3 [i_1])))));
                    var_14 &= ((((min(((min((arr_2 [i_0] [i_0]), var_8))), ((~(arr_6 [i_0] [i_1] [i_2 + 3])))))) ? 25 : (((3671346183 + 1746290793) ? -5131 : var_11))));
                    var_15 = min(((-(((arr_5 [i_1]) / var_7)))), (((((1746290793 ? (arr_2 [i_1] [i_1]) : var_7)) <= ((min(var_9, var_11)))))));
                    arr_9 [i_1] = ((-5131 ? (min((arr_1 [i_2 + 1]), ((var_12 ? (arr_6 [i_0] [i_1] [20]) : var_7)))) : var_2));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            {
                var_16 = var_6;
                arr_14 [i_4] [4] = var_5;
                arr_15 [i_3] [i_4 + 1] [i_4] = var_10;
                var_17 = (((((((var_1 & (arr_10 [i_3]))) <= -var_11)))) - (((arr_1 [i_3]) & 3281948980395099958)));
                arr_16 [i_3] [i_4] = max(((183612750 | (arr_12 [i_4] [i_4 + 1]))), (!var_10));
            }
        }
    }
    var_18 &= ((((min(var_10, -53432))) ? var_8 : var_7));
    #pragma endscop
}
