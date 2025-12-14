/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_11 ^ var_1) ? 0 : ((-(~4)))));
    var_16 = (((((var_13 ? var_7 : var_8))) ? (((var_12 < 0) / ((-17 ? var_8 : var_13)))) : (((var_8 ? var_2 : var_14)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = (max(var_17, (((-1 <= (((arr_1 [i_0]) ? (arr_0 [i_1]) : -1)))))));
            arr_5 [i_1] [i_1] = (!var_0);
            var_18 = (((~(-32767 - 1))));
            var_19 = 8935141660703064064;
        }
        var_20 = ((((((-2147483647 - 1) ? 65535 : (arr_2 [i_0])))) ? 127 : 0));
        arr_6 [i_0] = (!1);
        var_21 = (arr_3 [i_0]);
        var_22 = (min(((+(((arr_0 [i_0]) ? (arr_4 [i_0] [i_0] [6]) : 17)))), (((arr_2 [17]) ^ (~8)))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_11 [i_2] = min(((~(((96 < (arr_9 [i_2] [6])))))), ((~((~(arr_8 [i_2]))))));
        var_23 = var_3;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_24 = ((-(((17179869176 > (((var_4 ? (arr_13 [i_2]) : (arr_12 [9])))))))));
                    var_25 = (max(var_25, (((-8935141660703064078 ? (((!(arr_0 [3])))) : (arr_8 [11]))))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_26 = (((((arr_13 [i_5]) < var_7)) ? (arr_12 [i_5]) : var_6));
        var_27 = (-127 - 1);
        var_28 = ((~((~(arr_18 [i_5] [i_5])))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_23 [2] = ((1 || ((!(arr_0 [i_6])))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 7;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        var_29 = -23;
                        var_30 = ((arr_15 [i_8 - 2] [16] [i_7] [1]) < (((((((arr_8 [i_6]) >> (18446744073709551615 - 18446744073709551606)))) && (arr_30 [i_6] [i_8] [0] [4])))));
                    }
                }
            }
        }
        var_31 = (var_9 * 1);
    }
    #pragma endscop
}
