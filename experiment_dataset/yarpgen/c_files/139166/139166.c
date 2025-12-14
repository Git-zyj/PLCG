/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = var_5;

                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    var_19 = (arr_10 [i_0] [i_2]);
                    var_20 = (arr_8 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((min((max((((arr_10 [i_0] [i_0]) % var_6)), -1322439517)), (arr_4 [i_0] [i_1]))))));
                                var_22 |= 0;
                            }
                        }
                    }
                    var_23 = (((arr_3 [i_0] [i_1] [i_2 + 1]) / ((max(((369257054 ? var_5 : 0)), ((var_18 ? 1 : (arr_2 [i_0] [i_1] [i_2]))))))));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    arr_21 [i_5] [i_1] [i_5] = (arr_16 [i_5] [i_0] [i_1] [i_5] [i_5]);
                    arr_22 [i_5] [i_5] = var_10;
                    var_24 ^= var_4;
                }

                /* vectorizable */
                for (int i_6 = 2; i_6 < 24;i_6 += 1)
                {
                    var_25 = (arr_19 [i_6] [i_6 - 2] [i_0]);
                    var_26 += 0;
                    var_27 = (max(var_27, (arr_18 [4] [i_6] [i_6 + 1] [i_6])));
                    var_28 ^= (30978 - var_6);
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_29 ^= -2772804991632067786;
                    arr_29 [i_7] [i_7] [i_7] = (!(arr_0 [i_7] [i_0]));
                    var_30 = (min(var_30, (7 && 65516)));
                    var_31 ^= (arr_26 [i_0] [i_0] [i_0]);
                }
                var_32 = (max(var_32, (1 || 32)));
                var_33 = (arr_11 [20] [i_1] [i_1] [10] [i_1] [i_1]);
            }
        }
    }
    var_34 -= 1332792307;
    var_35 = var_3;
    var_36 = var_14;
    var_37 = var_3;
    #pragma endscop
}
