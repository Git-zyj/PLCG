/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~-var_10);

    for (int i_0 = 4; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_20 ^= var_11;
        var_21 += ((((((arr_0 [i_0 + 2] [i_0 + 3]) ? (arr_0 [i_0 + 2] [i_0 + 3]) : (arr_0 [i_0 + 2] [i_0 + 3])))) ? ((((!(arr_0 [i_0 + 2] [i_0 + 3]))))) : (((arr_0 [i_0 + 2] [i_0 + 3]) ? (arr_0 [i_0 + 2] [i_0 + 3]) : (arr_0 [i_0 + 2] [i_0 + 3])))));
        arr_3 [0] [i_0 - 2] = (-32767 - 1);
        var_22 = (min(var_22, 32760));
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_23 = (32744 - var_15);
        var_24 = ((!((((arr_6 [i_1] [2]) ? (arr_4 [i_1]) : (((arr_6 [i_1 - 2] [18]) & var_12)))))));
    }
    #pragma endscop
}
