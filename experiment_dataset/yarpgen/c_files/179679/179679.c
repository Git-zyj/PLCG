/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [10] = ((((-(((arr_1 [i_1]) ? 0 : -16)))) << (((arr_3 [i_1]) ? (((arr_2 [i_0]) / var_9)) : (arr_4 [i_1 + 1] [i_1 + 1] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_14 [i_1] = (!60);
                            arr_15 [i_1] = ((+(max(var_5, (((-127 - 1) ? -9 : 253952))))));
                            arr_16 [17] [i_1] = (arr_4 [i_1] [15] [i_2]);
                            arr_17 [i_1] [i_1] [7] = arr_11 [i_3] [i_3] [i_1] [i_3];
                        }
                    }
                }
                arr_18 [i_0] [i_1] = (104 ? (((arr_2 [i_1]) & (min(253952, (arr_0 [13]))))) : 2146435072);
                arr_19 [i_0] [i_0] &= ((var_3 ? 253952 : (min((122 * 32), (arr_0 [i_0])))));
            }
        }
    }
    #pragma endscop
}
