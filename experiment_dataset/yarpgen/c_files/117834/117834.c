/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_10 *= (1 ? 1 : 0);
                    var_11 = (-1036448394843798668 >= 1);
                    var_12 = (min(0, (-127 - 1)));
                    var_13 = var_4;
                    var_14 = (max(var_14, 48804));
                }
            }
        }
    }
    var_15 = (min(((min(var_2, var_7))), (min(var_3, ((18 ? -2413994056323939471 : 1))))));
    var_16 += var_4;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            {
                var_17 = var_4;
                var_18 = var_8;
            }
        }
    }
    #pragma endscop
}
