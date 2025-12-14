/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = 0;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 17;i_4 += 1)
                            {
                                var_21 = ((((arr_10 [i_0] [i_3] [i_0] [i_0] [i_4 + 2] [i_3]) ? var_5 : (arr_10 [i_1] [i_4 + 2] [i_4] [i_4 + 2] [i_4 + 3] [i_4]))));
                                arr_13 [i_0] [i_0] [i_0 + 1] [i_4] [i_0] [i_1] = 1;
                                arr_14 [i_0] [i_3] [i_2] [i_1] [i_0] = 1;
                            }
                            /* vectorizable */
                            for (int i_5 = 4; i_5 < 16;i_5 += 1)
                            {
                                var_22 = (!1);
                                arr_17 [i_5] [i_2] [i_0] [i_2] [i_0] [i_1] [i_0 + 1] = ((1 ? 1 : 1));
                            }
                            arr_18 [i_0] [i_3] = ((+(((arr_3 [i_0 + 1] [i_0]) ? var_6 : (arr_10 [i_0] [i_0] [i_1] [i_2 - 1] [i_3] [i_3])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 4; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_23 = ((((1 ? (((min(1, 1)))) : ((var_10 ? var_0 : (arr_0 [i_0]))))) == var_5));
                                var_24 = var_4;
                                arr_27 [i_7] [i_7] [i_0] [i_0] [i_0] = (!(((~(arr_1 [i_0 + 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
