/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0 - 1]) ? (1 || 3777651206) : -55));

        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            var_15 = var_10;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_16 = (((15111 ? ((18446744073709551606 ? 18446744073709551609 : 1) : (((3696716885 ? -2061295760 : var_8)))))));
                        arr_14 [i_0 - 1] [i_2] [i_2] [i_3] = (var_2 ? (((arr_6 [i_2] [i_1] [i_1 + 2] [i_0 - 1]) ? (arr_6 [i_3] [1] [i_1 + 2] [i_0 - 1]) : (arr_6 [i_0] [i_1] [i_1 - 1] [i_0 - 1]))) : ((((arr_6 [i_0 - 1] [i_2] [i_1 + 2] [i_0 - 1]) || (arr_6 [0] [i_2] [i_1 - 3] [i_0 - 1])))));
                        arr_15 [i_0 - 1] [3] [i_0 - 1] [3] [i_2] = (max((var_14 & 50425), (arr_13 [i_2] [7] [1] [i_3])));
                    }
                }
            }
            arr_16 [i_1 - 2] [8] [i_1 + 3] = (arr_6 [i_0] [i_0] [i_0] [i_0]);
            arr_17 [i_0] = (~((589599006 ? (arr_12 [i_1 - 4] [i_1 - 2] [i_1 + 1]) : 21)));
            arr_18 [i_1] = arr_8 [i_1] [1] [2];
        }
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_22 [i_4] = ((~(arr_19 [i_4])));
        arr_23 [i_4] [i_4] = ((((((((min(123, var_11)))) - (((arr_21 [i_4]) ? 2707905129 : (arr_20 [7])))))) ? var_4 : ((32767 ? 32754 : 0))));
        arr_24 [i_4] [i_4] = (((!var_1) ? ((((((arr_21 [0]) * var_14))) ? (0 >= 50425) : (arr_20 [i_4]))) : var_3));
        var_17 = var_1;
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_28 [i_5] = ((((-32767 + 9223372036854775807) << (50425 - 50425))));
        var_18 = (max(var_18, (((!(((((min(50425, 0))) ? (((((arr_25 [i_5]) && var_2)))) : (arr_26 [i_5])))))))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_19 = 123;
        var_20 = 1;
        var_21 = (min(var_21, ((max(1, 0)))));
        var_22 = (min(-7323514928862735478, (((arr_30 [i_6]) ? (arr_30 [i_6]) : (arr_30 [i_6])))));
    }
    var_23 = (max(var_23, (!var_7)));
    var_24 = var_1;
    var_25 = ((var_4 | ((3070727875776829554 ? (0 & var_10) : var_10))));
    #pragma endscop
}
