/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_11 = ((((-32767 - 1) ? 32757 : 6)));
        arr_2 [i_0] = (((((!(arr_1 [i_0])))) * (!-32747)));
        var_12 *= ((((arr_0 [i_0] [4]) ? (arr_1 [i_0]) : (arr_0 [12] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_13 |= 178;
        arr_5 [i_1] |= 0;
    }
    var_14 = (!var_3);
    var_15 = 19;
    #pragma endscop
}
