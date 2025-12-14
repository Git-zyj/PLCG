/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(1238257660023230384, (min(0, 18446744073709551610))));
    var_16 ^= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (min((arr_0 [i_3]), (arr_0 [7])));
                                arr_12 [i_0] [i_0] [10] [i_0] [i_0] [i_0] = (arr_10 [i_4] [i_0] [i_2] [11] [7]);
                                var_18 ^= (~18446744073709551599);
                                var_19 += 18446744073709551599;
                                arr_13 [i_0] [i_2 - 1] = ((18446744073709551615 ? ((-1 ? 18446744073709551612 : 985789649632016385)) : (~0)));
                            }
                        }
                    }
                    var_20 = (min(14, 0));
                }
            }
        }
    }
    var_21 = -412169365;
    #pragma endscop
}
