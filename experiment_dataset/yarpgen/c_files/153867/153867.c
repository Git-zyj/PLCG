/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_10 [i_1] [6] [i_2] = 18446744073709551598;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_4] [i_2] [4] [i_2] [i_1 + 1] [i_0] |= min(72, (((arr_8 [i_0] [10] [i_4]) ? var_10 : (((arr_2 [8] [i_3] [i_4]) ? (arr_13 [i_0] [i_0] [10] [i_0] [i_4] [i_0]) : var_8)))));
                                arr_17 [i_2] [i_1] [i_1] = (arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [0]);
                                var_15 += min((((var_1 ? (min(1203035840, var_0)) : (!var_1)))), ((-(((arr_1 [i_3]) ? (arr_2 [i_0] [i_1] [i_3]) : var_11)))));
                                arr_18 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((((-4762518419415311641 == (arr_8 [i_1] [i_2] [i_4]))))) ^ (var_4 % 18))) | ((((min(1387906079, (arr_9 [i_4] [i_3] [i_2])))) ? -29415 : (~var_10)))));
                            }
                        }
                    }
                }
                arr_19 [i_1] [i_1] = (((((-9815 > (arr_2 [i_1] [i_1] [i_1 - 1]))))) - (((arr_2 [i_1] [15] [i_1 - 1]) ? (arr_2 [i_1 + 2] [i_1] [i_1 - 1]) : var_2)));
                var_16 = (arr_7 [i_0] [i_0] [13] [i_1]);
            }
        }
    }
    var_17 = var_12;
    #pragma endscop
}
