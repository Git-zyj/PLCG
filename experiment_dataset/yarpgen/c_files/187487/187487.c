/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max(var_6, (((var_4 / ((39680 ? -5109699643527937211 : var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = max((((arr_9 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] [i_3] [i_2]) ? 143579461 : (arr_9 [i_0] [i_1] [i_1] [i_3 + 1] [i_1] [i_3] [i_1]))), (((arr_9 [10] [10] [i_2 + 2] [i_3 - 2] [10] [i_3] [18]) - (arr_9 [i_0] [i_1] [i_1] [i_3 + 1] [i_1] [i_3] [i_3]))));
                                arr_11 [i_0] [i_1] [i_1] [i_3] [i_4] [i_0] [i_0] = (((((~(max(var_7, 27832))))) || var_7));
                                var_15 = (((((((18446744073709551615 ? (arr_10 [i_4] [i_3] [i_2 - 3] [i_2 - 3] [i_3] [i_0]) : 36686))) && -1)) ? (max((min((arr_8 [i_0] [2] [i_0] [i_0]), -8291378522090600327)), var_9)) : 57080));
                                var_16 += 50105;
                                arr_12 [i_3] [0] [0] [i_3] [6] = (((~(max(var_11, 12179795120048500675)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_17 = (max((arr_7 [i_2 - 1] [i_2 - 3] [i_6] [i_2] [i_6] [i_2 + 2]), ((-(arr_7 [i_2] [i_2 - 3] [i_6] [i_2] [i_6] [i_2 + 2])))));
                                var_18 = -16459;
                                var_19 = (min(((1 ? (arr_8 [i_0] [i_1] [i_1] [i_0]) : 1941986286)), ((-1521470452 ? (arr_15 [i_2 - 3] [i_2 + 1] [i_2] [i_2]) : 8526935838411615254))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = max(var_0, ((var_0 ? var_0 : var_8)));
    #pragma endscop
}
