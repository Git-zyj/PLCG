/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((42 ? -var_9 : 1))) | (((1 - -26315) ? (max(48776, var_7)) : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = ((max(10306183660919969875, (arr_2 [i_0]))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 = var_0;
                    arr_6 [i_0] = (arr_0 [i_1]);
                    var_20 = ((~(var_4 | var_6)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4 - 2] = (((arr_8 [i_0] [7] [i_0] [1] [i_4] [i_2]) ? (((((arr_1 [i_1]) != -3627380022237140769)))) : (arr_5 [i_0])));
                                var_21 = ((var_0 ? var_16 : 19846));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_22 = (max(var_22, 9216283427822140294));
                    var_23 *= (var_1 ? 8561570695416288338 : var_5);
                    var_24 -= (1 != var_14);
                }
                var_25 = (arr_2 [i_1]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_26 = 10306183660919969866;
                            var_27 -= ((8140560412789581740 ? (max(1, 8140560412789581730)) : -7316017782183557058));
                            var_28 = (arr_10 [i_0] [i_0] [i_0] [i_0] [5]);
                            arr_23 [i_0 - 3] [7] [i_1] [i_0] [i_7 - 1] = var_6;
                            arr_24 [i_7 - 1] [i_7 - 1] [i_6] [i_7] [i_0] = var_7;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
