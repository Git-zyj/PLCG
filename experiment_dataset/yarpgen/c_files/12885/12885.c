/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((~((((var_4 ? var_6 : 87)) % (((22680 ? 22680 : var_8)))))));
    var_14 |= ((var_12 || ((min(((max(var_12, 22680))), (max(0, 42856)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 ^= ((42835 ? (arr_1 [i_1] [i_2]) : (arr_5 [i_0] [12])));
                    var_16 = 22680;
                }
            }
        }
        arr_8 [i_0] = (((arr_4 [i_0] [i_0]) & (42847 || 42856)));
    }
    #pragma endscop
}
