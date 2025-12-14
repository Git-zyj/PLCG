/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((arr_2 [i_1]) || (arr_3 [i_0] [i_1] [i_0])));
                var_11 = (((((-(((arr_1 [i_0] [i_0]) + (arr_3 [i_1] [i_1] [i_0])))))) ? -0 : (arr_0 [i_0])));
                arr_5 [i_0] = (((((~(arr_1 [i_0] [i_1])))) ? (max((arr_1 [i_0] [i_0]), (arr_3 [i_1] [i_0] [i_0]))) : ((~(arr_3 [i_1] [22] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [3] [i_1] [i_1] [18] [i_0] = (((((-((-(arr_11 [i_0] [i_0] [i_0] [i_0])))))) / (arr_9 [i_1] [i_2] [i_1] [i_0])));
                            arr_13 [i_0] [i_1] [i_3] = ((((((arr_2 [i_3]) ? (arr_2 [i_1]) : (arr_2 [i_0])))) || ((((((~(arr_7 [i_0] [i_1] [i_2])))) ? (var_5 < 191) : (((arr_7 [i_0] [i_2] [i_3]) ? var_3 : var_4)))))));

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_12 |= (arr_9 [i_3] [i_0] [19] [i_0]);
                                var_13 = ((((min(2147483639, (((arr_0 [i_1]) ? 2147483639 : (arr_1 [i_0] [i_0])))))) ? ((((min((arr_16 [i_0] [i_2] [i_2] [i_4]), -2147483640))) ? (max(var_8, (arr_9 [i_0] [i_1] [i_2] [i_3]))) : (~var_1))) : var_10));
                                var_14 &= (min(var_8, (((((min(var_5, (arr_10 [i_1] [i_2] [i_3] [i_4])))) && (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [i_4]))))));
                                var_15 += (arr_3 [i_2] [i_1] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max((var_8 / var_3), ((((var_2 < var_9) ? (var_4 | var_2) : ((var_0 ? 2147483634 : var_3)))))));
    #pragma endscop
}
