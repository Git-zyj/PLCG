/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (63 ^ var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = var_14;
                arr_7 [i_0] [i_0] [i_0] = (max(((((((arr_1 [i_0] [i_0]) ? -65 : 0))) + (min(-214964232, (arr_3 [i_0]))))), var_11));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = ((var_10 | (arr_14 [i_0] [i_0] [i_1] [i_2] [i_3 - 1] [16])));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = var_7;
                            }
                        }
                    }
                    var_17 = var_11;
                    var_18 = (max(var_18, ((((((arr_11 [i_0] [i_0] [i_1] [i_2 - 1] [i_0] [i_2]) ? var_2 : 16775168))) ? var_1 : (arr_14 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2])))));
                }
                arr_17 [3] [i_1] = ((-(min((arr_3 [i_0]), (arr_3 [i_0])))));
            }
        }
    }
    var_19 |= (!var_3);

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_20 = (max(var_20, (max((arr_12 [i_5]), (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        arr_29 [i_5] [i_5] [i_6 - 1] [i_7] [i_8] &= ((((24576 || (arr_8 [i_5] [i_6] [i_6 - 1])))));
                        var_21 *= -104;
                    }
                }
            }
        }
        arr_30 [i_5] = (((arr_18 [i_5]) - (arr_27 [i_5] [i_5] [i_5] [i_5] [i_5])));
    }
    #pragma endscop
}
