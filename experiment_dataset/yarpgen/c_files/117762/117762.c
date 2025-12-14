/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = var_7;
                    arr_7 [i_1] [9] = 11556451218374726793;
                    var_15 ^= ((((((arr_6 [i_0]) ? (arr_1 [i_2]) : ((var_2 - (arr_0 [i_0] [i_0 + 1])))))) ? (((arr_1 [i_0 - 1]) ? (((arr_5 [i_0] [i_0 - 4] [i_0 + 2] [9]) ? var_6 : -28330)) : ((((arr_6 [i_0]) - (arr_5 [9] [i_1] [i_2] [i_2])))))) : ((max((((arr_4 [4]) ? var_12 : -1704990386)), var_3)))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_16 = (((((((~-28327) >= -2)))) ^ (min((min(28330, (arr_2 [i_1 - 1] [i_1]))), (arr_8 [i_1] [i_1 - 1])))));
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] = (max((max((max(var_6, 18446744073709551615)), -28351)), (arr_0 [i_2 - 2] [i_1 + 1])));
                        var_17 -= (((arr_9 [i_3] [i_3] [i_3] [10]) ^ var_3));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_15 [i_2] [i_2] [i_1] [i_0 - 3] [5] = ((arr_10 [i_1] [i_2] [i_1] [i_1]) ? (arr_10 [i_1] [i_1] [i_1] [0]) : var_0);
                        arr_16 [i_0] [i_1] [i_0] [i_0] = ((~(arr_4 [i_1])));
                        var_18 = (max(var_18, ((((arr_12 [i_0] [i_0 - 1] [i_0] [i_0 + 1]) ? (arr_12 [i_0] [i_1 - 1] [i_2] [i_4]) : (arr_8 [i_4] [i_1 + 1]))))));
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, (((~(((((var_11 ? var_4 : -2108754663))) ? var_2 : (((978656005 ? 2108754663 : var_6))))))))));
    #pragma endscop
}
