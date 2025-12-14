/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(var_16, var_13)) | var_1)) | var_11);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_18 &= var_7;
                        var_19 = (max(var_19, (!var_2)));
                        arr_9 [i_2] [i_0] [i_0] = var_9;
                    }
                }
            }
        }
        arr_10 [i_0] [i_0] = (~var_8);
        var_20 = ((-(!var_12)));
        var_21 -= ((~(4790336554384171408 && 128)));
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {

        for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                var_22 = (((var_0 < var_14) + var_6));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_23 = (min(var_23, (~var_5)));
                            var_24 = (max(var_24, (!var_8)));
                            arr_23 [i_8 + 4] [i_7] [12] [10] [i_6] [12] [12] = -var_15;
                        }
                    }
                }
            }
            arr_24 [i_4] = (!4294967276);
            arr_25 [i_4] [i_5] [10] = (((max(var_4, var_3))));
        }
        for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
        {
            arr_28 [i_4] [i_4] = (min((max((max(var_16, var_8)), (min(var_6, var_5)))), var_10));
            var_25 = var_11;
            var_26 = (((((var_8 * var_5) * (max(var_8, var_5)))) < (((~((max(var_12, var_2))))))));
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {
                            arr_36 [i_4] [i_9 + 4] [i_9 + 4] [i_11] [i_12] = var_14;
                            arr_37 [7] [7] [i_10] [i_10] [i_10] [i_10 + 3] [i_10] = var_15;
                            var_27 = var_12;
                            arr_38 [i_4] [i_4] [4] [5] [i_4] [0] [8] = (var_11 >= var_1);
                            arr_39 [13] [i_9 + 4] [13] [i_4 + 2] [4] [i_12] [5] = (max(4294967295, (max((!3520610600), 7639576877560804572))));
                        }
                    }
                }
            }
            arr_40 [i_4 + 3] [i_4] [i_4] = (~(min(var_13, (max(var_6, var_5)))));
        }
        var_28 += ((var_13 || ((min(var_11, var_6)))));
        arr_41 [i_4] = var_14;
        arr_42 [i_4] [i_4 + 1] = ((((((!(var_6 ^ var_3))))) / (max((min(var_8, var_4)), -var_14))));
    }
    var_29 = var_14;
    #pragma endscop
}
