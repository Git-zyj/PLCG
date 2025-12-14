/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = (min((var_3 != 2147483647), (!var_1)));
    var_17 = (((!-6) ? var_6 : var_4));
    var_18 = -var_8;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [1] [4] [i_4] [i_0] = var_5;
                                var_19 -= (((arr_2 [i_2]) && ((min(var_13, (arr_12 [11] [i_3] [9] [i_0] [i_1] [i_0]))))));
                            }
                        }
                    }
                    arr_15 [10] [5] [9] [i_0] = ((((min(-44, ((var_14 ? var_1 : var_10))))) ? (arr_5 [i_2 - 1] [i_1] [i_0]) : ((var_1 - (var_11 - var_8)))));
                    var_20 = (max(var_20, ((((arr_10 [10] [i_1] [1] [i_1]) ? 1825659554 : (((!(!var_4)))))))));
                    arr_16 [i_0] = ((~(arr_0 [i_1] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
