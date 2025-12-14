/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((255 >> (min((var_9 & var_2), var_5))));
    var_11 = var_9;
    var_12 = (var_0 ^ var_8);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_13 -= ((((((arr_7 [i_0] [1]) != 0))) >> (17032624689231153221 || 1414119384478398395)));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_13 [i_3] = var_1;
                            arr_14 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = ((var_1 ? (((min(1, var_3)))) : (max(((min(var_0, var_2))), (arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] [i_4] [i_4])))));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_18 [1] [i_3] [i_2] [i_2] [i_3] [i_0] = var_0;
                            arr_19 [i_3] [i_5] [i_3] [i_2] [i_1] [i_0] [i_3] = (arr_15 [i_5] [1] [i_3] [i_0] [i_3] [i_0] [i_0]);
                            arr_20 [i_5] [i_5] [i_3] [i_3] [i_2] [i_1] [i_0] = ((((((arr_2 [i_0]) ^ var_3))) ? (((arr_2 [i_0]) ^ (arr_2 [i_0]))) : (((arr_2 [i_1]) & var_8))));
                            arr_21 [i_0] [i_3] [i_3] [i_5] = (!((!(arr_15 [i_0] [i_3] [i_3] [10] [i_3] [i_0] [i_0]))));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_14 = var_8;
                            var_15 = var_3;
                            var_16 = (arr_6 [i_0] [i_0]);
                        }
                        var_17 |= 1414119384478398395;
                    }
                }
            }
        }
        arr_24 [i_0] = (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
