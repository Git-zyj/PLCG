/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((((min((137 >= var_8), 33)))) >= (((((var_3 ? 89 : 78))) ? (((min(255, 174)))) : var_5))));
    var_16 = (min(var_16, var_8));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = (arr_2 [i_2 - 1]);
                    var_17 *= ((+(((((((arr_1 [i_0 - 3]) + 9223372036854775807)) >> (21077 - 21032))) - 0))));
                }
            }
        }
    }
    var_18 = ((~((939108801774899548 ? 88 : ((116 ? 223 : 1))))));
    #pragma endscop
}
