/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((65533 ? (((var_1 ? var_4 : var_0))) : (min(var_5, var_12))))) ? (((!((max(var_7, var_0)))))) : var_10));
    var_14 &= (max(((((min(65533, -1512))) ? (max(var_7, var_0)) : var_0)), (min(((var_2 ? var_3 : var_7)), 20887))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = -227131385;
                var_15 *= (min(((max(((var_9 ? var_10 : (arr_1 [i_0 - 2]))), ((max(74, 135)))))), (((((var_1 ? (arr_1 [i_0 - 1]) : (arr_2 [i_0] [i_1 - 2])))) ? (((min(var_11, -115)))) : (min((arr_3 [i_1]), (arr_5 [i_0])))))));
                var_16 ^= var_5;
                arr_7 [i_0] [i_1 + 2] = (((~6032524786566044156) ? ((100 ? (((arr_1 [i_0]) ? 10 : (arr_2 [i_0] [i_1]))) : (!-1717234023))) : 111));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_17 = ((((min((min(var_5, (arr_11 [i_4]))), (~var_8)))) & (max(121, ((18446744073709551613 << (((arr_11 [i_4]) - 128))))))));
                    arr_16 [i_2] [i_3] [2] &= (((((var_10 ? (((arr_15 [i_4] [i_3] [i_2] [i_2]) / (arr_9 [i_3]))) : (((-(arr_12 [i_2] [i_3] [i_4]))))))) ? (min((((arr_8 [i_2]) ? (arr_12 [i_2] [i_3] [i_2]) : (arr_11 [i_2]))), (max((arr_12 [i_2] [i_2] [i_2]), var_2)))) : ((((min((arr_10 [i_2] [i_3]), 1)) != var_5)))));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_18 -= ((118 ? ((6924030441935294970 & ((((arr_11 [6]) ? 1 : (arr_19 [i_2] [i_3] [i_3] [i_6])))))) : ((115 ? ((min(5, (arr_21 [i_5] [i_5] [i_5])))) : (min(3, 7389762133379835381))))));
                            var_19 = ((!((((((~(arr_21 [i_2] [i_2] [i_2])))) & (((arr_11 [i_2]) ? (arr_10 [i_2] [i_3]) : (arr_17 [i_2] [i_2]))))))));
                            var_20 = var_0;
                            arr_22 [i_6] [i_2] [18] [i_2] [i_2] = ((~(((~var_10) ? 111 : ((var_3 ? 121 : var_6))))));
                        }
                    }
                }
                arr_23 [10] [10] &= min(((~(arr_20 [i_2] [i_2] [i_3] [i_3] [i_3] [i_3]))), ((((((var_8 ? var_11 : 18446744073709551607))) || ((min((arr_17 [15] [i_3]), (arr_12 [i_2] [i_3] [i_3]))))))));
            }
        }
    }
    var_21 = var_1;
    #pragma endscop
}
