/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= 25909;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((+(((arr_5 [3] [3] [i_0]) >> (arr_2 [i_0 - 3] [i_0 - 1])))));
                var_19 -= (~9223372036854775807);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_20 = (((((~(1489860719 && var_0)))) ? (max((((25914 ? 2805106556 : 3590666510))), (arr_11 [i_1] [i_1] [i_1] [i_1]))) : ((max((max(1489860719, 1489860736)), (arr_0 [i_0]))))));
                            var_21 -= ((+(((((((arr_10 [i_0] [i_1] [i_0] [0] [i_1] [i_1]) ? (arr_3 [i_3]) : 1))) || ((((arr_11 [i_0] [i_0] [10] [10]) / (arr_0 [7])))))))));

                            for (int i_4 = 1; i_4 < 12;i_4 += 1)
                            {
                                arr_15 [i_0] [i_2] [i_1] = (((arr_7 [i_1] [i_1]) << (((arr_5 [i_2 + 4] [i_2 + 3] [i_2 + 2]) ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : (arr_5 [i_2 + 2] [i_4 + 1] [i_4 + 1])))));
                                var_22 = (-((0 >> (-25909 + 25947))));
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                var_23 = (min(var_23, (arr_0 [i_2])));
                                arr_18 [i_0] [i_1] [i_2 + 4] [i_3 + 1] [i_5] = ((-((57311 ? 1489860719 : 9))));
                                var_24 -= ((~((~(arr_4 [i_2 + 1] [i_2 + 2] [i_2 - 1])))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = arr_14 [i_1];
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_3;
    var_26 = (max(var_26, ((((((-(~25920)))) ? (max((!63), -var_13)) : (((498542126 >> ((max(-25920, var_11)))))))))));
    #pragma endscop
}
