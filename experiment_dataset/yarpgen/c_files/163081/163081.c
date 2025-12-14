/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 += ((((((arr_4 [i_0] [i_0] [i_1] [i_0]) ? 14 : (-2147483647 - 1)))) && -1));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_21 |= (7 >= 216);
                                var_22 = (((((arr_6 [i_3 - 3] [i_4] [i_3 - 3] [i_4 + 1] [i_4 + 1]) | (~52))) > ((((max(231, -3))) ? ((54184 ? 113 : 11363)) : (arr_5 [i_0] [i_0] [i_0] [i_0 + 2])))));
                            }
                        }
                    }
                    var_23 -= ((-208 ? (arr_0 [i_0] [i_0 + 2]) : 18797029972821647));
                }
            }
        }
    }
    var_24 = (min((307629399 && var_18), ((248 ? var_13 : (36 ^ var_14)))));
    var_25 = (max(var_25, ((((var_1 ? ((1 ? 17 : 18446744073709551615) : (~18))))))));
    #pragma endscop
}
