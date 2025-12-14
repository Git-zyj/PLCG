/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = max(((((arr_4 [i_0 + 1]) < (arr_4 [i_0 - 1])))), -var_7);
                arr_6 [3] [i_0] = ((((min((max(var_10, 1848129352476807979)), (-2016814153 * -1)))) <= 31));
                arr_7 [i_0] = (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_14 [i_2] [8] [6] = (arr_10 [i_2] [i_3]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_21 [i_2] [i_3] [6] = -18446744073709551615;
                            arr_22 [i_2] [i_2] [i_2] [i_2] = var_0;
                            var_18 |= 31;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_19 += -4464563313164413794;
                            arr_27 [i_2] [i_3] [i_3] [i_6] [i_3] = (!var_5);
                            arr_28 [i_2] [i_2] [i_6] [10] = 0;
                            arr_29 [i_2] [i_3] [i_6] [0] [i_7] = (((~(arr_26 [i_3] [i_3]))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_12, (((var_14 ? 0 : ((var_9 ? var_10 : var_10)))))));
    var_21 = var_14;
    #pragma endscop
}
