/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [7] [i_3] [i_4] = (((((((((arr_0 [i_0]) / (arr_12 [i_0] [i_1] [i_3] [i_3] [8])))) ? 156 : 6471917614399421949))) ? 1956413862 : ((9223372036854775807 ? -2086249099 : 16368))));
                                arr_15 [i_2] [0] [i_3] [i_2] [i_3] [9] [i_0] = (((-(0 / -9223372036854775796))));
                                arr_16 [i_3] = 1456356949;
                            }
                        }
                    }
                    arr_17 [8] [8] [i_2] = (max((((arr_12 [i_2] [i_2] [10] [6] [4]) ? ((~(arr_4 [1] [1] [i_1] [i_2 + 4]))) : (((arr_10 [1]) ? (arr_3 [i_0] [i_1 + 1]) : (-2147483647 - 1))))), ((226 ? 63548 : -1467628350))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_17 = (arr_22 [i_5] [i_5] [i_6]);
                var_18 ^= ((((((min(17996806323437568, -5178553088749261553))) ? ((-9223372036854775796 ? var_16 : (arr_20 [i_5]))) : -1023))) ? (((arr_21 [i_5]) ? (arr_21 [i_5]) : (arr_21 [i_5]))) : (arr_19 [i_5]));
                var_19 = ((18247 ? 1 : 17071462859741604237));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_33 [i_9] [i_9] [i_8] [22] [21] [i_5] [i_9] = ((max(((var_2 ? var_9 : (arr_28 [9] [i_6] [i_7] [i_7] [1] [i_9 + 2]))), (var_7 > -1))));
                                var_20 = (arr_30 [i_5] [i_9]);
                            }
                        }
                    }
                }
                var_21 = var_8;
            }
        }
    }
    var_22 = 0;
    var_23 = (min(4432, (max(((var_3 ? var_3 : var_2)), var_1))));
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 14;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                {
                    var_24 = (((arr_21 [i_10 + 2]) * ((((max(61103, var_7))) ? (arr_38 [i_10] [i_11]) : (((-127 - 1) ? 22446 : 51097))))));
                    var_25 = ((5775 >= ((((min((arr_35 [i_12]), (arr_41 [0])))) ? ((((arr_20 [i_10]) ? (arr_24 [20]) : (-127 - 1)))) : ((var_4 ? 1 : var_16))))));
                    arr_42 [i_10] [i_12] [3] [i_12] = (max(7222482516526403123, ((((arr_22 [15] [19] [i_12]) ? (arr_27 [i_12] [i_10] [i_10]) : 1567332051025921773)))));
                    var_26 = ((((((((~(arr_30 [i_10 - 1] [i_12])))) ? (arr_37 [i_10 + 1]) : 1))) / ((-1504518559 ? 210 : 1932520884400949737))));
                }
            }
        }
    }
    #pragma endscop
}
