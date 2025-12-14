/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~0);
    var_11 = var_2;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_4 [4] [4] = (min(((~(min(0, (arr_1 [i_0 - 2]))))), ((((((var_7 ? (arr_0 [i_1]) : var_7))) ? (min((arr_2 [i_0 - 2] [i_0]), var_9)) : (9223372036854775807 != var_7))))));
            arr_5 [i_0] [13] &= (min((arr_2 [i_0] [i_1]), (((var_7 <= ((1 ? (arr_2 [i_0] [i_1]) : (arr_3 [6] [i_0 + 1] [i_0]))))))));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_12 = (((((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (9223372036854775807 - 9223372036854775771))))) != 65535));
                arr_8 [i_0] [7] [i_2] [i_1] = (max(((((arr_1 [i_0 - 1]) < (arr_1 [i_0 + 2])))), (((arr_6 [i_0] [i_2] [i_0 + 3] [i_1]) ? var_5 : var_9))));
            }
            arr_9 [i_0 - 4] = ((~(arr_0 [i_0])));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_13 = (max(var_13, (((((~(min((arr_1 [i_0]), var_4))))) ? (min((arr_3 [i_0] [i_0 + 3] [i_0 + 2]), var_1)) : ((min(var_5, (arr_2 [i_0 + 4] [i_0 + 3]))))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_19 [i_0 - 1] = (arr_1 [i_5]);
                        var_14 = var_1;
                    }
                }
            }

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_15 = (min((max(var_8, (0 * 9223372036854775801))), ((((min(13, var_0)) ^ (((-74 ? var_5 : (arr_0 [i_0 + 2])))))))));
                var_16 |= (max((!var_9), (max(1, (arr_1 [i_3])))));
                var_17 = max((min((arr_10 [6] [6]), ((max((arr_0 [2]), var_8))))), (~var_4));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_31 [17] [i_0] [i_0] [i_6] [0] [i_8] [i_8] = (((arr_1 [i_0 - 1]) - ((((arr_6 [i_0] [i_3] [i_3] [i_0]) % (arr_18 [i_3]))))));
                            var_18 = (max(var_18, (((((min(65532, (arr_15 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 4])))) >> ((-(~18446744073709551615))))))));
                        }
                    }
                }
                var_19 = ((var_4 ? (((((((-2147483647 - 1) ? var_7 : var_5))) || (arr_28 [1] [1] [i_6] [i_6] [i_6])))) : (((min((arr_20 [i_0]), var_6))))));
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                arr_34 [i_0] [i_3] = (max((((var_1 ? (arr_15 [i_0] [6] [i_9] [i_0 + 4]) : var_3))), ((min((arr_26 [i_0 - 2] [i_0 + 4]), (arr_26 [i_0 - 1] [i_0 + 1]))))));
                arr_35 [1] = var_2;
                arr_36 [i_0] [i_0] [i_0] = (min(((((((arr_20 [i_0]) ? 66 : (arr_23 [9] [i_3] [9] [i_3])))) ? (arr_15 [i_0] [i_0 + 1] [i_0 + 2] [i_0]) : (arr_33 [i_9] [i_3] [i_9] [i_9]))), (((~(max((arr_14 [i_0]), -1449755585)))))));
            }
        }
        var_20 = ((((arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 4] [i_0]) ? 22 : (arr_1 [i_0]))));
    }
    #pragma endscop
}
