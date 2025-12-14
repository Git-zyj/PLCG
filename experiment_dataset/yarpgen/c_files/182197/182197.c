/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 1] = (~14);
                arr_6 [i_0] [i_0] = (((var_7 + 2147483647) >> (((arr_2 [i_1]) + 94))));
            }
        }
    }
    var_15 = ((((((max(var_3, var_1))) ? (0 != 97) : 14)) >= (((min(var_10, var_2))))));
    var_16 = (var_7 ? -66 : (~var_14));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                arr_11 [i_3] [i_2] &= arr_1 [i_3];
                arr_12 [i_2] [i_2] = ((-(arr_2 [i_2 - 2])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_17 = var_11;
                var_18 = ((~((~(arr_7 [i_4] [i_5])))));
                var_19 = (max(var_19, (((+((((((arr_10 [i_4]) ? (arr_8 [i_4]) : (arr_3 [4] [i_5] [i_4])))) ? ((((arr_13 [i_4]) <= (arr_14 [i_4])))) : (arr_1 [i_4]))))))));
                var_20 = var_5;
                var_21 = ((-(((!(((-(arr_2 [i_4])))))))));
            }
        }
    }
    #pragma endscop
}
