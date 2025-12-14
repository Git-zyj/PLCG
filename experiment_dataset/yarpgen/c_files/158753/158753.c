/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    var_21 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (arr_0 [i_0 + 1] [i_1]);
                arr_5 [i_0] = (min((!var_8), (arr_0 [8] [i_1])));
                var_22 = (max(var_22, var_6));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_23 -= (var_0 * (((min(0, 11)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_24 = (max(var_24, (((((((35514 - var_9) / (arr_8 [i_3 - 2] [i_2])))) ? (var_7 / var_0) : ((((var_9 != (arr_7 [i_0] [i_1] [i_4]))) ? (((min(176, var_13)))) : ((80 ? 176 : var_17)))))))));
                                arr_16 [i_4] [i_4] [4] = (((~var_14) <= (min((arr_2 [i_0] [i_0] [i_0]), (((65525 ? -401976001 : 44110)))))));
                                arr_17 [i_0 - 1] [i_4] [i_2] [2] [i_4 + 1] = (arr_1 [i_2]);
                                var_25 = (max(var_25, ((min(12031703682288855647, ((min((arr_13 [i_3] [i_3 - 2] [i_4 - 1] [i_3 - 2] [i_3]), (arr_13 [i_3] [i_3 - 2] [i_4 + 1] [i_3] [i_4])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
