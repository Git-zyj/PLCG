/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((65523 ? var_10 : var_11));

    for (int i_0 = 3; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0 + 1]);
        arr_4 [i_0 + 3] = ((((-(((arr_2 [i_0] [i_0]) ? 904867110 : -9382)))) & (max(24, 1252547034))));
        arr_5 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [13] = 803878777;
        var_15 = (min(var_15, (arr_8 [i_1 - 1])));
        arr_10 [i_1 + 1] = (((max(-16776704, (min((arr_0 [11]), var_10))))) ? ((65523 ? (arr_8 [i_1 + 1]) : -30172)) : 21260);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_23 [15] [i_2] [i_3] [i_4] [i_5] = ((((((var_10 ? var_13 : 90)))) ? ((32512 ? 1 : 32760)) : (3390100185 - 1)));
                                var_16 = ((((((((3390100185 ? 8126464 : 19290))) ? ((((arr_15 [15] [12] [i_2] [i_1]) <= (arr_1 [i_1] [i_4])))) : -var_12))) ? ((((max((arr_12 [i_5] [i_4] [i_3]), (arr_19 [i_5] [i_4] [i_4] [i_3] [i_2] [13])))) ? (((var_12 ? var_3 : var_0))) : (max(2582987481177282823, (arr_6 [i_2]))))) : (((max(var_13, var_3))))));
                            }
                        }
                    }
                    var_17 = arr_1 [i_1] [i_2];
                    var_18 = (max(var_18, (((var_0 ? (arr_18 [i_3] [i_3] [18] [i_3]) : (((min((arr_2 [i_1 - 1] [i_1 + 1]), (arr_2 [i_1 - 1] [i_1 + 3]))))))))));
                    var_19 = (max(var_19, var_11));
                }
            }
        }
    }
    var_20 = (min(var_5, ((~(65506 <= var_3)))));
    var_21 = var_13;
    var_22 = var_13;
    #pragma endscop
}
