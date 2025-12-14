/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_7 < var_4) ? var_0 : (min(1446146746890334825, -1446146746890334826)))) & var_2));
    var_11 += (((~-var_2) * (!65408)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = ((min(((var_5 & (arr_1 [i_0] [i_0]))), ((-(arr_0 [i_0]))))));
        arr_2 [i_0] = (max(-33, (((((arr_1 [i_0] [21]) & var_9)) / ((-(arr_0 [i_0])))))));
        arr_3 [i_0] = (((((-((127 ? -1446146746890334826 : -1446146746890334825))))) ? ((-((~(arr_0 [i_0]))))) : (min((min(127, (arr_0 [i_0]))), (~var_9)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_13 = (((arr_1 [i_1] [i_1]) / (arr_0 [i_1])));
        arr_7 [i_1] = (var_7 / var_2);
    }
    var_14 = 1446146746890334825;
    #pragma endscop
}
