/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((12175562753499827858 ? 18130 : 3215441605));
    var_18 = min((!var_0), ((max(var_4, var_12))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min((arr_1 [i_0] [i_0]), (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        var_19 = ((max(1069547520, (arr_1 [1] [i_0]))));
        arr_4 [i_0] = (max((((((2312128041 ? var_8 : var_14))) ? -7 : ((var_13 ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0]))))), (((0 != ((3215441605 ? 0 : -1)))))));
        var_20 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_21 = ((~((~(arr_6 [i_1])))));
        var_22 &= ((((((-382192335 <= 10) ? ((~(arr_5 [i_1] [14]))) : (arr_6 [i_1])))) ? (((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : var_9)) : (arr_5 [i_1] [i_1])));
        arr_7 [i_1] &= (((((((max(var_2, (arr_5 [i_1] [i_1])))) ? ((min(var_12, -23025))) : (~-3857)))) ? (~var_4) : (!-1331553923139487029)));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [1] = (((((max((arr_6 [i_2]), ((var_8 ? var_1 : (arr_9 [i_2]))))) + 2147483647)) >> (((arr_9 [i_2]) + 34))));
        var_23 &= (min((((arr_6 [i_2]) ? 1331553923139487029 : var_12)), ((max((arr_6 [i_2]), (arr_6 [i_2]))))));
    }
    var_24 = (!var_11);
    #pragma endscop
}
