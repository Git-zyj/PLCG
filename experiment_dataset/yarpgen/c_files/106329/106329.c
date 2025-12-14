/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [8] = (((((~((var_2 ? var_9 : var_9))))) ? ((max((arr_2 [i_0] [i_0]), (((1 ? 1 : 33554416)))))) : (~var_3)));
                arr_5 [i_0] [i_0] = ((~(((((var_4 ? 1 : -39))) | 2669603957))));

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_11 = ((((var_5 || var_9) && var_7)) ? (((((min(var_0, var_8))) && (!1977860770)))) : (((((arr_3 [i_0] [i_0]) && (arr_9 [i_0] [1]))) ? (!8099971021939626939) : 129)));
                                arr_14 [i_0] [i_1 - 1] [i_2 + 2] [i_0] [i_4] = var_2;
                                var_12 = (((var_6 - -var_3) * ((((var_3 ? var_1 : var_2)) * -5535))));
                            }
                        }
                    }
                    arr_15 [i_0] [6] [i_0] [i_2 + 3] &= ((1625363338 > ((((arr_8 [6] [2] [i_2]) ? -1 : (arr_12 [14]))))));
                }
                var_13 = (max(var_13, (~var_4)));
            }
        }
    }
    #pragma endscop
}
