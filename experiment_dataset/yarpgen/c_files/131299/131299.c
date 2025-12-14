/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_16 = (min(var_16, (((-(max((min(1023, -15340)), 710796547)))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 += (~var_11);
                    var_18 ^= (min((388718386 | var_2), var_6));
                    var_19 = (min(var_19, ((((~8128) ? ((var_6 ? (arr_2 [i_0 - 1]) : var_12)) : (min(1, (~var_12))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2 - 1] [i_3] [i_4] [i_1] = 1065353216;
                                arr_16 [i_1 + 1] [i_0] [i_3] [i_4] = ((((((((17903138809136366493 | (arr_7 [i_2 - 2] [i_0] [i_4])))) ? 1 : ((44331 ? 230 : -2131))))) | (max((arr_7 [i_0] [i_0] [i_2 - 2]), (arr_10 [i_2 - 1] [i_3 - 1] [i_0 - 3] [i_1 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_20 = (max(var_20, (arr_17 [i_5])));
        var_21 = (arr_17 [i_5]);
    }
    var_22 = var_6;
    var_23 = ((((((var_8 ? var_13 : 38966))) ? 255 : -var_0)));
    var_24 = ((var_10 ? var_2 : var_8));
    #pragma endscop
}
