/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(((((arr_0 [i_0]) ? 1 : (arr_0 [i_0])))), 9315482028774974988));
        arr_4 [i_0] &= -38;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_13 *= (max(-38, (((1 && (((~(arr_6 [i_0])))))))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_12 [i_0] [10] [i_1] [i_0] |= (((arr_1 [i_0]) ? (((max(9315482028774975005, -722880819)) % ((max((arr_1 [0]), 3645340162))))) : var_7));
                arr_13 [i_1] [i_2] [5] [i_1] = (arr_1 [i_0]);
                var_14 = (max(((max((((arr_1 [i_2]) * (arr_5 [i_1] [i_1]))), (arr_11 [i_0] [i_0] [i_1])))), 18446744073709551608));
                var_15 = ((-(arr_6 [i_1])));
            }
            var_16 = var_11;
            var_17 -= var_10;
        }
        arr_14 [i_0] [i_0] = var_10;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_18 = (~((~(arr_16 [i_3] [i_3]))));
        var_19 = (arr_15 [i_3]);
        var_20 = (((arr_15 [i_3]) * ((-(arr_16 [i_3] [0])))));
        var_21 = ((((!(((-9680 ? 1169050471 : -1)))))));
    }
    var_22 = (min(1, var_0));
    #pragma endscop
}
