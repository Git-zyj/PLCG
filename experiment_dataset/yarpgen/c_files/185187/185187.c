/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_17 = (min((min((arr_2 [i_0]), (arr_1 [i_0] [i_0]))), ((((arr_2 [i_0]) == (arr_0 [i_0]))))));
        var_18 = ((((max(var_3, (arr_2 [i_0])))) ? ((((((min(var_16, var_15))) && -2352490548588760740)))) : (max((1 + 2352490548588760739), (max(2352490548588760739, 11))))));
        var_19 = (min(((min(var_16, var_16))), (max((arr_1 [i_0] [i_0]), (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_20 = (max(var_20, ((-(max((arr_3 [i_1]), var_9))))));
        var_21 = (max((((((max(var_3, var_10))) ^ (((arr_4 [i_1]) & (arr_1 [i_1] [i_1])))))), ((~(max(var_12, var_13))))));
    }
    var_22 = var_12;
    var_23 = var_13;
    var_24 = var_3;
    #pragma endscop
}
