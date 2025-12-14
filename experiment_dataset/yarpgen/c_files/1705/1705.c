/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_11 = (min(var_11, ((((((var_5 ? (arr_2 [i_1] [i_0]) : var_4))) ? (((3434656884 ? ((var_8 ? (arr_1 [i_0] [i_0]) : var_2)) : (arr_1 [i_0] [i_1])))) : (15504452123292243275 | 20))))));
            var_12 = (19 - 18);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_13 = ((var_3 ? (arr_1 [1] [i_2]) : var_9));
            var_14 = (65507 % 56563);
            var_15 = ((172319098 ? 8388607 : ((-43 ? 8388583 : var_2))));
            var_16 &= (((4294967295 ? var_3 : (arr_6 [i_0] [i_0]))));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_17 = ((28 ? 1 : 65535));
            var_18 = (((((arr_10 [i_0]) ? (arr_7 [i_0]) : var_5)) / ((var_0 ? (arr_10 [i_0]) : var_5))));
            var_19 = ((61 ? ((var_7 ? (arr_0 [i_3] [i_0]) : (arr_0 [i_3] [i_0]))) : (max(57, ((19016 ? -1029084085 : 0))))));
        }
        var_20 += (((((((min(157, 14877))) >> ((((arr_4 [i_0] [i_0]) || var_6)))))) ? (((((13988847351883042996 ? var_7 : var_2))) ? (((var_8 ? var_5 : (arr_6 [i_0] [i_0])))) : ((9 ? var_2 : 9463279269222859944)))) : (((max(var_1, (arr_9 [i_0])))))));
    }
    var_21 = (max(var_21, ((max((((min(var_2, var_0)) ^ (min(var_0, 1126088735)))), var_8)))));
    #pragma endscop
}
