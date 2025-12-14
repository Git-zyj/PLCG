/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, 8273636941974983971));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            arr_13 [i_2] [9] [3] [9] [i_4] [i_0] = ((min((min(16, var_6)), (arr_10 [9] [i_0 - 1] [i_1 - 3] [i_2 + 1] [i_3 + 1]))));
                            arr_14 [i_2] [i_2] [i_2] [i_2] [8] = var_3;
                            arr_15 [i_2] [9] [i_2 - 1] [i_1] [i_2] = ((0 ? -1 : (arr_5 [i_4] [i_3] [i_2] [i_1 - 1])));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_18 [16] [i_2] [i_2] [16] [16] = (((arr_0 [i_3 + 2]) >= var_2));
                            arr_19 [i_2] [i_3] [1] [i_1] [i_2] = ((-910530269 ? var_5 : (arr_8 [i_0] [i_2] [13] [i_2] [i_3 - 1])));
                            var_16 = -5183868898275152474;
                            arr_20 [i_0] [i_1] [i_2] [i_2] [i_1] = 4655100973375211001;
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_23 [i_0] [i_0] [8] [i_0] [i_0 - 1] [i_0] [i_2] = ((!((((max(0, (arr_17 [i_2])))) <= (((arr_1 [i_1]) * 27471))))));
                            var_17 -= ((var_6 == (arr_17 [i_1])));
                            var_18 *= -0;
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_26 [i_0] [i_2] [i_3] [i_7] = (((((arr_10 [2] [i_1] [i_2] [12] [i_1 + 1]) && (arr_10 [i_0] [i_0] [i_0 + 2] [i_3] [i_1 + 1]))) ? (arr_10 [9] [i_3] [i_7] [i_3] [i_1 - 4]) : 313395436));
                            var_19 = ((-4015807025478565526 ? 1 : ((max(35, var_8)))));
                            arr_27 [i_1] [13] [i_2] [7] [i_2] [i_2 - 1] = -611175806;
                        }
                        var_20 = (((((arr_0 [i_3 + 1]) / 6)) - ((4341064023356877146 ? (arr_5 [i_3] [i_3 + 1] [i_3 + 2] [4]) : (arr_0 [i_3 - 1])))));
                        arr_28 [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0] [i_2] = ((((max(249, 1))) - (((min(var_10, (arr_16 [i_0 - 1] [i_0 - 1] [i_2] [i_2] [1] [i_3] [i_3])))))));
                        var_21 = (max(var_21, ((((((arr_10 [i_3] [i_3 + 2] [i_2 - 1] [i_0 - 1] [i_0]) ? (arr_10 [i_3] [i_3 + 2] [i_2 - 1] [i_0 - 1] [i_0]) : (arr_10 [3] [i_3 + 2] [i_2 - 1] [i_0 - 1] [3])))) ? ((min(1, -1))) : (arr_6 [i_3] [i_2] [i_1] [i_0])))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_32 [i_0] [11] [i_2] [i_8] [i_2] [i_2] = 14072239535524305768;
                        arr_33 [i_2] [i_1] = (arr_8 [i_0] [i_1] [i_0] [i_2] [i_0]);
                    }
                    for (int i_9 = 3; i_9 < 17;i_9 += 1)
                    {
                        arr_36 [i_2] [i_2] [i_2] = (~1);
                        arr_37 [12] [i_1] [i_1] [i_2] [i_1] = 116;
                        arr_38 [i_2] [i_9] [i_2] [14] [i_2] = (arr_30 [i_2] [i_1]);
                        arr_39 [i_2] [i_0] [i_2] [i_0] = ((804036615 ^ (arr_35 [i_0] [i_0] [i_1] [i_1])));
                    }
                    var_22 = (arr_25 [i_2] [i_2 + 1]);
                    var_23 = var_1;
                }
            }
        }
    }
    #pragma endscop
}
