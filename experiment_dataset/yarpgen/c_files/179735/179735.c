/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (min(((~((((arr_1 [i_0] [i_0]) != -25))))), (arr_1 [i_0] [i_0])));
        var_13 += (((arr_1 [1] [1]) ? ((((var_6 ^ (arr_0 [i_0] [i_0]))) * (arr_0 [i_0] [i_0]))) : (((((23540054 << (((arr_0 [i_0] [i_0]) - 25915))))) ? 225 : ((15 ? 15 : var_0))))));
        var_14 |= (max((min((arr_1 [i_0] [0]), (max((arr_0 [i_0] [i_0]), 46307)))), ((max((arr_1 [6] [6]), (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_15 += (((((((((arr_5 [1] [i_1]) << (((arr_5 [i_1] [i_1]) - 234))))) ? (((var_6 << (((arr_5 [i_1] [i_1 - 3]) - 223))))) : 122880))) || (arr_4 [i_1])));
        arr_6 [i_1] [i_1] = 244;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_1 - 2] [i_1] = (arr_12 [i_1 - 3] [i_1 - 3] [i_3]);
                    arr_14 [i_1] [i_1] [i_1] [i_1] = (((arr_10 [i_1 - 3] [i_1 + 1] [i_1 - 1]) == ((((arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 3]) & var_0)))));
                }
            }
        }
        arr_15 [i_1] = ((!((((min((arr_10 [i_1] [i_1] [i_1]), -466027098)) ^ (arr_4 [i_1]))))));
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    arr_23 [i_4] [i_4] [i_5] [i_6] = var_6;
                    var_16 = (max(((((arr_16 [i_4 + 2] [i_5]) <= ((((arr_12 [7] [7] [7]) >= var_4)))))), var_12));
                }
            }
        }
    }
    var_17 *= (~(var_3 / var_10));
    #pragma endscop
}
