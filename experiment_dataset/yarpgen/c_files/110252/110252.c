/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((((1 ^ 112) ? 89 : -112)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = (!((((var_4 % var_2) ? ((0 ? var_3 : -124)) : 118))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, 1));
                                var_13 += ((((((((var_8 ? -112 : 1)) > 124)))) != (((arr_13 [4] [i_1] [i_1] [i_3] [i_4] [i_0 - 1]) ? var_7 : 6))));
                            }
                        }
                    }
                }
                var_14 = 287330735;
                arr_14 [i_0 - 1] [i_0] [i_0 - 1] = ((-59432449 ^ (arr_9 [i_1] [i_0])));
            }
        }
    }
    #pragma endscop
}
