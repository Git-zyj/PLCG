/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = 1;
                var_10 &= ((var_6 ? var_2 : (arr_2 [i_1 - 1])));
                var_11 ^= arr_3 [i_1];
                var_12 -= (21545 != ((((var_9 ? (arr_1 [i_0] [i_1]) : 1022)) * (arr_0 [i_1 - 1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_1 - 1] [i_2] [i_3] = (((((((min(var_3, var_1))) > -0))) - (arr_5 [i_1])));
                            var_13 |= (!(((1 | (arr_7 [i_0] [i_2] [i_3])))));
                            var_14 = (max(var_14, (((((((var_8 <= var_1) % var_2))) ? var_1 : (min((var_8 + var_9), (arr_6 [i_1] [i_3]))))))));
                        }
                    }
                }
            }
        }
    }
    var_15 = (((((var_2 <= var_2) <= var_1)) ? ((((var_5 ? var_8 : var_4)) + var_3)) : ((min(0, var_9)))));
    var_16 = (28164 || var_0);
    var_17 = (((1 + 1) - 23492));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_4] [i_4] [i_6] = (min(1, 0));
                    var_18 &= (0 || (((var_8 && var_7) && 1)));
                }
            }
        }
    }
    #pragma endscop
}
