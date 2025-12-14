/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((-(8660 * var_5))), -32758));
    var_14 = (min((((!(var_0 && 1)))), ((8591400880354277512 ? (8591400880354277519 | var_4) : (((max(var_3, var_5))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_3] [i_1] [i_0] [i_1] [i_0] = ((((((arr_0 [i_0] [i_0]) | (arr_0 [i_0] [i_0])))) ? ((-8275472652152207780 ? (arr_0 [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_1 + 1] [i_1 + 2] [i_1 + 1]))) : ((~(arr_9 [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 2])))));
                            var_15 = min(((((arr_7 [i_0] [i_0]) << (2304717109306851328 - 2304717109306851328)))), (((((arr_0 [i_0] [i_3]) ? var_1 : -8591400880354277513)) >> (var_6 + 3862001364040793010))));
                            var_16 *= (((((var_3 * var_3) / var_11)) << ((((((var_10 ? 13533 : var_5)))) - 13524))));
                            var_17 = (max(var_3, ((~(arr_0 [i_0] [i_3])))));
                        }
                    }
                }
                arr_11 [i_0] [i_1 - 1] = (~var_2);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_18 += (((((((((arr_1 [i_1]) | 65535)) > (arr_6 [i_0] [i_0]))))) >= (max((min(var_9, -1210335452291831415)), (arr_0 [i_4] [i_4])))));
                            var_19 = (((~-1584433957) <= var_6));
                            arr_17 [i_5] [i_0] [i_0] [i_0] = (((~(((arr_15 [i_0] [i_1] [i_4] [i_1] [i_0] [i_0]) ? -32022 : (arr_2 [i_4]))))));
                            var_20 |= 4294967281;
                            arr_18 [i_4] [i_0] [i_0] = 65535;
                        }
                    }
                }
            }
        }
    }
    var_21 = var_6;
    #pragma endscop
}
