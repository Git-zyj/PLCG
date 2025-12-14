/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 ^= ((((min(var_2, -var_10))) || (((var_8 ? ((255 ? 2002298535 : 6124814487660612561)) : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_13 = (arr_4 [i_0 - 1] [i_0 - 1] [i_0]);
                    arr_8 [i_2] [i_1] [i_1] [i_1] = (var_8 >> (var_10 - 2467907690));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_14 = (arr_5 [i_3] [i_1] [i_0]);
                    var_15 = (((min(3437852682, ((max(var_8, (arr_7 [i_0] [i_0 - 1] [i_3])))))) << ((((max(126, (arr_2 [i_0 - 1])))) - 106))));
                    arr_12 [i_0] [i_0] [i_3] [i_0] = var_5;
                }

                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    var_16 = (min(var_16, ((((arr_4 [i_4 + 1] [i_4] [i_4]) ? var_4 : (((var_7 && (arr_14 [i_0 - 1] [i_0 - 1] [i_1] [i_4 + 1])))))))));
                    var_17 = (max(var_17, (((((((arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]) / var_9))) < (min(6124814487660612561, (arr_3 [i_0 - 1] [i_0]))))))));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_18 = (((arr_10 [i_0 - 1] [i_5 + 4] [i_5 + 4]) % var_3));
                    var_19 = (~1);
                    var_20 = (max(var_20, ((((arr_13 [i_5] [i_0 - 1]) % (arr_13 [i_1] [i_0 - 1]))))));
                }
                for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_25 [i_1] [i_7] [i_6 + 1] [i_7] [i_8] = ((max((arr_17 [i_0] [i_6 - 2] [i_7]), var_2)));
                                var_21 *= (~62);
                                var_22 = (min(var_22, (arr_18 [i_0 - 1] [i_6 - 1] [i_6 + 2] [i_6])));
                                var_23 = ((!(((arr_13 [i_7] [i_7]) && var_8))));
                                var_24 = var_7;
                            }
                        }
                    }
                    var_25 = (min(-3, 32752));
                }
            }
        }
    }
    #pragma endscop
}
