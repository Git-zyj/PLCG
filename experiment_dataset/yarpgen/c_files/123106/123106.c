/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= 4256933086;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = var_12;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] = var_1;
                            var_15 = (min((var_0 ^ 2529476762810780991), ((min(((0 ? var_11 : 2147483647)), ((var_1 ? var_0 : (arr_2 [i_1] [1]))))))));

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 15;i_4 += 1)
                            {
                                var_16 = var_5;
                                var_17 += 4256933086;
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 15;i_5 += 1)
                            {
                                arr_17 [i_1] [i_1] = ((((-725842658 ? (arr_8 [i_0] [i_1 + 3] [i_2] [i_1] [i_5 + 1]) : var_4))) ? var_3 : (arr_14 [i_5 - 1] [i_5 - 1] [i_5] [i_5] [i_5] [i_1]));
                                arr_18 [8] [i_2] [3] [i_1] [i_2] = 1;
                                arr_19 [i_1] [i_3] [i_2] [1] [i_1] = 1453294340395245505;
                                var_18 += var_8;
                                arr_20 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_1] = (((arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 2]) ? (arr_9 [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_3 - 2]) : var_5));
                            }

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 16;i_6 += 1)
                            {
                                arr_24 [i_1] [13] [13] [i_2] [i_1] [13] = 1;
                                var_19 = ((-(arr_21 [i_1] [i_6])));
                                arr_25 [i_0] [i_1 - 1] [i_1] [i_6] = (1 != -1240203175);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_7;
    #pragma endscop
}
