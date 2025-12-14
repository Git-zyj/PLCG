/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((-26630 + 2147483647) >> (((var_8 >> var_9) - 2897201514803903957))))) ? var_1 : (390679847608500205 / -390679847608500202)));
    var_11 = ((~(((!(390679847608500205 & 65508))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0 + 2]);
        var_12 = (arr_0 [i_0] [i_0]);
        var_13 = (!-390679847608500205);
        var_14 = ((2362464671164835272 ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    #pragma endscop
}
