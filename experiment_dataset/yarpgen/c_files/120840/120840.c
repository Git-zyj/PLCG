/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 243;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_9 [i_0 + 1] [1] = 390129534407022904;

                        for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_4] [15] [i_2] = 2089433182513854814;
                            var_14 = (((arr_1 [i_1] [i_2]) ? 3440998528 : 853968768));
                            arr_14 [i_0] [i_3] [i_2] [i_1] [i_1] = 853968768;
                        }
                        for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_2] [13] [i_3] [i_5 - 2] = var_11;
                            var_15 = (arr_1 [i_0 + 1] [i_1 + 1]);
                            var_16 ^= 60;
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            arr_22 [i_6] [i_6] [1] [i_2] [1] [i_0] = (arr_15 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_1 + 3]);
                            var_17 = (arr_18 [17]);
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            arr_25 [i_0] [i_0 + 1] [i_0] [i_2] [i_0] [i_7] = (60 >= 180);
                            var_18 ^= 180;
                            var_19 = (max(var_19, ((((arr_11 [i_0 - 1] [i_1 + 3] [i_1 - 1] [i_3] [i_7 + 2]) ? 72022409665839104 : (arr_11 [i_0 - 1] [i_1 - 3] [i_1] [i_3] [i_7 - 1]))))));
                            var_20 = (arr_6 [i_1 - 3] [i_1] [i_1 - 2] [3]);
                            var_21 += ((-(arr_23 [i_7] [22] [i_7 + 1] [i_7] [i_7] [4])));
                        }
                    }
                }
            }
        }
        arr_26 [1] [0] = var_4;
    }
    for (int i_8 = 3; i_8 < 18;i_8 += 1)
    {
        arr_29 [i_8] = ((!(!var_0)));
        var_22 = (min(var_22, var_12));
        var_23 = (!var_4);
        arr_30 [i_8] = ((max(var_12, ((32767 / (arr_17 [i_8 - 3] [13] [i_8] [9] [i_8] [15] [i_8]))))));
    }
    var_24 = (max(var_5, 0));
    #pragma endscop
}
