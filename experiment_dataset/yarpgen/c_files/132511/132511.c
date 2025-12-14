/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = (((arr_1 [i_0]) + (arr_0 [i_0])));
        var_12 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_13 = (min(var_13, ((max(((var_3 << (((arr_3 [i_1] [i_1]) - 25494)))), ((max(var_0, (arr_3 [i_1] [i_1])))))))));
        var_14 += arr_3 [i_1] [11];
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_15 = (max(((((((var_5 ? 2638429061 : var_6))) ? -2135592107 : ((max(0, 36550)))))), (max((((-2135592107 % (arr_9 [i_2])))), (((arr_11 [i_2]) ? (arr_8 [11] [11] [i_4]) : var_3))))));
                                var_16 = (max(var_16, (((((((max(var_10, var_1))) ? (23771 > 10759) : (var_8 + var_3)))) ? (((!((min(var_1, -56)))))) : var_7))));
                                var_17 = (max(var_17, 1));
                                arr_18 [i_2] [i_2] [i_3] [i_4] [i_5 - 1] [i_6 + 3] [i_6 - 4] = ((~(arr_6 [i_5])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_25 [i_2] [i_4] [i_7] [i_7] [i_8] = ((var_2 ? (((max(17464568138504814328, -2111327315)) + ((((2135592107 > (arr_10 [i_3 - 1] [i_3 - 1] [i_8]))))))) : -56));
                                var_18 ^= var_0;
                            }
                        }
                    }
                }
            }
        }
        var_19 = ((((((arr_22 [10] [i_2] [i_2] [i_2] [i_2]) | var_6))) ? ((((((var_8 ? (arr_5 [i_2]) : (arr_24 [i_2] [i_2] [i_2])))) ? (((var_8 >= (arr_15 [i_2] [i_2] [i_2] [i_2] [i_2])))) : (((235 || (arr_20 [18] [i_2] [i_2] [i_2]))))))) : (((arr_20 [i_2] [i_2] [i_2] [i_2]) ? (arr_20 [i_2] [i_2] [i_2] [i_2]) : (arr_20 [i_2] [i_2] [i_2] [i_2])))));
        arr_26 [i_2] = var_0;
        var_20 = (min(var_20, (arr_15 [i_2] [2] [i_2] [i_2] [i_2])));
    }
    var_21 = 2111327315;
    #pragma endscop
}
