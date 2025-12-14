/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((-((min(var_5, 0)))))) ^ 1540136391));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = var_5;
        var_19 = ((((max((arr_0 [i_0]), (arr_1 [i_0])))) ^ 665442482901032620));
        var_20 = ((((min(1, (max(0, var_3))))) ? ((-(((arr_1 [13]) ? (arr_0 [i_0]) : 23)))) : (((((arr_0 [i_0]) >= 74))))));
        arr_2 [4] = ((((((arr_0 [i_0]) + 2147483647)) << (((arr_1 [i_0]) - 6834933491623748637)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = (max(var_21, (((((((1 ? -23292 : 145)))) + ((((arr_1 [13]) < (((max((arr_3 [i_1] [i_1]), var_4))))))))))));
        var_22 = (~var_14);
        arr_6 [i_1] = (182 < (min((arr_4 [i_1]), -90)));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_23 = ((((~1) == (((arr_8 [i_1] [i_2]) ? var_5 : var_4)))));
            var_24 += (arr_5 [i_1] [i_1]);
            var_25 = (((arr_10 [i_1] [i_1]) ? (max(198, var_12)) : (((min(23291, -117))))));
            var_26 = var_4;
            var_27 = ((-1 ? -23292 : 1));
        }
        for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
        {
            arr_14 [9] [i_1] = ((min((((23 && (arr_4 [i_3 - 1])))), ((8550818476323659452 ? 1 : (arr_4 [i_1]))))));
            var_28 = (min(var_28, ((min((arr_9 [i_1]), (max((5659353506936665646 * 0), ((min(var_13, 70))))))))));
        }
        for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                arr_21 [i_1] = (arr_20 [i_1] [i_4 - 1] [i_1]);
                arr_22 [i_1] [i_1] = ((0 ? (arr_5 [6] [i_4 + 1]) : -23292));
            }
            for (int i_6 = 3; i_6 < 11;i_6 += 1)
            {
                var_29 = (((arr_20 [i_6 + 1] [i_6 - 2] [i_6 + 1]) & ((var_9 & (arr_11 [i_6 - 1] [i_6 + 1] [i_6 - 1])))));
                var_30 = (max(var_30, var_8));
            }
            arr_25 [4] [0] [0] = (min(8550818476323659437, -9007199254740992));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_28 [i_1] [i_1] [i_1] = ((14385763866769711484 >= (~0)));

            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                var_31 = var_13;
                var_32 += var_13;
                var_33 = var_1;
                var_34 = (max(var_34, var_2));
                var_35 = ((var_4 ^ (var_13 - -1231186649)));
            }
            var_36 = 88;
        }
    }
    for (int i_9 = 1; i_9 < 10;i_9 += 1)
    {
        var_37 = var_11;
        var_38 = (arr_0 [i_9]);
        var_39 = ((((max(164, (arr_32 [i_9 + 3])))) ? (arr_32 [i_9 + 3]) : 167));
    }
    var_40 = (max(var_40, (((min(1, (!188)))))));
    #pragma endscop
}
