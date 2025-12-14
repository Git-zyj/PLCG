/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] |= ((!((!(arr_2 [i_0 + 3])))));
        var_17 = ((!(arr_2 [i_0 - 1])));
        var_18 = ((((((arr_0 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (((min(1, (arr_2 [15])))))))) ? (((1 - ((((var_9 <= (arr_1 [i_0 - 1])))))))) : (arr_1 [i_0 + 2])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_19 = ((-9950 - (arr_2 [i_1 + 2])));
        var_20 = (max(var_20, (((((1 << (-25932 + 25951))) <= (arr_4 [i_1 + 3] [i_1 + 3]))))));
        var_21 &= (0 <= 157);
    }
    #pragma endscop
}
