/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (min(var_20, ((min(var_5, (((var_0 ? -1886808870 : -440476495500868914))))))));
        arr_2 [3] = ((((((arr_1 [i_0]) ? 1 : (((arr_1 [1]) ? (arr_0 [i_0]) : (-2147483647 - 1)))))) ? (2146487993 & -440476495500868926) : ((((33695 >= (arr_0 [i_0])))))));
        var_21 = var_7;
        arr_3 [13] = (max(((min((arr_0 [i_0]), (arr_1 [i_0])))), (((arr_1 [i_0]) % 4972666525040463057))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_22 = (max(var_22, 194));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_23 &= var_11;
                    var_24 = (min(var_24, ((((((+(max((arr_10 [i_1] [4] [4] [4]), var_14))))) ? (arr_4 [i_2 - 1]) : ((((((arr_0 [i_1]) | 2655799170))) ? 65516 : (2483209447165349243 | -903446383))))))));
                    var_25 += (min(236, 18718));
                }
            }
        }
        var_26 = (((20 ? 1 : 440476495500868925)));
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 8;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_27 = -440476495500868914;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_26 [i_4] [i_5] [0] [1] [i_4] = (arr_5 [i_6]);
                                arr_27 [i_4] = var_1;
                                var_28 = var_1;
                                var_29 = arr_25 [i_4 - 1] [i_5] [i_4] [1] [i_7] [8];
                                arr_28 [i_4] [i_5] [i_4] [i_4] [i_4] [i_8] [i_8] = (max(((((arr_5 [i_4 + 2]) == (arr_5 [i_4 + 2])))), (arr_19 [i_4] [i_4] [i_4 - 1])));
                            }
                        }
                    }
                    var_30 = (max(var_30, 46344));
                }
            }
        }
    }
    var_31 = max(var_15, ((var_14 ? ((min(63488, var_2))) : ((max(1, 78))))));
    var_32 = var_1;
    #pragma endscop
}
