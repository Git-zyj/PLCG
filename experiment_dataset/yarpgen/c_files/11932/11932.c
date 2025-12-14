/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (max(1, ((85 ? (104 | -6) : var_9))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_19 = (max(var_19, (1 < 152)));
        arr_2 [i_0] [i_0] = (arr_0 [i_0 - 1] [i_0]);
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1 - 1] = ((((~(((arr_5 [i_1]) | 3491)))) | (arr_6 [i_1] [i_1])));
        arr_8 [i_1 - 1] = (max((((arr_1 [i_1 + 1]) < var_1)), (-1419283027 != 5882979507063444156)));
        arr_9 [i_1 + 2] = ((~((-(arr_1 [i_1 - 2])))));
    }
    var_20 = -var_12;
    #pragma endscop
}
