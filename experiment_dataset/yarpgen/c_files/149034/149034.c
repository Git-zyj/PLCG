/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (((((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [1])))) ? (var_17 != 1) : (min(var_6, var_17))))) ? (((((((arr_0 [i_0]) / (arr_1 [i_0] [i_0]))) < (((((arr_0 [i_0]) || var_14)))))))) : (min((32 | -5354120115881571508), 13675))));
        arr_2 [i_0] = (((arr_0 [i_0]) * (((max(var_11, var_14)) * (((((arr_0 [i_0]) < var_4))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((((min(var_0, 243))) ? ((((arr_3 [i_1]) == 16777216))) : (~var_4)));
        arr_7 [i_1] = ((((((max(var_16, (arr_3 [i_1])))) ? (~var_15) : (((arr_4 [i_1] [i_1]) ? (arr_3 [i_1]) : var_14)))) < (arr_3 [i_1])));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = var_13;
        var_19 = (min(var_19, (((((((arr_5 [i_2]) - (arr_5 [13])))) ? (((arr_5 [i_2]) ? (arr_5 [i_2]) : var_15)) : ((((arr_5 [i_2]) ? 65515 : var_11))))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_20 = ((!(arr_11 [i_3] [9])));
        arr_14 [i_3] [i_3] = ((((((var_5 + (arr_9 [i_3]))))) ? (var_7 * 5354120115881571487) : ((var_2 ? var_17 : (arr_5 [i_3])))));
        var_21 = (min(var_21, ((max(((((arr_3 [i_3]) >= var_12))), (((arr_3 [i_3]) ? 2830376952 : (arr_3 [i_3]))))))));
    }
    var_22 *= var_5;
    #pragma endscop
}
