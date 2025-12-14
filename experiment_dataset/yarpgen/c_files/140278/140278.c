/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_15 = (arr_2 [i_0] [i_0]);
                    arr_9 [i_1] [i_1] = (((4278190080 * -86840035) ? var_13 : (((arr_7 [i_0] [i_1 + 1] [i_1 + 1] [i_1]) ^ var_4))));
                    var_16 = (min((((arr_1 [i_1 + 2] [i_1 + 1]) / (arr_1 [i_1 + 2] [i_1 + 1]))), (((arr_1 [i_1 + 2] [i_1 + 1]) - 22132))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_17 = 1;
                    arr_12 [i_0] [i_1] [8] = (arr_4 [i_1 - 1] [i_1]);
                    var_18 = 65524;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_18 [19] [i_4] [i_1] [i_0] [i_0] = (((arr_2 [i_1 - 2] [i_1 - 1]) != (arr_8 [i_0] [i_1] [i_1] [i_0])));
                                arr_19 [i_1] [i_1] [i_3] [i_4] [i_5] [i_4] = ((arr_3 [i_0] [i_0]) | (arr_3 [i_3] [i_1 + 1]));
                            }
                        }
                    }
                }
                var_19 = (max(var_19, ((!((((arr_7 [12] [20] [i_0] [12]) + (arr_14 [i_0] [6] [i_0] [i_0] [8] [i_0]))))))));
                var_20 *= (((arr_17 [i_0] [i_1 - 1] [i_1] [6] [i_1 - 1] [i_1 - 1]) && (arr_3 [i_0] [i_0])));
                arr_20 [i_1] [5] [i_1] = (~-86840053);
                arr_21 [i_1] = (((65526 || 12) || -86840035));
            }
        }
    }
    var_21 = ((var_10 != ((var_3 ? var_6 : var_11))));
    var_22 = var_5;
    #pragma endscop
}
