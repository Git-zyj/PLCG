/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [7] = ((16796 ? ((((arr_1 [i_0] [i_0]) && 8317))) : (((2 && (1332008609867111343 || 0))))));
        arr_3 [i_0] [i_0] = (((~(((arr_1 [i_0] [i_0]) ? -10606 : 16248624865635939578)))));
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((var_4 ? (min(1332008609867111343, (((~(arr_6 [i_1] [i_1])))))) : (min((((~(arr_6 [i_1] [i_1])))), (arr_1 [i_1] [i_1])))));
        arr_9 [i_1] [i_1] = ((((((((arr_6 [7] [1]) | (arr_6 [i_1] [i_1]))) < ((min(-118, 8299)))))) | ((max((min((arr_6 [i_1] [12]), 8317)), var_7)))));
    }
    #pragma endscop
}
