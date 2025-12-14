/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((var_6 ? (~var_8) : var_12)), (!1)));
    var_19 &= ((var_10 ? 30993 : var_7));
    var_20 = ((41 ? 1 : 1));
    var_21 = (max(var_21, (((var_2 ? var_0 : ((((max(-6770, var_2))) ? (!var_10) : 0)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [17] = (min(var_5, (((((arr_0 [1] [i_0]) | var_13))))));
        arr_3 [i_0] [i_0] = ((((max(4392399752848127347, (arr_1 [i_0] [i_0])) / (((max(-1, (arr_0 [i_0] [i_0])))))))));
        var_22 = (max(var_22, ((((arr_1 [15] [i_0]) > 72057594037927935)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_23 *= var_4;
                    var_24 = ((((((arr_6 [i_2 + 4] [i_2 + 2] [i_2 + 2]) == (arr_8 [i_2 - 2] [i_2 - 4] [i_0] [i_2 - 4])))) & -25187));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        arr_13 [i_3 - 2] = (((((arr_11 [i_3 + 2]) || ((!(arr_6 [i_3] [i_3] [1]))))) ? (arr_4 [i_3]) : var_0));
        arr_14 [i_3] = (arr_10 [i_3]);
        arr_15 [7] [i_3 - 1] = arr_12 [10];
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        arr_19 [i_4] = ((~(max((((arr_7 [i_4] [16] [i_4] [16]) / var_4)), ((var_17 ? (arr_6 [i_4] [i_4] [i_4]) : (arr_17 [i_4])))))));
        arr_20 [i_4] = (((((142989288169013248 == (511 ^ 1)))) >> (((min((arr_12 [i_4]), var_10)) - 19365))));
    }
    #pragma endscop
}
