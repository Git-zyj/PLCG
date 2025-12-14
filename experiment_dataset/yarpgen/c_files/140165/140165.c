/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(!15)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((((16 ? 24708 : 26043)) >> (((((arr_1 [i_0] [i_1]) ? (arr_0 [i_1]) : 127)) - 220))))) ? ((((!136) >= var_1))) : var_14));
                var_16 = (min(var_16, (max((arr_5 [i_1] [i_1] [i_1]), (((192 && ((((arr_5 [i_0] [i_1] [i_0]) ? 248 : var_14))))))))));
                var_17 -= ((min(((max(var_5, 7)), var_4))));
            }
        }
    }
    var_18 = ((!(((var_4 ? (!65530) : var_5)))));

    /* vectorizable */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        arr_10 [i_2 + 1] [i_2] = 151;
        arr_11 [i_2 + 1] [i_2] = (arr_8 [i_2 - 1]);
        var_19 = var_4;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_18 [i_4] [i_4] [i_4] [i_4] = (arr_7 [i_3 + 1]);
                    var_20 = (min(var_20, ((1107600260 ? -16777215 : -110))));
                    var_21 -= ((!(arr_2 [i_2 - 1] [i_2 - 1] [i_3 + 4])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        arr_22 [i_5 - 2] = ((-124 ? 1 : (-9223372036854775807 - 1)));
        var_22 ^= (((((var_10 ? (arr_17 [i_5 - 3] [i_5 + 3] [i_5] [i_5]) : var_11))) ? var_12 : ((var_4 ? var_0 : (arr_9 [i_5 + 3])))));
        arr_23 [i_5 + 2] = (-(arr_4 [i_5 - 2]));
        arr_24 [i_5 - 1] [i_5 - 1] = ((-((~(arr_9 [i_5])))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_23 = (min(var_23, (((13286 ? (arr_5 [i_6] [i_7] [i_7]) : (arr_5 [i_6] [i_7] [i_6]))))));
            var_24 = (min(var_24, (((-(arr_7 [i_6]))))));
        }
        arr_29 [i_6] = ((-(((arr_3 [i_6] [i_6] [i_6]) ? 249 : var_4))));
        var_25 = var_5;
        arr_30 [i_6] [i_6] = ((-(arr_27 [i_6] [i_6] [i_6])));
        var_26 = ((!(arr_21 [i_6] [i_6])));
    }
    var_27 = ((((((var_8 ? 10 : var_3)) & 0)) >= -var_11));
    #pragma endscop
}
