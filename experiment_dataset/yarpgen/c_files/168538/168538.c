/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_20 = (max((max((arr_2 [i_1 + 1] [i_0 - 1]), (arr_2 [i_1 + 1] [i_0 - 1]))), (arr_5 [i_0 - 1] [i_0 - 1])));
            arr_6 [i_0 - 1] [i_1] = min((max((arr_0 [i_0]), (arr_1 [i_0 - 1] [i_1 + 1]))), ((min(0, (var_12 > -11)))));
            arr_7 [i_1] = max(((min(var_10, (var_12 == -15409)))), (arr_2 [i_0] [i_0]));
            arr_8 [i_0 - 1] [i_1] = (min((max(0, ((0 ? var_8 : (arr_2 [i_0 - 1] [i_0 - 1]))))), (arr_1 [i_0] [i_0])));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_21 = ((arr_2 [i_0 - 1] [i_0 - 1]) ? (max(-417539143, (var_12 > -2147483643))) : ((~(arr_9 [i_2 + 2] [i_0 - 1]))));
            arr_13 [i_0] [i_2 + 3] = var_7;
        }
        arr_14 [i_0] = (min(((-var_16 ? var_2 : (max((arr_1 [i_0] [i_0]), var_17)))), (!1)));
        arr_15 [i_0 - 1] [i_0 - 1] = ((!((max((min(-51, 89)), var_2)))));
        arr_16 [i_0] = ((((max(((((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]) >= 1887333488))), (arr_1 [i_0 - 1] [i_0 - 1])))) != (min(1441564394, var_3))));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_22 = (max(var_22, ((max((max((arr_1 [i_3 - 1] [i_3 - 1]), (max(var_8, (arr_3 [i_3 - 1] [i_3 - 1]))))), var_19)))));
        var_23 = (((((arr_20 [i_3 - 1] [i_3 - 1]) ^ -20)) | ((1 ? (((arr_12 [i_3 - 1]) + var_16)) : ((var_1 ? 7 : var_16))))));

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_24 += (max(((((min(1055, 29842))) ? ((max(var_3, (arr_2 [i_4] [i_3 - 1])))) : (((arr_19 [i_4]) ? var_15 : var_11)))), (((var_4 == var_7) ? (arr_19 [i_3 - 1]) : var_15))));
            var_25 -= ((~(min((((arr_2 [i_3] [i_3]) | var_1)), (((arr_3 [i_3 - 1] [i_3 - 1]) ? (arr_9 [i_3] [i_3]) : 1034))))));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_30 [i_3] = var_15;
                        arr_31 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] = ((+((-91 ? (arr_24 [i_3 - 1] [i_3] [i_3] [i_6 - 1]) : (((arr_29 [i_5 + 2] [i_6 - 1]) / (arr_20 [i_5 + 3] [i_3])))))));
                        arr_32 [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] = (min((min(-1035, ((-1887333488 / (arr_25 [i_3] [i_3] [i_3]))))), ((~(arr_5 [i_3] [i_5 - 1])))));
                    }
                }
            }
        }
    }
    var_26 -= var_1;
    #pragma endscop
}
