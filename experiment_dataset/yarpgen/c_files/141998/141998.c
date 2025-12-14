/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(!-var_4)));
    var_18 -= (min(((min(-113, var_11))), (!var_2)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            var_19 = (min((arr_1 [3]), (arr_3 [i_1 - 4] [i_1 - 1])));
            var_20 = (arr_2 [i_0]);
            var_21 = (min(((((min(var_6, (arr_2 [i_0])))) * (((var_11 || (arr_5 [3] [i_1])))))), var_9));
        }
        arr_6 [9] = ((!((((((arr_1 [17]) ? var_13 : 13297))) != (arr_1 [i_0 - 1])))));
        arr_7 [1] = (((arr_0 [i_0 - 1] [i_0 - 1]) || var_5));
        arr_8 [i_0] = (((arr_1 [i_0 - 1]) / ((min(var_10, 112)))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_22 = ((((min((arr_10 [i_2 - 1] [i_2]), (var_15 >= var_13)))) ? (min(((((((arr_11 [i_2]) + 2147483647)) << (((-113 + 127) - 14))))), ((-(arr_3 [i_2] [i_2]))))) : 243));
        arr_12 [i_2] = ((((((arr_10 [16] [16]) ? (((min(var_14, var_15)))) : ((-89 ? (arr_5 [i_2] [i_2]) : (arr_1 [i_2])))))) ? (arr_9 [i_2] [i_2]) : (1 - 15272416515044131746)));
        arr_13 [i_2] = (arr_5 [i_2] [i_2]);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_18 [i_2] [i_2] [i_2] = (((arr_16 [i_3] [i_3]) ? (arr_9 [i_2] [i_2 - 1]) : (~var_2)));
            var_23 = var_4;
            var_24 = (min(var_24, (((var_4 ? -1 : (arr_5 [15] [i_2 - 1]))))));
            arr_19 [i_2] [i_2] = (((((arr_14 [i_2]) ? 65515 : var_9)) | (((arr_14 [i_2]) + (arr_11 [i_2])))));
            var_25 = (!var_2);
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            arr_23 [i_2] = (min((min(var_1, var_7)), -var_9));
            arr_24 [i_2] [i_2] = (((min((arr_2 [i_2 - 1]), ((-(arr_15 [i_2] [i_4] [i_4])))))) ? -var_0 : (((arr_4 [11] [i_2 - 1] [i_4]) ? -116 : -1)));
            arr_25 [i_2] = var_5;
            arr_26 [i_2] [i_2] = (arr_21 [i_2 - 1] [i_2]);

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_26 = var_10;
                var_27 -= ((!((min((arr_0 [i_2 - 1] [i_2 - 1]), (arr_0 [i_2 - 1] [i_2 - 1]))))));
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
        {
            var_28 = ((~(arr_2 [i_2 - 1])));
            arr_33 [i_2] = var_11;
            var_29 = (((((arr_14 [i_2]) * (arr_5 [i_2] [i_2]))) / -1420845185));
            var_30 = (((-1 + 9223372036854775807) << ((((~(arr_15 [i_2] [i_2] [9]))) - 9178148937958553524))));
        }
    }
    #pragma endscop
}
