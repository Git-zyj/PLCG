/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((((max(39, -105))) ? (max(-491315941, var_9)) : (63 - -491315939))), (max((max(491315944, 1)), (max(491315924, -47))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_18 = (min(var_18, (((((!(((112 ? (arr_2 [i_0]) : (arr_1 [2])))))) ? (((arr_2 [i_0]) ? ((491315945 / (arr_2 [i_0]))) : (((arr_2 [i_0]) * 1)))) : (((((32 ^ (arr_1 [1]))) < (-684381671 ^ 14912)))))))));
        var_19 = (max(((((arr_1 [i_0]) == -20))), 1));
        arr_3 [i_0] = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = ((48 << (40 - 40)));
        var_21 = ((-1910206048 >= (arr_1 [12])));
    }
    #pragma endscop
}
