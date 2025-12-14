/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_17 = (~0);
                    var_18 = (max(var_18, ((min(((((max(12759, 12770))) ? ((max(12754, -12790))) : -12770)), (-12770 & 12770))))));
                    var_19 = (max(var_19, ((((((((-12782 ? var_15 : (arr_1 [i_0] [i_1]))) ^ -12807))) ? ((min(-12807, 12806))) : ((((var_12 + (arr_6 [i_0] [12] [i_0]))) & (12822 <= 12801))))))));
                    var_20 = ((-12768 & (((~12767) ? ((-12790 ^ (arr_3 [i_0] [i_1 + 2] [i_2 - 1]))) : ((var_4 ? 12812 : var_1))))));
                }
                arr_7 [i_0] [i_0] [i_0] = var_8;
                var_21 = var_3;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_22 = (min(-12807, (min((arr_20 [i_3] [i_4 - 2] [9] [i_6] [i_7]), (arr_17 [i_4] [i_4 + 2] [i_4] [i_4 + 1] [i_6] [11])))));
                                var_23 = ((-((~(arr_6 [i_4 + 2] [i_6] [i_4 + 1])))));
                            }
                        }
                    }
                    arr_22 [i_3] [i_3] = (min(((((arr_6 [i_4] [i_3] [i_4 + 3]) && (((arr_6 [i_4] [i_3] [i_4]) || 12782))))), (min((arr_21 [i_5] [i_5] [i_5] [i_5] [i_4 - 2] [i_3] [5]), ((max(-12761, var_12)))))));
                }
            }
        }
    }
    #pragma endscop
}
