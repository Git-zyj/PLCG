/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_14);
    var_21 = ((((max(var_15, (255 - 0)))) || ((((((var_1 ? 65535 : var_17))) ? var_8 : var_1)))));
    var_22 &= var_6;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [5] [11] = ((~((((var_4 && 3687439087) || var_7)))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_23 = var_10;
            arr_8 [2] [2] [i_0] = (max((((var_2 != (arr_5 [i_0])))), -2));
            var_24 = (max((max((arr_0 [i_1]), (((arr_1 [1]) ? var_0 : (arr_3 [i_1]))))), ((((arr_0 [i_1]) ? (arr_0 [i_1]) : ((max((arr_5 [i_1]), var_18))))))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_25 = (arr_12 [1] [i_0] [i_0]);
            var_26 *= (min(3157922871, 65535));
            var_27 = (max(1, 65535));
            var_28 = ((((((arr_11 [i_0] [i_2]) << ((((var_6 ? (arr_3 [i_2]) : (arr_11 [i_0] [i_2]))) - 1068102449))))) ? ((min(2147483647, (arr_12 [4] [7] [i_0])))) : ((max((var_8 + var_16), (arr_10 [i_0] [i_0] [i_2]))))));
            var_29 = min((-2147483647 - 1), ((((((~(arr_10 [i_2] [i_2] [i_0])))) || ((max(var_12, (arr_6 [i_0] [i_0] [i_0]))))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_30 -= (76 != 0);
            arr_16 [i_3] [i_3] = ((((arr_3 [i_3]) ? var_12 : (arr_6 [i_3] [i_3] [i_0]))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            var_31 = (arr_17 [i_0] [i_4]);
            var_32 += ((-((var_8 ? (arr_0 [10]) : var_10))));
        }
        var_33 = ((((max((arr_19 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0])))) ? (((arr_5 [i_0]) ? (arr_19 [4] [4] [i_0]) : (arr_19 [i_0] [i_0] [i_0]))) : ((min(var_13, (arr_5 [i_0]))))));
    }
    var_34 = (max(var_34, 17289));
    #pragma endscop
}
