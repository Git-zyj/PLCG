/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 ^= (min(10, 4285685795368326618));
                    var_14 |= min((arr_0 [i_0] [i_0]), 1);
                    var_15 = (104 * -30749);
                    var_16 = (min(var_16, var_10));
                    var_17 = ((((((0 >> (var_7 - 7782962499274237573)))) ? var_6 : var_6)));
                }
            }
        }
    }
    var_18 = -var_6;
    #pragma endscop
}
