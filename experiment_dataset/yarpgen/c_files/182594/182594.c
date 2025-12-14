/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((((!(arr_1 [i_0])))))));
        var_19 = ((((6144 ? 6124 : -6148)) <= ((6133 ? 6112 : 6144))));
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_20 = (((arr_1 [i_1]) ? (arr_0 [i_1]) : (-6144 / 6162)));
        arr_6 [i_1] = ((-(arr_1 [i_1])));
        var_21 = 6133;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_22 = (max(var_22, (((6124 ? (~6117) : ((max(6117, 6160))))))));
            var_23 = ((var_13 ? (((max(6128, (arr_8 [i_2] [i_2]))))) : 6154));
            arr_11 [i_2] = min((arr_9 [i_2] [i_3]), (~var_3));
        }
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            var_24 = (min(var_24, 6124));
            var_25 = var_0;
        }
        var_26 = ((!((((((arr_15 [i_2]) + 2147483647)) >> (((arr_15 [i_2]) + 72)))))));

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_27 = (-6118 / -6140);
            var_28 = -6113;
            var_29 = ((((-6144 ? ((min(6143, 6140))) : -6154)) >> (-6120 + 6129)));
        }
    }
    var_30 = var_3;
    var_31 = var_10;
    var_32 = (~-6131);
    var_33 = var_13;
    #pragma endscop
}
