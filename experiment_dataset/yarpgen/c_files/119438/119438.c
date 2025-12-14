/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_16 = (min((max((max(var_2, var_8)), (min(var_14, var_15)))), (~var_2)));
                arr_6 [1] = (((((~(var_7 & var_13)))) && -var_1));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_17 [i_2 + 2] [i_2] [i_3] [7] [i_5] = var_14;
                            var_17 -= 3274370669;

                            for (int i_6 = 2; i_6 < 9;i_6 += 1)
                            {
                                arr_21 [i_3] [1] [i_2] [i_3] [i_3] = ((-((~((min(var_2, var_7)))))));
                                arr_22 [i_2] [i_2] [i_2] [i_2 - 3] = ((max(var_8, (!var_1))));
                                var_18 = (max(var_18, var_13));
                                var_19 = (max(var_19, (~var_0)));
                            }
                            var_20 = (max(var_20, ((min((((!(!var_5)))), (~var_6))))));
                        }
                    }
                }
                arr_23 [i_2] [i_3] = (((((var_14 + var_5) / (var_10 ^ var_13))) ^ var_8));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    arr_26 [i_2 - 2] [i_2] = ((~(~var_14)));
                    arr_27 [i_2] [i_2] [i_2] [i_2] = ((~(~var_8)));
                }
                var_21 = var_15;
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 8;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 8;i_9 += 1)
                    {
                        {
                            arr_32 [i_2] [i_2] [i_3 + 2] [i_3 + 2] [i_8] [i_2] = var_7;
                            arr_33 [7] [i_2] = var_11;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
