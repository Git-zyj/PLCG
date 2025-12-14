/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = ((1 + 1) ? (((arr_7 [i_2 + 1] [i_1 + 2] [i_0 - 1]) - var_5)) : (((-937211342 ? (arr_7 [i_2 - 1] [i_1 - 2] [i_0 + 1]) : (arr_7 [i_2 + 1] [i_1 + 2] [i_0 - 1])))));
                    var_21 = ((((min((arr_3 [i_0] [i_1 + 3]), var_15))) ? ((~(arr_3 [i_0] [i_1 + 1]))) : (min((arr_7 [i_0] [i_1 - 1] [i_2 - 2]), var_7))));
                }
            }
        }
    }
    var_22 = (min(var_4, var_3));
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_23 = 1;
                    var_24 = ((1 && (((max(0, var_6)) < (arr_3 [i_3 - 2] [i_3 - 2])))));
                    var_25 = ((-20022 + 2147483647) << (((((((-2147483647 - 1) % -547958370460858183)) + 2147483662)) - 14)));
                    var_26 = ((((-34 ? (((arr_6 [i_3]) ? (-2147483647 - 1) : var_6)) : 30205)) % (((((max(var_0, (arr_4 [i_4] [7])))) ? (arr_14 [7]) : 1)))));
                    var_27 = max(var_9, ((((var_9 ? -3 : (arr_9 [i_3] [i_3]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            {
                var_28 = -3659674536504249561;
                var_29 = var_6;
                var_30 = arr_19 [i_7];
            }
        }
    }
    #pragma endscop
}
