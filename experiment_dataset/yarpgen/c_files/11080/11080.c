/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (max(1434256516, 17902036768011348377));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_16 ^= var_1;

                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    var_17 &= (!((((arr_4 [i_1 + 1] [i_2 - 2] [i_2 - 1]) * ((((var_5 || (arr_0 [i_2])))))))));
                    var_18 = (max(var_18, (((((min((arr_1 [i_1 - 3]), ((((arr_2 [i_2]) != (arr_2 [i_0]))))))) && -var_0)))));
                }
                var_19 -= (((-(var_6 * var_9))));
                var_20 *= ((((~var_14) ? (arr_2 [i_0]) : ((~(arr_1 [21]))))));
            }
        }
    }
    var_21 = var_1;
    #pragma endscop
}
