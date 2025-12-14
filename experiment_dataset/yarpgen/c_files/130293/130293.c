/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [9] [i_2] [i_0] = (((30254 * var_7) >= var_9));
                    var_16 = (((var_12 - (arr_1 [i_0 - 1] [i_0 - 1]))));
                    arr_8 [i_0] [i_0] [i_0] = (~2797);

                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0 - 1] [i_1] [i_2] [i_3] [i_0 - 1] = (((!(!var_5))));
                        arr_12 [8] [i_1] [i_1] [4] [10] [9] = var_9;
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 3; i_5 < 14;i_5 += 1)
                        {
                            var_17 |= (((((~((max(35282, var_0)))))) ? (((((var_9 ? var_2 : (arr_5 [1])))))) : (((27209 ? 30258 : -6635284153257772780)))));
                            arr_18 [i_0] [i_2] [i_5] [i_4] [i_4] [i_2] = ((35303 << (((-46315 + 46364) - 8))));
                            var_18 = (((-(arr_5 [i_0 - 1]))));
                        }
                        var_19 ^= (max(((var_15 ? 30245 : (!-27209))), (max((arr_15 [i_0 - 3] [1] [1] [i_2] [i_4]), (arr_15 [i_0 + 1] [i_2] [i_2] [8] [i_4])))));
                        var_20 = (max((max((arr_1 [i_1] [i_4]), var_14)), var_9));
                        var_21 ^= ((((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 3])))) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1])));
                        var_22 = (max(var_22, var_14));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_23 = 1;
                        arr_23 [i_0] [i_0 - 2] [i_0 - 2] [i_0] = (min((1640595390595580389 != 69), (((arr_2 [i_0 - 3]) ? (arr_2 [i_0 - 2]) : (arr_17 [14] [i_0 - 2] [i_1] [14] [i_0])))));
                    }
                }
            }
        }
    }
    var_24 -= var_11;
    #pragma endscop
}
