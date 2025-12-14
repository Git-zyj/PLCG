/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((((min(var_1, var_13))) ? (288230376151711743 != var_3) : ((var_7 ? var_2 : -288230376151711755)))), (((-(min(var_1, var_14)))))));
    var_21 -= ((+((((288230376151711743 & 3088) && (!var_18))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_22 = (((((+(((arr_0 [6]) ? (arr_1 [i_1]) : var_9))))) ? ((((((1023 ? var_11 : 18446744073709550592))) ? (!4096) : ((var_2 / (arr_2 [i_0] [i_0] [i_1])))))) : (min((((arr_1 [3]) ? 18446744073709550592 : 2147483647)), (((-(arr_2 [0] [0] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_23 = (max((((!(arr_8 [6] [6] [2] [8] [5])))), (arr_3 [i_0] [3] [10])));
                            var_24 = 18446744073709550592;
                        }
                    }
                }
                var_25 = (max(var_25, (((-var_14 <= ((var_13 ? (arr_7 [i_0] [i_1] [5] [2] [i_1] [i_1]) : 35469)))))));
                var_26 = ((((288230376151711755 ? (arr_4 [i_1]) : 2382633608)) < (((min(var_14, (arr_4 [i_0])))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_1] [i_4] = 18446744073709550592;
                            var_27 -= ((var_19 ? ((max((arr_1 [i_5 + 2]), (arr_16 [i_0] [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5 + 3])))) : (((!(arr_16 [1] [i_5 + 2] [i_5 + 1] [i_5 - 2] [i_5 + 2]))))));
                            var_28 ^= (((((+(((arr_10 [i_0]) / var_11))))) ? ((((9223372036854775807 / (arr_6 [i_0] [i_1] [i_4] [i_1]))) / var_5)) : var_0));
                        }
                    }
                }
            }
        }
    }
    var_29 ^= (!var_5);
    var_30 = var_7;
    #pragma endscop
}
