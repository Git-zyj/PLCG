/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!4398046511103) && (((4398046511103 == var_2) <= var_8))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((var_9 > -32379) >= (((((((-9223372036854775807 - 1) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))) || (arr_1 [i_0]))))));
        var_11 = (max(var_11, 54905));
        var_12 -= 3764591850435185385;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (-32379 ^ 16);
        arr_6 [1] = var_5;
        arr_7 [i_1] = (((var_9 != var_5) ? var_2 : 32760));
    }
    var_13 = var_0;
    var_14 = -var_7;
    #pragma endscop
}
