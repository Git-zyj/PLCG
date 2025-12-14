/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((((var_13 ? var_2 : var_10))) ? ((min((min(var_2, var_19)), var_1))) : (((var_6 ? var_0 : var_2))))))));
    var_21 = ((((max(var_7, (var_19 & var_3)))) ? -var_6 : (((!var_11) / (4294967295 / 4294967271)))));
    var_22 = var_16;
    var_23 = (max(var_7, var_18));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_24 = (max((arr_1 [10] [i_0]), ((min(12429, (max(var_8, var_0)))))));
        var_25 = -1065905384;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_3 - 1] [i_0] [i_0] [i_0] = ((var_15 | ((4294967289 ? 25624 : 1))));
                        var_26 = ((-12443 > (arr_2 [i_0])));
                    }
                    var_27 *= (arr_4 [6] [i_2 + 1]);
                    var_28 = ((-(((-var_2 + 2147483647) >> (-2147483647 - 1)))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_29 = var_9;
        var_30 = (max(var_30, ((min(-var_8, 7)))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    {
                        var_31 = var_7;
                        var_32 = (min(var_32, ((min((25 < 2438693508), var_11)))));
                        var_33 = ((240 ? ((min(var_5, var_6))) : (((28 * 2438693500) / var_15))));
                    }
                }
            }
        }
        var_34 = (min(1856273789, (max((arr_18 [i_5] [i_5]), ((max((arr_24 [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_17 [i_5] [i_5]))))))));
        var_35 = (((max((arr_19 [i_5]), ((max(var_15, var_5))))) / (220 < 1856273803)));
        arr_25 [i_5] [i_5] = ((-var_8 != (((max(var_6, 4294967271))))));
    }
    #pragma endscop
}
