/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_6 * -4303);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((9345 ? 18446744073709551615 : -2056893888));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = ((5625109025672207435 % ((((arr_3 [i_1 + 2] [i_1 - 1] [i_1 - 1]) && (((2056893883 >> (91 - 82)))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] |= ((((((arr_12 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 2] [i_1]) ? (arr_12 [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2] [i_1]) : (arr_12 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 2] [i_1])))) ? (var_6 / var_2) : (((arr_12 [i_1 - 2] [i_1 - 2] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 1]) * 65535))));
                                var_21 = (!18446744073709551591);
                            }
                        }
                    }
                    var_22 = ((((max((~18446744073709551609), (!var_8)))) && ((((arr_13 [i_1] [i_1] [i_1] [i_1 + 2] [i_1]) / 5625109025672207429)))));
                }
            }
        }
    }
    #pragma endscop
}
