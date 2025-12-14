/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 |= (arr_7 [i_0] [0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min((((var_6 ^ (arr_8 [i_0] [i_2] [i_2] [i_4])))), var_2));
                                var_11 = var_5;
                                arr_18 [i_0] [i_0] [i_0] = (max(((var_7 * (max(var_6, (arr_8 [i_0] [i_1] [i_2] [i_3 - 2]))))), (min((((var_5 >= (arr_3 [i_0])))), var_8))));
                                arr_19 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] [i_0] [i_4] = (min((((var_3 != (arr_1 [i_0])))), var_1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] [i_2] [i_0] = var_7;
                                var_12 |= (max(var_5, ((var_9 & (min(var_9, (arr_14 [4] [i_2])))))));
                                var_13 = (arr_23 [i_0] [i_5 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 |= (var_4 || var_9);
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            {
                var_15 |= (var_4 ^ var_7);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_16 = (arr_33 [i_7] [i_7] [7] [i_7]);
                            arr_35 [i_7] [i_7] [i_10] [i_10] [i_7] [i_7] |= (arr_27 [i_10]);
                            arr_36 [i_7] [i_8] [i_9] [i_9] = (max((((var_1 && ((min((arr_32 [i_9] [1]), (arr_32 [i_9] [12]))))))), (arr_29 [i_9] [i_8 + 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
