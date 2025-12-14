/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((((65535 ? 15 : 20)) >= var_5));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = 0;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 = ((var_17 ? ((var_13 ? var_10 : 65535)) : -10));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_22 += ((65535 ? var_4 : (((65535 ? 31 : var_11)))));
                            var_23 = -2;
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_2] = ((((((var_13 + -1) ? 65531 : ((65534 ? var_1 : 24))))) && var_15));
            }
            var_24 = -1;
            var_25 &= (var_1 ? 18446744073709551615 : ((((!-32758) ^ (((var_15 + 2147483647) >> (var_18 - 7251)))))));
        }
        arr_13 [i_0] = -var_17;
    }
    #pragma endscop
}
