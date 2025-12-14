/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = (arr_0 [i_0]);
                    var_20 = (max(var_20, (((~(arr_1 [i_0]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_21 = (((((((((arr_14 [i_5] [i_4] [i_3] [i_4]) ? 213557990 : (arr_12 [12])))) ? 42 : (arr_3 [i_3])))) & ((((((arr_2 [i_3] [i_3]) ? (arr_5 [i_3] [i_3]) : (arr_6 [i_3] [i_4])))) ? (((arr_11 [i_3] [i_3]) ? (arr_2 [i_5] [1]) : var_8)) : (((213557990 ? 249 : 55)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_22 = (min(var_22, var_14));
                                arr_24 [i_3] [i_3] [i_3] [9] [9] = ((((7932597770947154611 ? (arr_2 [i_3] [i_5]) : (((arr_11 [i_3] [i_3]) ? var_0 : var_3)))) > (((((((20901 ? (arr_20 [i_3]) : 1))) && (arr_23 [i_4] [i_5] [i_6 - 1] [i_6 - 1])))))));
                            }
                        }
                    }
                    arr_25 [i_3] [i_3] [i_4] [i_3] = (-82 || -9088806882491386166);
                }
                var_23 = (var_0 % var_0);
                arr_26 [i_3] = ((var_7 ? ((~(((arr_12 [i_3]) ? (arr_23 [i_3] [i_3] [i_3] [8]) : 3136686795650390604)))) : (((var_14 - var_7) ? (((arr_18 [i_3] [i_3]) ? (arr_17 [i_3] [i_3] [i_3] [i_3]) : (arr_6 [i_3] [i_4]))) : (arr_21 [i_3] [i_3] [i_3] [9] [i_3] [i_3] [14])))));
            }
        }
    }
    var_24 |= var_16;
    #pragma endscop
}
