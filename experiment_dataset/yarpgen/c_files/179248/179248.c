/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -117;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [1] [15] = ((((((arr_1 [i_0] [i_0]) ? 21 : var_14))) ? (max(11560037779889910170, 6684094779100241577)) : 3034442932));
        arr_4 [i_0] [1] = (-212209534 ? (min((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 32754)), (((arr_0 [i_0]) ? 212209534 : (arr_2 [i_0]))))) : (max(((max(var_7, var_0))), (min((arr_2 [i_0]), (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_16 = arr_6 [i_1];
        arr_7 [i_1] = (arr_2 [i_1]);
        var_17 = (((((!(arr_2 [16])))) << (((arr_2 [i_1]) - 1311409357))));
        arr_8 [11] [11] = ((((((arr_2 [i_1]) / ((3272784547 ? var_9 : 8935141660703064064))))) ? ((-(max(var_0, (arr_5 [i_1] [i_1]))))) : ((max((min((arr_2 [i_1]), 4094)), ((4294967287 ? var_10 : 15079)))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        arr_11 [21] = ((arr_10 [i_2 - 1]) ? 1613572551426442264 : var_4);
        arr_12 [i_2 - 1] [i_2 - 2] = (var_3 ^ var_2);
        var_18 = (((arr_9 [i_2]) ? var_9 : (arr_9 [16])));
        var_19 = (188707190 ? (arr_10 [i_2 - 2]) : (arr_10 [i_2 - 1]));
        arr_13 [i_2] = var_13;
    }
    var_20 = ((var_6 ? var_2 : var_8));
    #pragma endscop
}
