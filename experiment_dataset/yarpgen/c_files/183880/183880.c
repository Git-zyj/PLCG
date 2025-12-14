/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 ^= (((var_3 & var_3) ? (((((min(14, -49))) ? (max((arr_5 [0] [i_2]), 1904128259)) : var_10))) : var_6));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 += (min(48, 1855991009));
                                var_15 += var_4;
                                var_16 = (min(var_16, (((var_0 ? (min(var_0, (arr_0 [i_3 - 3] [i_1 - 1]))) : var_11)))));
                                arr_10 [i_1] [i_1] = ((-(min(44, -2852716415603646888))));
                                var_17 += (((((var_7 ? ((48 ? (arr_1 [i_0] [i_0]) : 1977945246)) : (arr_2 [i_1 - 1])))) / var_9));
                            }
                        }
                    }
                    var_18 += (((((((max(var_4, var_5)))) + 2147483647)) >> ((((-(max(2390839040, (arr_1 [i_0] [i_1]))))) - 1904128240))));
                    var_19 ^= (max(var_0, var_9));
                }
            }
        }
    }
    var_20 += (min((min((((var_10 ? var_10 : var_5))), (min(1904128262, -6195279443145618937)))), var_9));
    #pragma endscop
}
