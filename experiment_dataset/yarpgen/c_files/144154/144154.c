/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_20 = 17723107297758104050;
        var_21 = (((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (max(((var_10 ? 3770121643 : 18262)), ((((arr_3 [i_1]) ? (arr_4 [i_1] [i_1]) : 61)))));
        arr_6 [i_1] [i_1] = ((-4935 ? (((max(var_8, (arr_4 [i_1] [i_1]))))) : 8101703417389053802));
        arr_7 [i_1] = 1171577805300884909;
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_22 = 524845639;
        arr_11 [i_2] = (max((min((arr_3 [1]), (arr_3 [i_2]))), (-1878387290 != 61)));
    }
    var_23 = 3770121643;
    var_24 = var_4;
    #pragma endscop
}
