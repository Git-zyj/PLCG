/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = var_0;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_18 = (min(var_18, (((((arr_10 [i_0] [i_1] [9] [i_3]) & var_3))))));
                        var_19 ^= var_7;
                    }
                    arr_12 [i_1] [i_0] &= (max(((((arr_5 [i_2]) != (arr_5 [i_1])))), (arr_5 [i_2])));
                    var_20 = ((~(min(1, var_8))));
                }
            }
        }
    }
    var_21 = (min(-var_11, ((-(max(3458764513820540928, 5690270428884440905))))));
    #pragma endscop
}
