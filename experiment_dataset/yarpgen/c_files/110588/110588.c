/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_14 -= (max(((((!(arr_1 [i_0 + 1]))))), var_13));
        arr_3 [i_0] = ((var_11 ? (min(var_10, (arr_1 [i_0]))) : (arr_0 [i_0])));
        arr_4 [i_0] = (((((-(((1336594550261165045 && (arr_1 [i_0]))))))) ? (arr_1 [i_0 + 1]) : var_9));
        var_15 = ((((-(12308 < var_11))) | -12317));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_16 = min(-var_12, ((max((arr_0 [i_1 - 2]), (arr_0 [i_1 + 1])))));
        var_17 = (arr_6 [i_1 - 1]);
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_18 = (arr_8 [10] [i_2]);
        arr_11 [i_2 - 1] = (arr_8 [i_2 - 2] [i_2 + 1]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    {
                        var_19 |= (min((arr_19 [i_2] [i_3] [20] [i_4] [i_2]), (arr_13 [i_2 + 1] [i_3])));
                        arr_20 [i_5] [i_4] [i_3] [i_2] = max((max(var_6, (arr_13 [i_2] [i_3]))), (min((max(1336594550261165045, var_11)), (min(var_11, var_10)))));
                        arr_21 [i_5] [i_4] [i_3] [i_2] = (((((var_1 ? ((min((arr_1 [i_4]), var_0))) : ((max(134, var_13)))))) ? (((((arr_16 [i_4] [i_3]) + 2147483647)) >> (255 - 231))) : ((min((arr_15 [i_5] [7] [i_3] [17]), (arr_15 [19] [18] [i_4] [13]))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] = (((arr_17 [1] [1] [4]) ? (((arr_23 [i_6] [i_6]) / (arr_17 [i_6] [i_6 - 1] [i_6 - 2]))) : ((min((arr_23 [i_6] [i_6]), (arr_23 [i_6] [i_6]))))));
        var_20 = (((max((((arr_14 [15] [1] [15]) ? (arr_2 [i_6] [i_6]) : (arr_6 [i_6 - 1]))), ((min((arr_9 [i_6]), var_3))))) > (((var_4 ^ ((min((arr_18 [i_6] [i_6]), var_11))))))));
        var_21 *= (((min((((arr_18 [i_6] [4]) ? var_11 : 250)), (arr_13 [i_6 - 2] [i_6 - 2]))) & ((~((max((arr_19 [i_6] [i_6] [i_6 + 1] [i_6 + 1] [i_6]), 26)))))));
    }
    var_22 = var_8;
    #pragma endscop
}
