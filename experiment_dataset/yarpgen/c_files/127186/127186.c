/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0 + 3] [i_0] [i_1] [i_2] = ((!((min((arr_3 [i_0] [i_0 + 1] [i_2]), (arr_4 [i_0] [i_1] [i_2]))))));
                    var_10 |= (((1 * (arr_0 [1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, var_4));
                                arr_13 [i_0 + 3] [i_1] [i_0] [i_3] [i_4 + 1] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = ((((min((var_3 != var_3), (max(1, var_0))))) < var_3));
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            {
                var_14 = (min(var_14, 1));
                arr_21 [i_5] = (((var_5 ? var_8 : var_3)));
                var_15 = arr_16 [21] [i_5];
            }
        }
    }
    var_16 *= var_8;
    #pragma endscop
}
