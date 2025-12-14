/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = var_9;

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = (((((var_7 * (1448626059 * 3283909712)))) ? (((arr_0 [i_0 - 1]) >> (var_8 - 1921012735))) : var_4));
        arr_2 [i_0 - 1] = (!-465145664);
        var_16 = min((((((14 ? 4294967288 : 14))) ? var_8 : (((max(var_12, 32736)))))), (max(441215291, 2925261923)));
        arr_3 [i_0] = (!-1);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_17 = (arr_0 [i_3]);
                arr_12 [i_2] [i_2 - 2] [i_3] = -var_2;
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_16 [i_2] [i_2] [i_4] [i_1] = (~var_6);
                var_18 = (max(var_18, (((~((var_5 ? 13144238792453707615 : (arr_11 [i_1] [i_2] [4]))))))));

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_19 = ((2415825157 ? 0 : 10166582755500654851));
                    arr_19 [11] [i_2] [7] [i_5] = ((((((var_5 && var_0) ? (((var_8 ? (arr_7 [i_2]) : var_12))) : ((var_11 ? (arr_17 [10] [i_2 - 1] [i_2] [i_2]) : 24))))) ? var_0 : (((72 && var_4) * ((var_11 ? var_10 : var_6))))));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_20 = (1 > -1925551184);
                    var_21 ^= 1;
                    arr_22 [i_2] [i_2] [i_4] [4] = min((!var_0), (arr_14 [i_2]));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_25 [i_1 - 1] [i_2] [1] [1] = ((~var_0) ? ((-1 | ((549628235 ? var_3 : var_11)))) : var_0);
                    var_22 = var_7;
                }
            }
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                arr_28 [i_2] [i_2] [i_8] = var_4;
                var_23 = var_4;
            }
            arr_29 [1] [i_1] [i_2] = arr_0 [i_1];
        }
        var_24 = ((((((((((arr_13 [i_1] [0] [0] [2]) * var_10))) != 7)))) != var_9));
        var_25 = ((((((((2524650459624949048 ? 4167294115 : var_11))) ? (arr_14 [6]) : ((((-107 > (-127 - 1)))))))) ? 10166582755500654851 : (arr_5 [i_1 - 1] [8])));
    }
    var_26 = ((~(max(var_6, var_10))));
    var_27 = ((((((var_5 & var_9) | 2431826316))) ? ((var_8 ? var_2 : (max(var_1, 1)))) : ((((!(((756995902 ? 143688618749524431 : 3537971403)))))))));
    #pragma endscop
}
