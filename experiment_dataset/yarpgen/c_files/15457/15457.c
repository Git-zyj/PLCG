/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_1;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_19 = ((var_7 ? (arr_11 [i_0 + 2] [i_0 - 2] [i_0] [i_0 + 1] [i_0 + 2]) : var_14));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] = var_9;
                            arr_17 [i_1] [i_2] &= ((var_11 ? var_0 : (((arr_0 [i_3]) ? 512 : (arr_8 [i_0] [i_1] [i_2])))));
                        }
                    }
                    arr_18 [i_0] = var_6;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_21 [i_0] = (1 ? -1 : 18446744073709551615);
                        var_20 = (min(var_20, 1));
                        var_21 = (max(var_21, ((((((1 ? 1 : 47181))) ? (((arr_15 [i_0] [i_0] [i_0] [4] [i_2] [4] [i_5]) ? 0 : (arr_8 [i_0] [10] [i_2]))) : 65535)))));
                        var_22 = ((!(((42472 ? -40 : 1)))));
                    }
                    var_23 = (max(126, (((((max(-17, (arr_1 [i_1])))) && 2)))));
                    arr_22 [i_0] [i_0] [1] = (((0 ? 100 : 1)));
                }
            }
        }
    }
    #pragma endscop
}
