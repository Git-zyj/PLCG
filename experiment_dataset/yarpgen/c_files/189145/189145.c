/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= (!59644);
        var_11 = (max(var_11, (max(((-(arr_0 [i_0] [17]))), (min((((arr_1 [i_0]) ? 59634 : -23534)), (!946436163)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (((-(((((5333569630524272357 ? 27178 : var_0))) ? var_0 : var_6)))))));
                    var_13 = 1383492000;
                    var_14 *= (arr_3 [i_0 + 2]);
                }
            }
        }
        arr_10 [0] = ((((min((var_8 ^ 6), (arr_4 [i_0 + 3] [i_0 + 3])))) ? ((((!(((var_8 ? (arr_5 [13]) : var_2))))))) : (((arr_6 [i_0 + 2] [i_0 + 1]) ? 3353633862 : (arr_6 [i_0 + 2] [i_0 + 1])))));
        var_15 &= ((((arr_9 [i_0 + 2]) >> (arr_9 [i_0 + 2]))));
    }
    var_16 = ((((((-25310 ? var_5 : var_7)) >> ((((var_6 ? var_10 : 4568)) - 4567))))) ? ((~(var_6 % 18446744073709551615))) : (((min((var_4 >= var_3), 4326)))));

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_17 = (max(((((arr_4 [12] [i_3]) ? (arr_4 [i_3] [i_3]) : (arr_4 [i_3] [i_3])))), (min((arr_6 [13] [i_3]), 25309))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_18 = (((arr_4 [i_3] [i_4]) << (((arr_4 [i_3] [i_4]) - 30441))));
            arr_17 [i_3] [i_3] [i_3] = (((((var_10 ? -838 : -2100960263))) + (((arr_8 [i_4] [i_4] [8]) ? var_1 : 9))));
            arr_18 [i_3] [i_4] = (arr_14 [i_4] [i_3]);
        }
        var_19 ^= var_4;
        var_20 = 180;
    }
    #pragma endscop
}
