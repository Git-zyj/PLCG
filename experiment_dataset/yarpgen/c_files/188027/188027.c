/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((-(min((~24040), (arr_8 [i_2 + 1] [i_2] [i_2])))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_14 [i_0] [0] [i_3] [7] [i_3] = (arr_8 [i_0] [i_1] [i_2]);
                        arr_15 [i_3] [i_2] [i_1 + 3] [i_0] [i_3] = 41495;
                        arr_16 [i_3] [i_2] = ((+(((arr_5 [i_2 + 1] [i_1 + 1]) ? ((max(24040, (arr_4 [i_0] [i_1 + 2] [i_3])))) : (min(13853, (arr_5 [i_2 - 1] [i_1])))))));
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_19 = ((~(((arr_12 [i_0] [i_1 - 1] [i_1 + 3] [i_1 + 2]) << (var_1 - 29460)))));
                        arr_19 [i_4 + 1] [i_2] [2] [i_0] = var_15;
                        var_20 = (!29);
                        var_21 = (min(var_21, ((max(((-((-(arr_8 [i_0] [i_0] [i_0]))))), 1)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_22 = (arr_18 [i_0] [8]);
                        arr_23 [i_1] = 13853;
                        arr_24 [i_0] [i_1] [i_2 + 1] [i_2] [i_5] [i_5] = -8056;

                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            var_23 = 1;
                            var_24 = ((~(~var_4)));
                            var_25 = (((arr_0 [i_1 - 2] [i_1 - 2]) >= (arr_17 [i_1 - 1] [i_6 - 1] [i_6 - 1] [i_6])));
                        }
                    }
                    arr_28 [i_2 - 1] = ((((((!(arr_20 [i_0] [i_1] [i_0]))))) ^ ((-(arr_1 [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_26 = (min(var_26, ((max(((((arr_3 [i_7 + 2] [i_1 - 2]) ? (arr_3 [i_7 + 1] [i_1 + 2]) : (arr_3 [i_7 + 2] [i_1 + 1])))), (((((arr_13 [7] [i_7] [8] [i_1]) ^ (arr_30 [i_0]))) / 12673031918312644543)))))));
                                var_27 = ((var_8 <= (((var_2 && (arr_25 [i_2] [i_7 - 1] [i_7 - 1] [i_7 + 2] [i_8]))))));
                                var_28 = (arr_30 [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = 12673031918312644543;
    var_30 |= (!((((!var_11) ? ((max(11501, 31622))) : (44960 || -102)))));
    var_31 = (min(var_31, var_18));
    var_32 = (!var_6);
    #pragma endscop
}
