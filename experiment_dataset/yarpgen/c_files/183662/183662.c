/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (((~-25877) || ((((!25894) ? (arr_0 [i_0]) : 25881)))));
                var_15 = var_2;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_16 = (25862 % -18137);

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_17 *= ((((((arr_11 [i_1] [i_4] [i_1] [20] [20] [i_4] [24]) ^ (arr_0 [i_4])))) ? (arr_1 [i_4] [i_4]) : (arr_10 [i_4] [i_0 + 1] [8] [i_2 + 3] [i_3 + 2])));
                                var_18 = (max(var_18, 25877));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((var_2 + 2147483647) >> (var_3 + 1447395667)));
    #pragma endscop
}
