/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_15 |= var_1;

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            arr_16 [i_4] [i_3] [i_1] [i_1] [i_4] = var_2;
                            var_16 ^= 3;
                            var_17 = (min(var_17, ((((arr_13 [i_0] [i_1] [i_2] [i_4 - 1] [8]) ? (arr_13 [i_0] [i_1] [i_4 + 1] [i_4 + 1] [12]) : (arr_13 [i_0] [i_1] [i_2] [i_4 + 1] [2]))))));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_19 [i_3] [i_2] [5] = ((!((((arr_12 [i_1] [i_3] [i_2] [i_1] [16]) ? -1 : (arr_1 [i_0]))))));
                            var_18 = (min(var_18, 22178));
                        }
                        var_19 = (~var_13);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_20 = (min(var_20, -3));
                            arr_25 [i_0] [8] [i_2] [i_2] = (((arr_15 [i_2]) ? var_8 : var_1));
                            var_21 = (~1);
                            var_22 = (max(var_22, ((((((arr_22 [7] [1] [16] [4] [i_0]) ? 1 : (arr_6 [i_7] [i_6] [i_0])))) ? var_10 : -3830589466857646274))));
                            var_23 -= ((22620 ? 3830589466857646273 : -106));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_24 = (arr_15 [i_8]);
                            arr_30 [i_8] [i_1] [i_2] = (((((42915 ? 141 : (arr_3 [i_6] [i_1])))) ? 2 : var_11));
                            var_25 += var_7;
                            var_26 *= ((-12 ? 3 : 22620));
                        }
                        var_27 = (max(var_27, ((((arr_29 [i_0] [i_1] [1] [i_2] [i_6]) || (arr_27 [i_0] [i_1] [i_2] [i_6] [i_0]))))));
                        var_28 = (min(var_28, var_7));
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_29 = (min(var_29, (arr_24 [i_0] [1] [i_2])));
                        var_30 = ((var_6 ? ((var_8 >> (arr_2 [i_1]))) : (arr_22 [i_0] [i_0] [i_0] [i_0] [6])));
                    }
                    var_31 *= -0;
                }
            }
        }
        var_32 = (min(var_32, var_4));
        var_33 = (max(var_33, 6));
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        var_34 = (((arr_36 [i_10]) ? (!1) : (max((arr_36 [i_10]), (arr_36 [8])))));
        var_35 = (min(var_35, (((var_8 ? (((arr_36 [i_10]) ? (arr_34 [i_10] [12]) : 12)) : (max((!var_13), (arr_36 [i_10]))))))));
        var_36 = (var_9 || var_7);
    }
    #pragma endscop
}
