/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [1] [i_0] = 728511882;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_17 *= (arr_0 [0] [i_1]);
            arr_6 [i_0 - 2] = (var_1 % ((var_15 ? (arr_0 [i_0 + 3] [i_0 + 3]) : var_6)));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] = (((((max(3566455413, 2520815186))) ? (max(1045801904, (arr_5 [i_0 - 2] [i_0] [i_2]))) : (arr_9 [i_0 + 4] [i_2] [i_0 + 4]))));
            var_18 = (arr_3 [i_2] [i_0]);
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {
            arr_14 [i_3] = (min((min(var_5, (max((arr_4 [12] [i_3]), (arr_7 [i_0] [i_3]))))), (arr_7 [i_0 - 1] [i_0 - 1])));
            var_19 *= (max(((((arr_7 [i_0] [i_3]) ? ((var_12 ? (arr_3 [i_0] [i_0]) : var_4)) : ((~(arr_0 [i_0] [i_3])))))), ((((min((arr_7 [i_0 + 3] [i_3]), (arr_10 [i_0])))) ? (((arr_10 [i_3]) * (arr_12 [i_3]))) : var_15))));
            var_20 = (!var_9);
            arr_15 [2] [i_0] = (~728511882);
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
        {
            arr_19 [i_0 + 1] [i_0 + 1] = (arr_5 [i_0] [i_0] [i_4]);
            arr_20 [i_0] [i_0] = ((var_6 >= (~var_9)));
        }
        var_21 += ((min((max((arr_9 [8] [8] [i_0 + 2]), (arr_17 [i_0]))), (((~(arr_4 [i_0 + 4] [8])))))));
        arr_21 [i_0 - 2] = ((max((arr_12 [i_0 + 1]), (arr_8 [i_0]))));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_22 = 2096533313;
        var_23 = 2096533313;
        var_24 = (min(var_24, (arr_22 [2])));
        var_25 = ((((max(var_4, (arr_23 [i_5])))) ? ((((3249165395 ? 7936 : 3566455413)) | (arr_23 [i_5]))) : ((min(((var_12 << (var_1 - 22))), 0)))));
    }
    var_26 = (var_15 == var_4);
    var_27 = (max(-772120547, ((min((max(0, var_5)), 0)))));
    #pragma endscop
}
