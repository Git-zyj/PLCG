/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (var_9 ? var_5 : 1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = 4485842657306225380;
        arr_3 [i_0] |= ((arr_0 [i_0]) && 13960901416403326239);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((((arr_4 [i_1]) ? (arr_4 [i_1]) : 13960901416403326244))) ? ((~((~(arr_4 [i_1]))))) : (((var_10 + 2147483647) >> (((min(var_0, 19440)) - 19418))))));
        var_12 = (10719819338933218074 || 1810782275);
    }
    #pragma endscop
}
