/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 = (arr_1 [i_0] [i_0]);
        var_17 = (((~-1) * (arr_1 [i_0] [i_0])));
        var_18 = (min(var_18, ((-(arr_0 [i_0 - 1])))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (17967 || 67043328)));
        arr_6 [i_1] = (max((-2147483647 - 1), ((((((arr_2 [i_1]) ^ (arr_3 [i_1])))) ? (arr_3 [i_1]) : -var_3))));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_20 += (((arr_4 [i_2 + 2] [i_2 - 1]) ? ((-(arr_3 [i_2 - 1]))) : ((-((max(var_13, 42)))))));
        var_21 = min((((((9 ? 38084 : 14223))) ? (~42) : (-2147483647 - 1))), 0);
        var_22 = (arr_7 [i_2] [i_2]);
        var_23 = (((arr_7 [i_2] [i_2]) ? 27525 : 7));
    }
    var_24 = ((((max(42, 184))) & (min(((158 ? 214 : 214)), ((max(var_10, var_10)))))));
    #pragma endscop
}
