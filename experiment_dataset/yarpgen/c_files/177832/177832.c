/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((min(18446744073709551601, 53)));
    var_20 ^= (min(((~(~52))), var_16));
    var_21 = (max((((0 | 1932) ? -55 : 51)), 1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_22 ^= (((-38 > -72) ? (arr_6 [i_0]) : (max((((arr_7 [i_0] [i_1] [i_2] [i_3 + 2]) % 15450116670238377942)), var_16))));
                            var_23 = (min((min((2996627403471173674 ^ -32741), -43)), 5131936079431145817));
                        }
                    }
                }
                var_24 ^= ((~(((arr_3 [i_0 + 2]) | (arr_3 [i_0 + 1])))));
            }
        }
    }
    #pragma endscop
}
