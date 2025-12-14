/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0]) / var_9)) ^ (((((arr_0 [i_0] [i_0]) && var_14))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] [3] [i_3] = 83;
                    arr_12 [14] [i_2] [i_2] [i_2] &= (!176);
                }
                arr_13 [i_0] [i_1] [i_2] &= var_1;
                arr_14 [i_0] = ((var_0 != (((arr_7 [i_0] [i_1] [i_1]) | var_9))));

                for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_1] [i_0] [i_2] [i_2] [i_4 + 1] = (-17356 | var_4);
                    arr_18 [i_4] [i_2] [i_1] [7] = (!4623477693172819279);
                    arr_19 [i_0] [18] [i_2] [i_4 - 1] = var_2;
                }
                for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_1] [i_2] [i_5 - 1] = 3448738505537955202;
                    arr_23 [i_1] &= (((arr_15 [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1]) >= var_3));
                    arr_24 [i_1] [i_1] &= var_12;
                    arr_25 [i_5] [i_1] [i_1] [i_1] = (var_12 || var_7);
                }
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    arr_29 [i_0] [i_0] = (((3448738505537955201 * 14998005568171596420) / var_7));
                    arr_30 [i_0] [i_0] = -168;
                }
                arr_31 [i_2] = (((arr_4 [i_0] [i_0]) - (!var_13)));
            }

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                arr_34 [i_7] [8] [8] [i_0] = (((((~(arr_33 [i_0] [i_0])))) ? ((3448738505537955202 ? (arr_0 [i_0] [13]) : var_1)) : var_7));
                arr_35 [i_0] [i_0] [i_0] = (!(((1 ? var_7 : var_4))));
                arr_36 [19] [19] = var_9;
            }
        }
        arr_37 [i_0] &= ((~(~var_2)));
    }
    var_15 &= (!var_9);
    var_16 = 74698923;
    var_17 = (((((~var_0) && ((min(var_0, -17356))))) ? ((-var_4 ? (var_12 * var_2) : ((min(var_12, var_8))))) : ((var_4 ^ ((1 ? var_2 : 104))))));
    #pragma endscop
}
