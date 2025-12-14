/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 += ((((((arr_0 [i_1]) ? 0 : (((var_12 < (arr_0 [i_1]))))))) ? (((min(13455389301390797932, -1021055182)) / var_8)) : 4294967295));

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_20 |= (((min((arr_4 [i_0 + 1]), 1976714036)) & var_3));
                    arr_8 [i_0 + 1] [i_0 + 1] [i_0] = -var_8;
                    var_21 = (max(var_21, (!-706031597)));
                    arr_9 [7] [2] [i_0] = var_8;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                {
                    arr_17 [i_4] = (((((((arr_11 [i_3] [i_4 - 1]) && (arr_13 [i_3]))))) || (((((((arr_11 [i_5] [6]) ? (arr_15 [3] [i_4] [i_5] [1]) : (arr_14 [i_3])))) ? ((var_15 ? (arr_12 [i_3 - 1]) : (arr_10 [i_5]))) : (!18446744073709551609))))));
                    var_22 ^= ((0 ? var_5 : (arr_12 [20])));
                    var_23 = (max(var_23, (~-19)));
                }
            }
        }
    }
    var_24 = -2108420557;
    #pragma endscop
}
