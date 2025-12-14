/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((~((((4026068429339118879 & (arr_1 [i_1])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = (~(((!-4026068429339118880) ? 4026068429339118879 : ((-4026068429339118880 ? -4026068429339118880 : -4026068429339118895)))));
                                var_15 = (arr_1 [i_1]);
                                var_16 = (max(var_16, -4026068429339118894));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_20 [i_0] [i_1] [i_0] [i_6] = ((!((((-127 - 1) & 0)))));
                            arr_21 [i_0] = ((~(((!(arr_15 [i_5 + 2] [i_0 - 2] [i_0 + 2] [i_0 - 1]))))));
                            var_17 = ((min((arr_9 [i_0] [i_0] [i_6] [i_0 + 2]), ((-4026068429339118896 ? 122 : -4026068429339118880)))));
                            arr_22 [i_0] [i_0] [i_5 - 1] [5] = ((-4297928987311686478 / (-4026068429339118893 & -58)));
                        }
                    }
                }
                var_18 ^= 16;
            }
        }
    }
    var_19 = (min((~4), ((4026068429339118895 ? var_6 : -42))));
    var_20 = (min(var_20, (!var_5)));
    #pragma endscop
}
