/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_20 ^= (max((((((max(var_17, 122))) ? var_18 : (((max(var_9, (arr_6 [i_0])))))))), (max(var_5, (var_15 ^ 122)))));
            var_21 = (min(var_21, ((max(0, var_4)))));
            var_22 = (var_7 & var_3);
            var_23 = var_11;
            arr_7 [i_0] [i_1] [i_1] = ((var_16 == (((arr_3 [i_0]) ? (((arr_6 [i_0]) ? (arr_2 [i_0]) : var_1)) : ((var_5 << (((arr_0 [i_1] [i_0]) - 4188528273))))))));
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            var_24 = (max(var_24, (-2147483647 - 1)));
            var_25 = (((arr_2 [i_2 - 3]) ? (arr_2 [i_2 - 3]) : (arr_2 [i_2 - 1])));
            arr_10 [i_0] = (~1);
        }
        var_26 = (-(max((arr_2 [i_0]), (~var_11))));

        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            arr_13 [i_3] = ((~(max((arr_1 [i_3 + 3] [i_0]), (arr_8 [i_3 + 4])))));
            var_27 = (max((((var_14 & (arr_9 [i_3 - 1] [i_3] [i_0])))), (((arr_9 [i_3 + 3] [i_3] [i_3]) ? 0 : 7))));
        }
        arr_14 [i_0] [i_0] = ((((max(var_13, var_6))) ? ((max((arr_6 [i_0]), ((var_7 ? (arr_6 [i_0]) : (arr_5 [i_0])))))) : ((1 ? (arr_0 [i_0] [i_0]) : (var_9 & var_2)))));
        arr_15 [i_0] [i_0] = (~var_9);
    }
    var_28 = var_6;
    var_29 = (((((var_3 ? var_8 : var_19))) ? ((((((var_11 ? var_17 : var_2))) ? var_4 : ((var_9 ? var_14 : var_11))))) : (max((max(var_6, 16395583659527961903)), var_6))));
    #pragma endscop
}
