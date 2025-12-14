/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_12 = (max(var_12, ((min((((((arr_0 [2] [i_0]) ? var_4 : 0)))), ((((((arr_1 [i_0]) ? var_0 : 1))) ? (min(-227510038, 262648080)) : 74)))))));
        var_13 -= (arr_0 [i_0 - 3] [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] = ((((max(-2147483647, 1))) ? ((18446744073709551615 ? (arr_3 [i_1]) : (arr_3 [i_1]))) : var_2));
        arr_6 [i_1] [i_1] = ((((((arr_4 [3]) ? (arr_1 [i_1]) : ((-61 ? 1 : (arr_2 [i_1] [i_1])))))) ? ((min(((-606684648 ? var_5 : (arr_1 [i_1]))), (arr_2 [i_1] [i_1])))) : ((((min(4032319216, -126))) ? 18446744073709551611 : (((max((arr_0 [i_1] [i_1]), var_10))))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                {
                    var_14 *= (((var_10 ? (max(1095602041, 0)) : (arr_12 [i_4] [i_3] [8]))));
                    arr_15 [i_3] [i_3] [i_4] = 262648102;
                    var_15 *= ((var_3 ? ((min((((var_10 < (arr_9 [i_4])))), (arr_1 [i_2])))) : 112));
                    arr_16 [i_2] [i_3] = (((((((((arr_10 [i_2] [i_3] [i_4]) ? (arr_11 [i_2] [i_3] [i_2]) : (arr_12 [i_2] [i_3] [i_4])))) ? 0 : ((min((arr_8 [9] [9]), (arr_11 [i_2] [i_3] [i_4 - 1]))))))) ? (((arr_14 [i_3] [i_4 - 1] [i_4 - 2]) ? (arr_12 [i_4 + 1] [i_4 - 1] [i_4 - 2]) : (arr_14 [i_3] [i_4 + 1] [i_4 - 1]))) : ((var_4 ? var_0 : ((var_4 ? (arr_1 [i_2]) : (arr_1 [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_16 = 5;
                                arr_23 [i_5] [i_3] [2] [12] [i_3] = ((((arr_8 [i_2] [i_4 - 2]) ? (arr_8 [i_3] [i_4 - 1]) : (arr_8 [i_3] [i_4 - 1]))));
                                arr_24 [i_5] [i_5] [i_3] [i_2] [i_2] = ((((min(17897, -100))) <= (arr_11 [i_4 + 1] [i_3] [i_3])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
