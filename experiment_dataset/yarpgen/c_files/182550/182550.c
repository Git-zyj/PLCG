/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    var_16 ^= (((arr_9 [12]) ? var_6 : (arr_6 [i_0 - 2] [i_2 - 1])));
                    var_17 = (max(var_17, ((((~7324) ? var_0 : (((arr_9 [8]) ? (arr_6 [i_0] [i_0]) : 0)))))));
                }
                /* LoopNest 3 */
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_18 -= ((-(((arr_6 [i_0 - 2] [i_0]) ? (arr_6 [i_0 - 2] [i_0]) : (arr_6 [i_0 - 2] [i_0])))));
                                var_19 = ((((((((6 ? (arr_0 [i_4]) : 65535))) ? 1 : var_2))) ? (((arr_4 [i_0]) ? (((((arr_15 [i_0] [i_1] [i_3] [i_3] [i_3]) >= 1)))) : ((var_10 ? 567807884 : (arr_17 [i_4] [i_4]))))) : (arr_4 [i_0])));
                                var_20 -= ((((!(-2147483647 - 1))) ? (max((arr_12 [i_5] [i_5] [i_3 + 1] [i_0 - 1]), var_1)) : ((~(((arr_12 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) ? 3727159404 : var_14))))));
                                var_21 = (min(var_21, (((+(((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 2]) : (arr_14 [i_0 - 3] [i_0 - 1] [i_0] [i_0] [i_0 - 2]))))))));
                            }
                        }
                    }
                }
                var_22 ^= (((((var_9 ? (arr_5 [i_1] [i_0 - 1]) : (arr_15 [i_0 - 2] [i_1] [14] [i_0 + 1] [i_1])))) ? (max((~5), ((6 ? 3727159428 : 8821597114530765029)))) : (arr_3 [i_0 + 1] [i_0 - 2] [i_0])));
                var_23 = (max(var_23, (((~(arr_9 [1]))))));
            }
        }
    }
    var_24 -= (max(((max(((4822223209950346062 ? var_1 : 3)), var_11))), (max(((var_7 ? -5193 : 13624520863759205553)), (~var_8)))));
    #pragma endscop
}
