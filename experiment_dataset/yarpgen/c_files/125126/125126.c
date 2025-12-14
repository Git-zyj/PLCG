/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_17 = 29300;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_18 = (max(((arr_2 [i_0] [i_0] [i_0]), 3318687116)));
            var_19 &= 9223372036854775778;
            var_20 = (arr_3 [i_1]);
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_8 [i_2] = 2147483627;
            var_21 -= (!2147483627);
        }
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            var_22 -= ((-18284 >= (max((-2147483640 + 17294), 2147483647))));
            arr_12 [i_3] = ((max((arr_7 [i_0] [i_0 + 3] [i_0 - 2]), (arr_7 [i_0] [i_0 + 2] [i_0 + 2]))));
        }
        arr_13 [i_0] = (((max((max(var_9, var_14)), ((min(var_3, var_7))))) >= (((((-2147483610 ? var_14 : var_5)) & (((~(arr_4 [i_0])))))))));
        var_23 = (((((((1 || (arr_5 [i_0])))) & 2147483647)) >= (((-2147483626 + 2147483647) >> (1614060909 - 1614060888)))));
        var_24 ^= ((!((1 == (var_0 ^ -6425573722592626846)))));
    }
    var_25 = (((!2924022650204646260) ? var_16 : ((((var_10 ? var_8 : 10887))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 17;i_6 += 1)
            {
                {
                    arr_23 [i_5] = (arr_19 [i_5] [i_5 + 1] [i_6 + 2]);
                    var_26 -= ((var_13 && (((((max((arr_17 [i_4] [i_6]), 3459))) ? (1 & -123) : (arr_18 [i_5 - 1] [i_5 - 1] [i_6 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
