/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_10);

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_20 = (max((~var_14), var_18));
                        var_21 = -19881;

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_14 [i_0 + 1] [i_0 - 1] [i_1] [i_1] [i_2] [i_3] [i_0 - 1] |= (((((2687989707 ? 2687989707 : 32767))) ? var_17 : ((((~(arr_7 [i_0] [i_2] [i_3] [8]))) + (arr_8 [i_3])))));
                            var_22 = (-20644 - -var_18);
                            var_23 = (max(var_23, (((((min((min(var_6, 19880)), 19885))) ? (((~(-20653 >= var_4)))) : (max(32767, ((-18664 ? 54448 : var_10)))))))));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_5] &= (19881 & 11483);
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] = ((((max((((676326219 / (arr_16 [1] [1] [i_1] [i_1] [i_2] [i_1] [7])))), (max((arr_1 [2] [4]), 9113867213293659311))))) ? ((max(var_13, (arr_15 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])))) : (arr_11 [i_0] [i_0] [9] [7] [i_3] [i_0])));
                            var_24 = -var_10;
                            arr_19 [i_0 - 2] [i_0 - 2] [1] = var_1;
                        }
                    }
                }
            }
        }
        var_25 = (((((var_14 % -4850823528182619388) ? -19887 : (~17857315878224874899))) < (((var_3 ? 1 : ((max(-13426, 0))))))));
    }
    for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
    {
        var_26 = (((4551 << (((arr_2 [i_6 + 1]) - 1714700436)))));
        arr_22 [8] [i_6] = 19873;
        var_27 = 2147483623;
    }
    #pragma endscop
}
