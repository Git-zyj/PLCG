/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 69;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 *= (((((min((arr_2 [i_2]), var_6)))) != ((var_11 ? ((var_1 ? var_12 : (arr_14 [i_0 + 1] [i_1] [i_1] [8] [i_4] [i_2]))) : -8383378101280940222))));
                                var_15 = (min(var_15, var_3));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_16 = (max(var_16, (((((((((var_3 ? 6961220545936662971 : (arr_12 [i_5] [i_2] [i_1] [i_1] [i_0 - 1])))) && (((-(arr_16 [i_5] [2]))))))) / (((var_12 || (((var_5 ? 2008361446 : -6581808897935358642)))))))))));
                        var_17 = 8383378101280940221;
                        var_18 &= ((var_4 ? ((((~22128) ? 370859238 : -1207477673))) : (((~var_2) ? var_11 : var_12))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_20 [i_1] [i_1] [i_1] [i_0] = var_10;
                        var_19 = (max(var_19, (((!((min((arr_13 [i_0] [i_1] [i_2] [i_1] [10]), (((arr_19 [i_0] [i_2] [i_6]) ? 410550718 : 173))))))))));
                    }

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_20 = (min((min(var_2, var_11)), (arr_18 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        arr_23 [i_0] [i_2] [i_1] [i_0] = ((max(var_6, (arr_5 [i_1]))));
                    }
                    var_21 = var_7;
                }
            }
        }
    }
    #pragma endscop
}
