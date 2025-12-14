/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (-(((((21205 ? 21200 : 1))) + (min(var_3, (arr_2 [i_0] [i_1 + 1] [i_2 + 2]))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        var_12 = ((!(((-(18971 | 1))))));
                        var_13 *= (arr_6 [i_1 - 1] [20] [i_2] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_14 = ((((((arr_8 [4] [i_1 - 1] [i_1 - 1]) - (-7648 - 18958)))) + 10));
                        arr_13 [i_0] [i_1] = (((((((arr_6 [i_0] [i_1 - 1] [i_1 - 1] [4]) << (-13230 + 13253))))) ? ((((min(44336, 32256))))) : ((((max((arr_9 [i_1]), 1))) ? var_3 : 1))));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_15 *= (((((-30378 ? var_5 : var_8))) / 21207));
                        arr_16 [i_0] [i_1 + 1] [i_2 - 1] [i_0] = ((~(!-8352)));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_16 = 103287930;
                        var_17 = (max(var_17, (((~(!30375))))));
                    }
                }
            }
        }
    }
    var_18 = -13246;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_19 = ((arr_4 [8]) & var_5);

        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_20 = 50880;
            var_21 = (4225 & -2096640);
            arr_26 [i_7] [i_7] [i_7] |= ((~((~(arr_7 [i_7] [i_8])))));
        }
        var_22 = (!39);
        var_23 = ((!(arr_2 [i_7] [i_7] [i_7])));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_24 = -6253;
        var_25 = ((!((((!var_3) << (150 - 142))))));
    }

    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
    {
        arr_31 [i_10] [i_10] = (~var_3);
        var_26 = ((((~(arr_7 [i_10] [i_10]))) ^ ((~(arr_7 [i_10] [i_10])))));
        var_27 = (((var_9 * 2096640) >= ((((!((((arr_4 [i_10]) ? 0 : 21206)))))))));
        arr_32 [i_10] = 0;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
    {
        var_28 += 52989;
        var_29 = ((!(!-32762)));
    }
    var_30 = (~1575050764700983013);
    #pragma endscop
}
