/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_8 ? var_2 : -14685));
    var_15 = (max(var_15, (((var_10 != (((((-6586468557801529048 ? 6586468557801529053 : 1))) ? (min(-6586468557801529048, 0)) : 8433881091122354383)))))));
    var_16 = var_9;
    var_17 = (!var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 += ((max(-10, ((min(57, (arr_1 [i_0])))))) ^ ((7 ? (~26285) : ((~(arr_3 [8]))))));
                var_19 = 18;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] [i_0] = 14121;
                    var_20 = 262143;

                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_2] [i_0] [i_2] [i_2] [i_0] [i_0] = ((48737 <= (arr_4 [i_0] [i_0] [i_2 + 2] [i_3])));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_21 = ((16777215 ? 16777215 : 3404322433));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((12 ? (arr_7 [12] [i_1] [i_2] [12]) : -8161117722706086692)) << (112 - 90)));
                        }
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_1] [i_0] [i_1] [i_1] = -23598;
                        arr_19 [i_0] [i_1] [i_2] [i_0] = var_1;
                    }
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    arr_22 [i_0] [i_1] [i_1] = ((((max(var_0, 28069))) ? ((8805960534549508711 ? 1 : 0)) : (!-6294129446561615556)));
                    var_22 = var_0;
                    var_23 = (max(var_23, ((max((((((arr_11 [i_0] [2] [i_6] [i_6] [10]) ? 2367 : var_8)))), 16777215)))));
                    arr_23 [i_0] = 1;
                }
            }
        }
    }
    #pragma endscop
}
