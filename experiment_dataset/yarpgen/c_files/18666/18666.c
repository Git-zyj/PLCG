/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_4, var_18));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) ? 22276 : (arr_2 [i_0 - 1])));
        var_21 = (min(var_21, (((~(arr_1 [i_0 - 2]))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] = (-(((arr_7 [i_1]) & (arr_7 [i_1]))));
        arr_9 [i_1] = (arr_6 [i_1]);
        var_22 = (min(var_22, (arr_5 [i_1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_23 -= (((((min((arr_12 [i_2] [i_2] [i_2]), (arr_10 [i_2] [i_2]))) >= -65535)) ? (arr_13 [i_3] [i_3]) : ((~(arr_11 [i_2] [i_3])))));
                var_24 = (min(var_24, ((max((((((112 ? var_9 : (arr_13 [15] [i_3]))) == (arr_13 [i_2] [i_2])))), ((32764 ? (((min(var_1, (arr_12 [i_2] [20] [i_2]))))) : (max((arr_13 [i_2] [i_2]), 1973971904)))))))));
                arr_14 [i_3] = var_15;

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    arr_19 [i_3] [i_3] [i_3] [i_3] = ((((((arr_12 [i_2] [i_2] [i_2]) ? (max((arr_16 [i_4] [i_4] [i_4] [i_4]), (arr_10 [i_2] [i_2]))) : (((((arr_18 [i_2] [i_2] [i_2] [i_2]) < (arr_17 [i_2] [i_2])))))))) ? (((((-9223372036854775807 - 1) || 2401009592491242234)))) : (((((min(0, -21225)))) + (arr_10 [i_2] [6])))));
                    var_25 = (min(var_25, (((-9223372036854775785 ? ((626353825 ^ ((var_15 ? var_12 : 5)))) : ((((!(((-2182058991350980713 ? (arr_13 [i_4] [i_4]) : (arr_16 [i_2] [i_3] [i_3] [i_3])))))))))))));
                }
            }
        }
    }
    #pragma endscop
}
