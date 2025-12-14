/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [5] [i_1] = ((((max((((-(arr_3 [i_0] [i_0] [i_0])))), (((arr_5 [i_1] [12]) ? var_5 : (arr_0 [i_1] [i_0])))))) ? ((((arr_0 [i_0] [i_1]) ? var_4 : (arr_0 [i_0] [i_1])))) : (((var_7 ? (arr_2 [i_0] [6]) : (arr_5 [i_0] [i_1]))))));
                var_17 += ((36027697507336192 ? 122 : (((arr_4 [i_1]) ? 36027697507336191 : 1702365491))));
                var_18 ^= ((((~((~(arr_1 [i_1]))))) << (((((((arr_2 [i_0] [i_1]) ? var_12 : var_15)) | (arr_1 [i_1]))) - 10746243599656278238))));
            }
        }
    }
    var_19 += ((~((var_5 ? (!var_16) : var_13))));
    var_20 = ((var_11 > ((min(var_14, (2717131766 >= 3245303120))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_21 = (~((~((var_1 ? 3407705248 : var_10)))));
                arr_14 [i_2] = (max(((((min(17202, var_14)) + (var_1 <= var_6)))), (min(((~(arr_13 [i_2]))), (((var_13 ? var_14 : var_10)))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_22 = ((~(arr_19 [i_2] [16] [i_2] [i_5 + 1] [i_2])));
                                arr_23 [i_5] [16] [i_4] [i_5] = (((((((arr_19 [i_4] [i_3] [i_4] [i_5 - 1] [i_6]) != (((((arr_8 [i_2] [12]) < (arr_10 [i_2] [16]))))))))) >= ((~(arr_8 [i_3] [9])))));
                            }
                        }
                    }
                }
                var_23 *= ((((((arr_20 [i_2] [i_3] [i_3] [i_3] [i_3] [i_2]) ? var_11 : (arr_20 [i_2] [i_3] [i_2] [i_2] [i_2] [i_2])))) ? ((min((((2717131767 < (arr_18 [i_2] [i_2] [i_2] [i_2])))), (~var_16)))) : (arr_16 [i_3] [i_2] [i_2])));
            }
        }
    }
    #pragma endscop
}
