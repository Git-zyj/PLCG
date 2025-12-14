/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_14 = (max(var_14, (((((max(3287163750, 17271504372733379368))) ? (min((((arr_0 [i_0]) & var_8)), (arr_1 [i_0 - 1]))) : (!var_0))))));
        var_15 = (((-2971337883559619033 ? 3092291752 : 3092291752)));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_2] [9] [i_3 + 1] [i_3] = ((var_7 > (min(810540773, 1175239700976172247))));
                        var_16 = (((arr_6 [i_3] [i_3 + 1] [i_3 + 2] [i_3]) ? ((((max((arr_7 [i_2] [i_2]), var_8))) ? 39 : (arr_9 [3] [3] [3] [8] [9]))) : var_3));
                        var_17 = (max(var_17, (((((min(((min(217, 1))), var_2))) % (min((arr_7 [i_1] [i_0 - 1]), var_9)))))));
                        var_18 += var_11;
                    }
                }
            }
        }
        arr_11 [4] = ((var_4 & ((((((~(arr_1 [i_0]))) <= 43))))));
        var_19 *= (~(arr_4 [i_0] [i_0]));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = (arr_15 [i_4]);
        var_20 = (min(var_6, (arr_12 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                {
                    var_21 = (((arr_21 [i_6 + 1] [i_6 - 1] [i_6 - 1]) ? (((((1493405100 - var_12) || (-7 || 43))))) : (min(0, 3507609564))));
                    arr_22 [i_6] [i_6] = (arr_12 [i_6 + 1]);
                    var_22 ^= ((((min(var_5, (arr_20 [i_4] [i_6 - 1] [i_6 - 1] [i_6 - 1])))) + (((arr_15 [i_6 + 1]) ? var_2 : var_4))));
                    var_23 = var_5;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                var_24 += ((787357727 ? 13578 : ((-(max(13565, 1175239700976172247))))));
                var_25 -= ((((-(((arr_17 [i_7]) ? var_11 : var_5))))) ? var_13 : ((min((14030 != 431153403), (17271504372733379360 <= var_2)))));
            }
        }
    }
    #pragma endscop
}
