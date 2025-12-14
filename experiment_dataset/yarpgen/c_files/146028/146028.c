/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_9 [i_0] [i_3] [i_2] [i_2] [i_1] [i_0] |= (var_8 <= -52);
                        var_10 = 0;
                        arr_10 [i_0] [i_0] [i_0] = 3288699235;
                        arr_11 [i_3] [i_3] [i_3] [i_3] [i_1] [i_3] = 18446744073709551612;
                    }
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        arr_14 [i_4] [i_4] [i_0] [9] [i_0] [i_0] = ((1 ? 1 : 1));
                        var_11 -= ((-(min((((var_0 ? 28 : 1))), var_0))));
                    }
                    arr_15 [i_0] [i_0] = var_2;
                    var_12 = ((608507623 ? 284393720 : ((32 ? 924928870 : 1))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_13 |= ((var_2 >= (min(var_1, var_3))));
                                var_14 = (((min(var_1, var_2))) >= (!var_2));
                            }
                        }
                    }
                    arr_20 [i_0] [7] [i_0] [i_0] = 0;
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_27 [i_9] [i_7] = (1 >> 1);
                    var_15 = 101;
                }
            }
        }
        var_16 = 2265604178;
        arr_28 [i_7] = (3129090688 - var_9);
        arr_29 [i_7] [i_7] = ((((3 ? 2869154865 : 28)) - (var_1 | 1)));
        var_17 = (((var_8 / var_5) < (!var_1)));
    }
    var_18 = var_4;
    #pragma endscop
}
