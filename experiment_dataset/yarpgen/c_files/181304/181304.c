/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 18;i_4 += 1)
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [13] = (max((((arr_3 [i_0 - 1]) + (arr_0 [i_3 - 3] [i_0 - 2]))), (((-var_7 == (((var_4 > (arr_6 [i_2] [i_2] [i_2])))))))));
                                arr_13 [0] [10] [12] [i_0] [i_4] = (min((1 >= var_10), (min(((min(var_12, (arr_1 [5])))), (arr_7 [i_3])))));
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_17 += ((1 >> ((((2 ? var_12 : (1 >= var_15))) - 3381))));
                                arr_16 [i_0] [i_0] [i_2] = ((((2585390748 ? var_6 : var_13))) > (((var_9 == (arr_14 [8])))));
                            }
                            for (int i_6 = 0; i_6 < 20;i_6 += 1)
                            {
                                arr_20 [i_6] [i_0] [i_2] [i_0] [6] = var_14;
                                arr_21 [i_0] [13] [i_0] [7] [i_6] = (((~(arr_17 [i_0] [1] [i_0] [i_0] [i_0]))));
                                arr_22 [i_0] [i_0] [i_2] [i_0] [i_3] [i_6] = ((1 >= 1) ? (-32 & -2219575040043150939) : ((((arr_6 [i_0 + 1] [i_0 - 3] [i_3 - 2]) << 1))));
                            }
                            var_18 -= (arr_6 [i_3] [15] [i_0]);
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_19 += 62;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_32 [i_8] [19] [i_0] [i_0] = var_8;
                                arr_33 [i_0] [i_8] [3] [i_1] [i_0] = (arr_19 [i_0] [i_0 - 2] [i_0] [i_8]);
                                arr_34 [i_9] [i_0] [i_0] [0] [i_0] [i_0] [i_0] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = var_16;
    var_21 -= var_10;
    var_22 |= 1;
    var_23 -= -var_3;
    #pragma endscop
}
