/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = var_2;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_18 = var_11;
                        arr_12 [i_0] [i_1] [i_2] [i_2] = ((var_9 & (var_6 + var_1)));
                        var_19 = (max(var_19, var_8));
                    }
                    arr_13 [i_1] [i_1] [i_0] [i_1] = var_0;
                    var_20 = (max(var_20, (((var_1 & (var_15 / var_8))))));
                }
                /* vectorizable */
                for (int i_4 = 4; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [i_0] = var_12;
                    arr_17 [i_0] [i_0] [i_4] [i_4] = var_5;
                    var_21 = (max(var_21, var_8));
                }
                for (int i_5 = 4; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    var_22 ^= (((((var_10 == (var_13 ^ var_6)))) * ((((var_8 ^ var_6) == (var_9 || var_15))))));
                    arr_21 [i_0] [i_1] [i_0] [i_1] = (var_6 || var_4);
                    var_23 = (max(var_23, var_8));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            var_24 = (0 ^ 0);
                            var_25 = ((var_14 >> (var_16 - 31393)));
                            arr_26 [i_0] [i_5] [i_5] [2] [14] |= var_6;
                            arr_27 [i_0] [i_0] [8] [i_5] [1] [i_7] [i_0] = var_3;
                            var_26 ^= var_7;
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_27 = (min(var_27, var_13));
                            var_28 = var_16;
                            var_29 = (min(var_29, var_7));
                        }
                        var_30 = (((var_5 & var_4) >= (var_10 | var_3)));
                        var_31 = (max(var_31, var_1));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_32 = var_2;

                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_33 = ((var_10 + ((((var_14 - var_11) * (var_2 || var_10))))));
                            arr_36 [i_10] [i_0] [i_9] [i_0] [i_1] [i_0] [i_0] = ((((((var_7 || var_13) - (var_16 & var_4)))) || var_6));
                        }
                        arr_37 [i_0] [i_1] [i_0] [15] = var_8;
                    }
                    var_34 = var_8;
                }
                var_35 = ((((((var_4 / var_0) || var_2))) << (var_10 - 6864037733573417064)));
            }
        }
    }
    var_36 = ((((var_14 >> (var_0 == var_13))) ^ var_8));
    #pragma endscop
}
