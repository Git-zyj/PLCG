/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((!(((((max(8384612077955132433, 8384612077955132451))) ? 8384612077955132452 : var_7))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_13 = (((1 < var_1) ^ -10062131995754419183));
        var_14 = ((((arr_2 [i_0 + 1]) != (arr_3 [i_0]))));
        var_15 = (((arr_1 [i_0 - 2] [i_0 - 2]) ? (arr_0 [i_0 - 2]) : ((63 ? 9126708400595236079 : 10062131995754419142))));
    }
    #pragma endscop
}
