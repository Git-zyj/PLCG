/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] = (((((1 * (arr_10 [1] [1] [1] [i_0])))) ? (((1 >= ((max(1, 0)))))) : var_1));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_15 [i_0 - 1] [i_1 - 1] [i_2] [1] [i_4] [i_2] [i_3] = var_2;
                                var_11 = (arr_5 [i_1 - 1] [i_1] [i_2]);
                                var_12 = (((0 ? 1 : var_5)));
                            }
                            for (int i_5 = 0; i_5 < 0;i_5 += 1)
                            {
                                arr_18 [i_0] [i_1] [i_3] [i_3] [1] = (max((min((((arr_4 [i_0] [i_0 - 1]) ? 1 : var_3)), 1)), ((min((arr_14 [i_0 - 1] [i_5] [i_5] [i_5] [i_5 + 1]), (arr_0 [i_0]))))));
                                arr_19 [i_5] [i_3] [i_2] [i_1 - 1] [i_0] = (max((((1 < (arr_13 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1])))), (arr_13 [i_1 - 1] [i_1] [i_1] [i_1 - 1])));
                                var_13 = (!var_5);
                            }
                            var_14 &= -0;
                            var_15 = arr_8 [i_0] [i_0] [i_0];
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    var_16 = ((var_10 ? 1 : 1));
                    var_17 = ((+(max((arr_6 [i_0 - 1] [i_0 - 1]), (1 ^ var_4)))));
                    var_18 = min((max((arr_11 [i_0] [i_1] [i_1] [i_1] [i_6] [i_6 + 1]), (min((arr_8 [i_0] [i_1 - 1] [1]), var_3)))), ((!((((arr_3 [i_0 - 1]) * (arr_6 [i_0 - 1] [i_0 - 1])))))));
                    var_19 = (min(var_19, ((min((arr_4 [i_6] [i_1]), (arr_4 [i_0 - 1] [i_0 - 1]))))));
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_28 [i_7 - 1] [i_7 - 1] [i_7] = min(((max((arr_27 [i_0] [i_0 - 1] [i_0]), var_4))), (((arr_9 [i_7 - 1] [i_7 - 1] [i_7] [i_7]) != 1)));
                            var_20 *= (max((arr_17 [i_0] [i_0 - 1]), ((1 ? (((arr_7 [i_0] [1] [i_7]) / 1)) : var_6))));
                        }
                    }
                }
            }
        }
    }
    var_21 &= (~var_10);
    #pragma endscop
}
