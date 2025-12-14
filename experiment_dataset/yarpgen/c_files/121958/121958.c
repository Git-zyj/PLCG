/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 *= (((~(~1736862664))));
                    arr_6 [1] [i_0] = (arr_5 [5] [i_1]);
                    var_13 = 1736862671;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_14 = ((!(arr_19 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1])));
                                var_15 -= 0;
                                arr_21 [i_7] = (-var_4 ? (+-567448752) : -2147483647);
                                arr_22 [i_3] [i_4] [i_4] [i_6] [i_7] [i_7] = ((48504 << (-94 + 105)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_16 = ((((arr_18 [i_3] [i_8]) > (arr_27 [i_3] [i_4 - 2] [i_9]))));
                            var_17 += (((arr_18 [0] [18]) / (arr_20 [i_9 + 3] [i_9 - 2] [i_9] [i_9 - 3] [0] [i_9])));
                            arr_30 [i_3] [3] [i_8] [1] = ((((!((((arr_24 [i_3] [i_4 - 4] [i_4 - 4] [i_4 - 4]) ? -2641 : 1))))) || (((((max((arr_14 [i_4] [i_8] [i_9 + 2]), -32))) ? ((var_10 ? (arr_17 [i_4] [i_4]) : (arr_14 [1] [3] [i_9]))) : (arr_26 [i_9]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
