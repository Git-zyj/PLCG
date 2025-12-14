/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((-89 ? ((161 ? (arr_1 [i_1]) : (arr_1 [i_1]))) : (((((((arr_2 [i_0 - 1]) / (arr_2 [i_1])))) ? 167 : 131071)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = var_7;
                            arr_9 [i_0] [i_0 + 1] = (arr_3 [i_0 + 1] [i_0] [i_0 - 1]);
                            arr_10 [i_0 - 3] [i_1] [i_2 - 1] [i_3] [i_2] = (max(((var_8 ? (169 % 4) : (((!(arr_5 [i_1] [i_2 + 1] [i_3 - 1])))))), (arr_6 [i_0 + 1] [i_1])));
                            var_18 = (!81);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_16 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] = (min(var_11, var_7));
                            var_19 = ((var_10 ? ((((arr_15 [i_0] [i_1] [i_4] [i_4] [i_4] [i_5 + 1]) - (!-67108864)))) : ((min(165, 916923936)))));
                            var_20 = (min(var_20, (((((((arr_6 [i_0] [i_5 + 1]) ? (arr_3 [i_1] [i_5 + 1] [i_0 - 2]) : (min(var_5, 13433439018557883552))))) ? (max((arr_0 [i_5 - 1]), (max(var_8, 14009214316635250394)))) : ((var_14 ? (((1 ? 1 : 1))) : (arr_0 [i_1]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_21 = arr_11 [i_0 - 3] [i_6] [i_7];
                            var_22 = ((((((var_12 / (arr_7 [i_0 + 1] [i_0 - 3] [i_0] [i_0 - 1]))))) ? (!32) : ((((var_11 ? var_5 : var_9))))));
                            var_23 = var_11;
                            var_24 = 232;
                        }
                    }
                }
            }
        }
    }
    var_25 = 255;
    #pragma endscop
}
