/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((((max(1, 2686574496))) ? 46567 : ((3996231310 ? var_8 : 168))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_1] = (((var_4 ? (!4294967288) : 4294967282)));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] &= (2712895670567071509 && 4294967275);
                        arr_14 [16] [i_1] [i_1] [i_1] [i_0] = (!2147483648);
                        arr_15 [7] [7] [i_1] [i_3] [i_1] = (((((((32256 ? 9270 : 15728640))) < (var_10 | var_13))) ? (var_10 + -1151761267) : 32));
                        arr_16 [i_3] [6] [6] [i_3] &= var_3;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_19 [i_0] [5] [i_0] [i_1] = -4294967295;
                        var_17 = (min(var_17, (1023 + var_7)));
                        var_18 |= ((var_11 ? ((1 ? var_9 : 16109829101693960752)) : 18446744073709551615));
                        var_19 = var_7;
                        var_20 = (max(var_20, (~153)));
                    }
                }
            }
        }
        arr_20 [i_0] = -1;
    }
    var_21 = ((-(((191 - 2712895670567071509) | 65521))));
    var_22 = (((((((~13185) + 2147483647)) >> ((((6822 ? -117 : var_8)) - 4294967166))))) ^ ((~(3329595791 & var_16))));
    var_23 = (min(var_23, var_6));
    #pragma endscop
}
