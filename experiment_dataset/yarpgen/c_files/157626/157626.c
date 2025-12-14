/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_4 > ((~((var_5 ? var_3 : 67108863)))))))));
    var_14 = (max(var_14, var_3));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (((var_1 ^ 67108863) | (((~(arr_3 [5] [i_1 + 2] [21]))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_11, (max((max((arr_7 [20] [i_3] [i_2] [i_1] [i_0]), var_11)), (min(var_6, var_2))))));
                                var_17 = ((+(max(var_3, ((var_7 ? (arr_0 [i_0] [i_0]) : -1111066711))))));
                                var_18 = (min(((((71 ? 2671527808549890729 : 60)))), (((arr_7 [i_0 - 3] [i_1 - 1] [i_2] [i_3 - 1] [i_4 + 3]) ? (arr_7 [i_0] [i_1] [i_2] [i_3 + 3] [i_4]) : (arr_7 [i_4 + 2] [i_3] [i_2] [10] [i_0 + 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_19 &= ((((((var_1 & 67108871) > (!156)))) >= (((!((min(var_3, (arr_2 [i_0])))))))));
                                var_20 = (30 ? 67108871 : -1972410008318326179);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 4; i_7 < 21;i_7 += 1)
                {
                    var_21 += (arr_9 [i_0] [i_0] [i_0] [11] [7]);
                    var_22 = (((arr_1 [i_7] [i_7 - 2]) ? (arr_1 [i_7] [i_7 + 1]) : -1));
                    var_23 += (arr_13 [i_1] [21] [i_1 + 3] [i_1] [i_1] [i_7] [20]);
                }
            }
        }
    }
    #pragma endscop
}
