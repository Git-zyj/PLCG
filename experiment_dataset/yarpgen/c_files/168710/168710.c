/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((13152 ? (var_11 / var_0) : var_2));
    var_18 = 0;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((((var_3 ? ((1906114970 ? 1906114944 : var_6)) : 15323))) ? -13152 : var_2));
        var_19 -= 1906114944;
        var_20 = var_4;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = var_2;
        arr_5 [i_1] [i_1] = ((var_6 ? (arr_1 [i_1]) : (arr_1 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_22 = (i_1 % 2 == 0) ? (((((var_10 ? 1906114960 : var_4)) - (arr_3 [i_1])))) : (((((var_10 ? 1906114960 : var_4)) + (arr_3 [i_1]))));

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_23 = (min(var_23, ((((arr_7 [i_1]) ? (arr_4 [i_3]) : (arr_14 [i_5] [i_2] [i_1] [6] [i_2]))))));
                            arr_17 [i_1] = (((arr_16 [i_1] [i_2] [20] [i_1] [20] [i_4] [i_5]) ? -1906114970 : (~var_5)));
                            arr_18 [i_1] [i_2] [6] [i_3] [i_5] |= -68359058177276964;
                            var_24 = (((((arr_11 [i_5] [i_2] [i_3] [i_4] [i_2] [i_2]) - var_7)) * (((((arr_6 [i_1] [i_3]) <= -15324))))));
                        }
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            var_25 = ((127 << (-15331 + 15336)));
                            var_26 *= (((1906114971 != -1906114927) ? (var_8 ^ var_4) : (!var_16)));
                            arr_23 [i_2] [i_2] [i_3] [i_4] [i_3] |= (((arr_16 [i_3] [i_6] [i_6] [i_3] [i_3] [i_6] [i_6]) ? ((var_16 - (arr_6 [i_2] [i_2]))) : var_14));
                        }
                    }
                }
            }
        }
        var_27 -= ((-(arr_3 [4])));
    }
    #pragma endscop
}
