/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(0, 6));
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = 7;
                                arr_10 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_3 [i_0]);
                                arr_11 [i_4] [i_3] [i_1] [i_1] [i_1] [i_0] = ((var_6 ? ((((((arr_8 [i_0] [10] [i_2]) ? var_6 : var_5))) ? (arr_5 [i_4] [i_1] [i_1] [i_0]) : (arr_5 [13] [i_1] [i_2] [i_2]))) : -71));
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_1] = ((((-(arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (-1058181107 <= -68) : ((~(var_12 & var_2))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 13;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                            {
                                arr_21 [i_1] [i_1] = ((-((~(arr_7 [i_6] [i_6 - 1] [i_1] [i_6 - 3] [4] [3])))));
                                arr_22 [i_0] [i_1] = (arr_18 [i_1]);
                                var_17 += (arr_0 [4]);
                            }
                            for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                            {
                                var_18 = ((~(arr_20 [1] [i_6] [1] [i_6 + 1] [i_6 - 3])));
                                arr_25 [i_1] [i_1] [i_1] [6] [9] = 32754;
                            }

                            for (int i_9 = 1; i_9 < 12;i_9 += 1)
                            {
                                var_19 = (((((-(arr_17 [i_6 - 4] [i_6 + 1] [i_9 + 1] [i_9 - 1])))) / (max(var_1, (arr_17 [i_6 - 3] [i_6 - 4] [i_9 + 2] [i_9 - 1])))));
                                var_20 = ((var_11 >> (((max((arr_20 [8] [i_6 - 1] [i_6] [i_6] [i_6 - 4]), (arr_17 [i_6] [i_6 - 1] [6] [i_6 + 1]))) - 1340938753))));
                            }
                            var_21 -= var_2;
                            arr_30 [i_0] [1] [i_0] [i_1] = (~983040);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
