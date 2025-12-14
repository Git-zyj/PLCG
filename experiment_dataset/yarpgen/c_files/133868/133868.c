/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = (min(var_5, var_15));
    var_20 = (~var_8);

    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((!(((1 << (194 - 181))))));
        var_21 = (min(var_21, (!1602082908305170492)));
        arr_3 [i_0] = (52 != (((arr_0 [i_0 + 3]) ? (arr_0 [i_0 + 3]) : (arr_0 [i_0 + 1]))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_22 = (arr_1 [i_1 + 2]);

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = (min(((((arr_4 [i_1] [i_1 + 1]) ? (arr_4 [i_1] [i_1 - 1]) : (arr_4 [i_1] [i_1 + 1])))), (arr_9 [i_1] [i_1])));
            arr_11 [i_1] = (23 || var_6);
        }
        arr_12 [12] &= ((((((arr_4 [2] [2]) ? (52 * 1) : (arr_0 [i_1 - 1])))) & (min(var_8, var_12))));
        var_23 += 48663;
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = 48663;
        arr_17 [i_3] = (!var_7);
    }
    #pragma endscop
}
