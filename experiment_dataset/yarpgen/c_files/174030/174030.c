/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_15 ^ (~18446744073709551611)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = (((((18446744073709551611 ? (arr_1 [i_0]) : var_14))) ? (arr_0 [i_0] [18]) : -var_16));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = var_1;
                    var_23 = (((arr_0 [i_1] [i_2]) != 11652639724326668185));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_14 [i_4] [i_1] [i_2] [i_1] [i_0] = (((arr_5 [i_0] [i_0] [i_1] [i_0]) == ((18446744073709551590 ? 12 : 18446744073709551587))));
                            var_24 = (!4294967293);
                            arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 18446744073709551597;
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_25 *= ((((var_4 != (arr_9 [i_0] [i_0] [i_3] [i_5] [0] [i_1]))) ? (arr_0 [i_2] [i_3]) : (~95)));
                            arr_19 [i_0] [i_0] [i_1] [i_0] [i_0] = (~-2147483640);
                            arr_20 [i_0] [i_0] [i_1] = 0;
                            arr_21 [i_1] [i_5] [10] [4] [i_5] &= var_6;
                        }
                        var_26 *= (((((1 * (arr_16 [i_2] [i_2] [i_2] [i_2] [i_2])))) == var_14));
                    }
                }
            }
        }
    }
    #pragma endscop
}
