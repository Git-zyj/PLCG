/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((-10 ? (((!((((arr_1 [i_0]) ? var_4 : (arr_1 [i_0]))))))) : (((!(arr_2 [i_0 - 2] [i_0 - 2]))))));
        arr_4 [i_0] = ((var_2 ? (arr_0 [i_0 + 1] [i_0 - 1]) : (((((min(45, var_1))) ? (arr_1 [i_0]) : (min((arr_2 [i_0 + 1] [i_0]), 0)))))));
        arr_5 [i_0] = -var_7;
        var_11 = ((~(min(-var_5, var_4))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_12 = ((var_6 ^ ((~(!var_10)))));
        arr_8 [1] = (((((((((arr_1 [6]) ? 18 : var_7))) / (max(10, 9223372036854775807))))) && (((((24 >= (arr_1 [2])))) == (((arr_6 [4]) | 0))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                {
                    var_13 = (!(((arr_1 [i_3]) >= -var_1)));
                    var_14 -= (((arr_1 [10]) ? (((arr_9 [i_2 - 3] [i_2 - 1] [i_2 + 2]) ^ 1)) : (((((189 ? var_7 : (arr_1 [8])))) ? (var_2 >= 1) : (max(var_1, (arr_12 [i_1] [i_1] [i_3] [i_3])))))));
                    var_15 = (min(var_15, (max((((!((max(189, -108)))))), (~11)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 23;i_6 += 1)
            {
                {
                    arr_21 [i_4] [i_5 + 3] [i_6 + 2] [i_4] = (13 / 229);
                    arr_22 [i_4] [i_5 - 3] = (arr_19 [i_5 - 2] [1] [i_5] [1]);
                    arr_23 [i_6] [i_5] [i_4] [i_4] = ((232 < ((((min(74, -9223372036854775807))) ? ((((249 >= (arr_15 [i_4]))))) : (~-2413939186276457259)))));
                }
            }
        }
    }
    var_16 = ((var_10 ? ((var_9 ? -var_4 : var_4)) : var_1));
    #pragma endscop
}
