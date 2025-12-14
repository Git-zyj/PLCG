/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_6));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_6 [i_0] = (((arr_1 [i_0 - 2] [i_2]) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0 - 2] [i_1])));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(arr_5 [i_0] [i_0] [i_0])));
                        arr_12 [i_0 + 2] [i_1] = (239 == 236);
                        arr_13 [i_0] [i_1] = (((arr_8 [i_0] [i_1] [i_2] [i_2]) ? ((5849640334228074488 ? 255 : 17)) : (((arr_5 [i_0 + 3] [i_2] [i_0 + 3]) ^ (arr_4 [i_0] [i_1] [i_2] [i_0])))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = (((215 || (arr_7 [i_0 + 3] [i_0] [i_0] [i_0] [i_0 + 1]))));
                        var_15 = (min(var_15, ((((arr_3 [i_0] [i_2]) ? (arr_9 [i_0 + 3] [i_1] [i_2] [i_1] [i_0 + 3]) : ((+(min((arr_5 [i_1] [i_1] [i_3]), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_16 = (min(var_16, (((~(154 | 12942))))));
                        arr_17 [i_0 + 2] [i_0] [i_0] [i_0] [i_4] = ((1 ? 238 : -2342666952849185353));
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_17 = (max(var_17, ((((arr_2 [i_0 - 2] [i_0 - 2] [i_0 - 2]) & (arr_4 [i_0] [i_0 + 1] [i_5] [i_0 + 1]))))));
                    var_18 -= (((arr_9 [i_0] [i_0 + 2] [i_0 + 2] [i_1] [i_1]) ? 65535 : ((-(arr_3 [i_0] [i_0])))));
                    var_19 = (min(var_19, ((((arr_1 [i_0] [i_0 - 2]) ? (arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_1]) : (arr_7 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0]))))));
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((+((((arr_9 [i_6] [i_0] [i_0 + 3] [i_0] [i_0]) > (arr_9 [i_8 - 1] [i_8] [i_0 + 3] [i_0] [i_0 + 1])))))))));
                                var_21 -= (((arr_16 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0]) ? (arr_4 [i_0 - 1] [i_0] [i_0] [i_0]) : (max(0, (arr_15 [i_0] [i_0] [i_0] [i_0 + 3])))));
                                var_22 -= (max(18446744073709551615, ((((arr_3 [i_0 + 1] [i_6]) ? (((arr_18 [i_7] [i_0] [i_1] [i_0]) ? 8400170690353129737 : (arr_20 [i_0] [i_1] [i_8]))) : (arr_18 [i_0 + 3] [i_0 + 1] [i_0] [i_0]))))));
                                var_23 = (max(var_23, (((~((max((arr_22 [i_0] [i_1] [i_6] [i_1] [i_7] [i_0]), (arr_18 [i_1] [i_6] [i_7] [i_8])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(var_24, var_5));
    var_25 -= ((-((var_12 ? var_12 : var_4))));
    #pragma endscop
}
