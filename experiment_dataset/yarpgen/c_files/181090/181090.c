/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 15442438948047002451;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_20 = ((~((13141401616483939232 ? (0 - var_6) : var_18))));
                        var_21 = 5305342457225612383;

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_22 = (max(var_22, ((max(((13141401616483939232 && (arr_9 [i_2] [i_4] [i_1] [i_1]))), ((max((arr_11 [i_0] [6] [6] [i_1] [6] [i_2] [i_3]), 25721))))))));
                            arr_12 [i_0] [4] [i_2] [6] [4] = (~15442438948047002451);
                        }
                        var_23 = (arr_9 [i_3] [i_2] [i_1] [i_0]);
                    }
                }
            }
        }
        arr_13 [5] = (((~(arr_7 [i_0] [i_0] [i_0] [i_0]))));
        var_24 *= (arr_6 [i_0] [i_0] [i_0]);
        var_25 -= (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_26 = (((((var_7 & (arr_14 [i_5 - 1] [6])))) ? (((min((arr_15 [i_5]), (arr_14 [i_5] [i_5 - 1]))))) : (min((((arr_15 [i_5]) ? (arr_16 [i_5 - 1]) : (arr_16 [i_5]))), ((((arr_15 [i_5]) || 18446744073709551609)))))));
        arr_17 [i_5] [i_5] = ((+(min((arr_15 [i_5]), (((arr_14 [i_5 - 1] [i_5 - 1]) ? (arr_16 [i_5]) : (arr_16 [i_5])))))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_5] [i_5] = (((((-(max((arr_23 [i_5] [i_6 + 1] [i_5] [i_5]), var_14))))) ? ((((((arr_15 [i_6]) ? var_15 : var_5))))) : (arr_20 [i_5])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 24;i_9 += 1)
                        {
                            {
                                arr_30 [i_5] [i_8] [i_8] [i_7] [i_6] [13] [i_5] = ((((min((arr_27 [i_9] [i_6 - 1] [i_8] [i_5] [i_7] [i_6 - 1] [i_5]), (arr_27 [i_5 - 1] [i_8] [i_5 - 1] [i_5] [i_5] [i_6] [i_8])))) ? ((((arr_22 [i_5] [i_6 + 1] [i_7 - 1]) ? (arr_22 [i_5] [i_6] [i_7 - 1]) : var_5))) : (max(15442438948047002449, 661106630060699723))));
                                arr_31 [i_5] [i_6] [i_7] [i_8] [i_8] = ((25740 ? (((!(arr_19 [i_5])))) : ((((13141401616483939232 ? -9100998592271738772 : 5305342457225612384))))));
                            }
                        }
                    }
                }
            }
        }
        var_27 = (15442438948047002427 * var_17);
    }
    #pragma endscop
}
