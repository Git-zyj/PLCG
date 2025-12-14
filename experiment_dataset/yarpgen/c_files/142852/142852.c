/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_11 = 181;
                            arr_13 [i_1] [i_2] [i_3] = (max(((~((~(arr_5 [i_3]))))), var_4));
                            arr_14 [i_2] [i_1] [i_2] [i_3] = ((((var_6 < (arr_5 [i_0]))) || ((!(arr_5 [i_3])))));
                            var_12 = 3143431304;
                            arr_15 [i_1] [i_2] = (min(3143431300, var_8));
                        }
                    }
                }
                var_13 = var_0;

                /* vectorizable */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [5] [i_4] [1] [i_6] = 62;
                                var_14 += (((arr_1 [17]) - var_3));
                                var_15 = (((arr_6 [i_1] [1] [i_0] [i_6]) + (arr_16 [i_0] [i_1] [i_0])));
                            }
                        }
                    }
                    var_16 *= var_5;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_17 -= var_3;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_18 = (min(var_18, -var_0));
                                var_19 = ((!(arr_29 [i_0] [1] [i_7] [i_8] [1])));
                                var_20 = var_7;
                                var_21 = (!68);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (0 | var_7);
    var_23 = (((((var_9 / ((3143431281 ? var_7 : (-2147483647 - 1)))))) | (max(((var_3 ? var_6 : 4294967282)), var_2))));
    var_24 = max((((var_3 != (var_5 || var_10)))), var_3);
    #pragma endscop
}
