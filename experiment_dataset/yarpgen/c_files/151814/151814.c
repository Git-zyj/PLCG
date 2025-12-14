/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_10 = (min(var_10, (((var_6 ? (48536 > 48536) : (((((arr_4 [i_0 + 1] [i_0 + 1] [i_3]) && (arr_0 [i_0]))) ? (arr_4 [6] [i_1 - 1] [6]) : (3840 || 17015))))))));
                            var_11 = var_1;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                arr_19 [i_1] [i_1] [i_1] = (min(((((1 != var_3) || 48511))), (((var_5 + var_9) ? 16999 : 5938510836526150568))));
                                arr_20 [8] [10] [i_1] [i_1] [10] = (min(12508233237183401054, ((var_2 / ((-8 ? 48536 : var_4))))));
                                var_12 = (max(var_12, ((max((((5938510836526150562 ? 0 : 3554608236))), (max(((((arr_18 [i_0] [i_0 - 1] [1] [i_0] [i_0 - 1]) | 1))), ((30438128 ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_7)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = var_6;
    #pragma endscop
}
