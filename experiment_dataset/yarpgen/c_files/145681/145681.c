/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_13);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = 1;
        var_20 = (max(var_20, ((max((((arr_0 [i_0] [i_0]) & var_13)), ((var_2 ? ((min(var_7, var_0))) : ((((arr_0 [i_0] [i_0]) < (arr_1 [6] [i_0])))))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        arr_4 [2] &= ((~((4039208895 ^ (arr_0 [i_1] [i_1])))));
        var_21 -= -var_2;
        arr_5 [i_1] = (arr_3 [i_1 + 1]);
    }
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_22 = ((min(((1 | (arr_1 [i_2] [i_2]))), (arr_11 [i_3] [i_2]))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_4] [i_4] [i_3] [i_2] = ((~(((arr_15 [i_4] [i_2]) ? (arr_10 [i_4]) : (arr_15 [i_4] [i_4])))));
                        var_23 = (i_2 % 2 == 0) ? ((((((arr_1 [i_2] [i_5 + 1]) + 2147483647)) >> (((max((((arr_15 [6] [6]) ? var_5 : 270167789)), ((min(-270167790, (arr_8 [i_2])))))) - 18446744073439383813))))) : ((((((((arr_1 [i_2] [i_5 + 1]) - 2147483647)) + 2147483647)) >> (((max((((arr_15 [6] [6]) ? var_5 : 270167789)), ((min(-270167790, (arr_8 [i_2])))))) - 18446744073439383813)))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_23 [i_2] [i_2] [i_2] [i_2] = ((-(arr_0 [i_5 - 1] [i_2 + 1])));
                            var_24 = ((var_7 != (arr_11 [i_2 - 2] [i_3])));
                            var_25 += (!32767);
                        }
                        arr_24 [17] [17] [i_2] [i_4] [1] = (-32767 - 1);
                        arr_25 [i_2] [11] [4] [i_5 + 2] = -125;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_31 [i_8 - 1] [8] [0] [i_7] [8] [i_2] &= ((1 ? ((((((var_15 ? (arr_14 [8] [2]) : 29))) ? -1689589064 : (arr_14 [i_2 - 3] [0])))) : (arr_16 [8] [i_7] [i_8 - 1])));
                        var_26 = (((arr_16 [i_2] [5] [i_7]) + (((arr_29 [i_2] [i_7]) ? (arr_29 [i_2] [i_3]) : 1))));
                    }
                }
            }
            var_27 += ((!((-1689589051 && (arr_8 [i_2 + 1])))));
        }
        var_28 *= var_7;
        arr_32 [i_2] = (max((arr_26 [i_2] [i_2] [i_2] [i_2]), -1));
    }
    #pragma endscop
}
