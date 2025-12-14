/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((-5439101457596414372 ? var_2 : var_5))) * (((((arr_1 [i_0]) << (((arr_1 [1]) - 2039294124))))))));
        arr_3 [i_0 - 2] = (max(var_6, (((((((arr_1 [i_0 - 2]) != -5439101457596414392)))) / ((var_0 ? var_3 : (arr_1 [i_0 + 1])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = var_5;
        arr_7 [i_1] = (arr_5 [i_1]);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_11 = ((66846720 / (arr_4 [i_3 + 1] [i_2])));
            var_12 = (max(var_12, ((((arr_9 [4] [4]) ? (arr_4 [i_3 - 1] [16]) : (arr_4 [i_3 - 1] [12]))))));
        }
        var_13 = (((min((min(253, (arr_5 [i_2]))), ((var_0 ? 4294901760 : 1)))) != ((((((arr_12 [i_2]) || var_10)))))));
        arr_13 [i_2] [i_2] = ((((((arr_9 [i_2] [i_2]) ? (1 | -66846720) : (arr_11 [i_2])))) ? (arr_9 [i_2] [i_2]) : ((((max(473087976, 896))) ? (min(-891, (arr_5 [i_2]))) : ((((arr_9 [i_2] [i_2]) ? (arr_8 [i_2]) : 896)))))));
    }
    var_14 = var_2;
    #pragma endscop
}
