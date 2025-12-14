/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 = (((max((((var_6 ? 0 : 21015))), (((arr_0 [i_0]) ? (arr_1 [1]) : 5140117789962150725)))) % var_18));
        arr_2 [i_0] = -9223372036854775794;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_22 = (max(var_22, var_6));
                            var_23 &= var_3;
                        }
                    }
                }
            }
            arr_15 [i_0] [i_0] [13] = var_15;
            arr_16 [i_0] = 987077551;
        }
        for (int i_5 = 3; i_5 < 18;i_5 += 1)
        {
            var_24 = (arr_10 [i_0] [i_0] [i_0] [i_5 + 1]);
            var_25 = (min(var_25, var_11));
        }
        arr_20 [i_0] = (var_2 <= 11881936397200690474);
        var_26 = max((max(var_0, (1 * var_9))), 45711);
    }
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        arr_24 [i_6] = (((((((max((-32767 - 1), var_8))) ? ((var_12 * (arr_21 [i_6]))) : (((arr_11 [i_6 - 1] [i_6] [i_6 - 1] [10] [i_6 - 1] [i_6 - 1]) ? var_8 : var_14))))) ? (arr_1 [i_6]) : (((arr_11 [i_6 - 1] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6]) ? var_7 : (arr_11 [i_6 + 1] [i_6] [i_6] [i_6 - 1] [i_6] [i_6])))));
        arr_25 [i_6] [i_6] = (max((arr_4 [i_6]), (max(((654 >> (var_9 - 41350))), ((min((arr_7 [i_6] [i_6]), var_17)))))));
        arr_26 [i_6] = (((((arr_18 [i_6 + 1] [i_6 + 1]) ? (arr_14 [i_6] [i_6] [1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6]) : 65527)) & var_15));
        var_27 = (max(var_27, var_1));
        var_28 = (min(var_28, (((((max(var_8, var_17))) & (((arr_6 [i_6 - 1] [i_6 - 1] [i_6]) | ((min(41428, 247))))))))));
    }
    var_29 = var_14;
    var_30 = ((var_16 ? 34543 : var_3));
    var_31 &= ((var_5 ? 43568 : var_1));
    #pragma endscop
}
