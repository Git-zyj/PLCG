/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((var_4 <= var_13), ((max(var_13, var_17)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = ((((min(var_5, var_16))) ? (((arr_6 [i_0 + 1] [i_0 - 1] [i_0 - 1]) ? var_9 : var_13)) : (((18446744073709551615 ? (arr_1 [i_1 + 2] [i_0 + 1]) : (arr_1 [i_1 + 1] [i_0 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [16] [10] [14] [i_3] [i_1] [i_4] [i_4 - 1] |= (((min(9223372036854775807, 19093))) ? (((var_15 + 17351) & (18446744073709551615 && var_6))) : ((((min(-70, 1))) ? (arr_1 [i_0] [i_0]) : (var_0 ^ -2332))));
                                var_20 = ((((((var_15 ? 1 : (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1 + 2] [i_1] [i_1])))) ? (((var_8 ? var_0 : var_1))) : var_4)));
                                var_21 = ((((((((var_1 ? var_17 : (arr_0 [i_1])))) ? 173 : ((var_5 ? var_8 : var_10))))) <= -18446744073709551602));
                                var_22 &= ((-((9223372036854775807 ? 12871 : -2348))));
                            }
                        }
                    }
                    var_23 = ((-(min(((var_8 ? 2343 : var_11)), (max(var_5, var_10))))));
                    var_24 = ((((!(arr_11 [i_0] [i_0 - 2] [2] [i_0 - 1] [i_1 + 2]))) ? (!var_9) : (arr_11 [i_0] [i_0] [i_0] [i_0 - 1] [i_1 + 3])));
                }
            }
        }
    }
    var_25 = var_4;
    var_26 = (((((var_10 ? 1 : (min(var_15, var_11))))) ? (((((var_4 ? var_11 : var_15))) ? ((max(1233669413, var_13))) : var_4)) : ((-((var_3 ? 32749 : var_5))))));
    #pragma endscop
}
