/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((var_11 + 1) ? (!2875107058) : var_7)), var_12));
    var_19 *= var_9;
    var_20 = ((((var_17 ? var_3 : (0 | 18446744073709551615))) & (((var_5 <= var_10) ? (((min(var_11, 193)))) : (min(18446744073709551610, 0))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = (max(((~(arr_0 [i_0] [i_0]))), (min((!9675836140823210681), -22521))));
        var_22 -= ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) || var_16));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_23 ^= ((6 ? 230 : 6));
                        arr_10 [i_0] [i_1] [i_1] [i_3] = ((-(max(var_1, var_13))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
