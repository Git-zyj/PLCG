/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2 + 1] [i_1] [i_0] = (((((~(arr_4 [i_2 - 2] [i_2 - 2] [i_2 - 2])))) ? ((~((8682151567392451332 ? (arr_3 [i_0]) : 1539258624235026491)))) : -360109792));
                    var_15 -= (-(arr_6 [i_2 - 2] [i_2] [i_2] [i_2 - 1]));
                }
            }
        }
    }
    var_16 = (max(((~(max(var_2, var_7)))), (~1199650291096323527)));
    var_17 = -885154141;
    var_18 = -var_14;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_19 = (max((min((min(var_8, 266127550)), var_8)), 389108267));

                    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_20 = (((((min(4655594330148809333, var_8)) & var_6)) | ((((arr_6 [i_6 + 1] [i_6] [i_6 + 1] [3]) ? var_7 : (((17247093782613228089 ? var_4 : 19))))))));
                        var_21 += var_10;

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_22 = ((0 ? 389108267 : 39354));
                            var_23 = (max(var_23, ((((((arr_14 [i_3] [i_6 + 1]) ? (arr_0 [i_6 + 2]) : (arr_14 [i_6 - 1] [i_6 - 1])))) ? (((arr_0 [i_6 + 2]) + (arr_10 [i_3] [i_6 + 2]))) : (((var_9 ? var_3 : var_12)))))));
                            var_24 = 17247093782613228089;
                            arr_22 [i_3] [i_3] [i_5] [10] [i_7] &= var_2;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_25 = ((var_3 ? var_2 : 1122941452));
                            var_26 = ((arr_0 [i_3]) ? -885154141 : (((1357396237 | 1199650291096323538) ? ((16421365403998909127 ? 0 : (arr_18 [i_3] [0] [8] [i_8]))) : 0)));
                            var_27 = -336839116;
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        var_28 = 3;

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_29 = -1689158569;
                            var_30 = (min(var_30, (((~(arr_21 [4] [i_9 + 1] [i_9 - 1] [i_4]))))));
                            var_31 |= (((arr_27 [i_9 + 1] [i_9] [i_9] [i_9] [i_9 + 2]) ? var_0 : (arr_27 [i_9 + 1] [i_9] [12] [12] [i_9 + 2])));
                            var_32 = ((0 || (arr_26 [i_3] [i_3] [i_3] [i_5] [i_9] [i_3])));
                            var_33 = (arr_15 [i_3] [i_3] [i_9]);
                        }
                        for (int i_11 = 1; i_11 < 17;i_11 += 1)
                        {
                            arr_33 [i_11] [i_9] [10] [i_4] [i_11] = ((~(arr_26 [14] [i_11 + 1] [i_11 + 2] [i_11 + 1] [i_11] [i_9 - 1])));
                            var_34 = (var_12 ? -266127550 : (arr_25 [i_11 + 1] [i_9 + 2] [i_9] [i_9] [i_4]));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
