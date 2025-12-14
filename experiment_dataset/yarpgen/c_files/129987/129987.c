/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_11 = (min(((min((((arr_2 [i_1 - 3]) ? var_6 : var_9)), var_7))), ((32767 ? ((var_2 ? var_2 : (arr_0 [i_0]))) : (3182187438000148017 & var_5)))));
                            arr_12 [i_1] [i_1] [i_3] = ((~((((min(3805, 18446744073709551612))) ? (((9223372036854775807 ? var_7 : var_6))) : (((arr_8 [i_1]) - var_1))))));
                            arr_13 [i_0] [i_0] [i_1] [i_3] = (((min(((1 ? 175727880 : 32767)), -726)) >= 540231462));
                        }
                    }
                }
                var_12 = max(var_5, var_6);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_13 = var_0;
                    var_14 ^= ((+((3 ? (arr_19 [i_4] [i_5] [i_4]) : -14256))));
                    var_15 = (arr_19 [i_4] [4] [i_4]);
                    arr_22 [1] [i_5] [i_5] [1] &= (min(((var_5 ? var_1 : -28779)), var_3));
                }
            }
        }
    }
    #pragma endscop
}
