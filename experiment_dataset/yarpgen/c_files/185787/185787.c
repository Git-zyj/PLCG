/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 -= (~-1);
                var_16 = min((((arr_2 [i_0]) - 16383)), 13);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = (arr_9 [i_2] [i_2 + 4] [i_2]);
                            var_18 = ((min(49165, ((((arr_0 [i_0] [i_0]) != (arr_8 [i_0] [i_0])))))));
                        }
                    }
                }
                var_19 = (max(255, 49165));
                var_20 = (((2147483647 ? 4067 : -32757)));
            }
        }
    }
    #pragma endscop
}
