/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((((((((599117319 ? 16460 : var_5))) ? ((var_13 ? var_5 : 3135037516)) : (((((arr_1 [i_0] [i_0]) == var_6))))))) ? 65528 : ((((min(0, 16460))) ? var_4 : 127))));
        var_14 = ((((var_7 ? (arr_0 [11]) : (arr_1 [0] [i_0])))) && ((-1655223813 == ((3695849988 ? -5213578735373718786 : -32745)))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = (((-1 == -125) ? ((min((arr_0 [i_1]), (arr_0 [i_1])))) : 3));
        arr_8 [i_1] [i_1] = (((((var_9 / 3695849976) > (~-1217391565))) ? ((((~-1021807648) ? 16460 : var_7))) : ((((((-114 ? (arr_3 [i_1] [i_1]) : var_11)) + 9223372036854775807)) >> (((arr_0 [i_1]) - 161))))));
        var_15 = ((((((arr_5 [i_1] [5]) ? 58 : (arr_5 [i_1] [i_1])))) ? var_5 : ((max(var_6, 27648)))));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        arr_11 [i_2] = 1281216921;
        var_16 = ((~(((((692860873 ? (arr_9 [i_2]) : 90))) % 65472))));
        var_17 = -var_8;
        var_18 = ((~(((((var_11 ? (arr_1 [i_2] [i_2]) : var_6))) ? ((128 ? 128 : 2916514122230766791)) : ((-15250 ? (arr_10 [4] [i_2 + 1]) : 3403715746959736096))))));
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] [10] = var_10;
        arr_17 [i_3] [i_3] = ((27648 ? ((14101114515137293814 ? 107 : -446105595)) : ((1884408248609531929 ? 27648 : (arr_12 [12] [12])))));
        var_19 = ((var_8 >= (arr_13 [i_3] [i_3])));
        arr_18 [i_3] = ((5 + (arr_0 [i_3])));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_22 [i_4] = 9223372036854775807;
        var_20 = (((((+((((arr_13 [i_4] [i_4]) && var_8)))))) ? ((min((arr_13 [i_4] [i_4]), (arr_13 [i_4] [i_4])))) : (((((~(arr_15 [i_4] [i_4])))) ? (~var_6) : ((var_2 ? var_9 : -1))))));
        arr_23 [i_4] = ((~(arr_20 [i_4])));
        arr_24 [i_4] = (((min((((~(arr_14 [i_4] [i_4])))), (arr_20 [i_4]))) + (~var_10)));
    }
    var_21 = ((((((var_7 >= var_5) >> ((((var_0 ? 2147483647 : var_13)) - 2147483647))))) ? var_8 : ((-1217391588 ? (~-1) : (min(12, var_11))))));
    var_22 = (max(((var_5 ? (~var_9) : var_10)), (-91 / var_10)));
    #pragma endscop
}
