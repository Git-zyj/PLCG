/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 15;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = (max(var_18, ((((((-(((18292322281044249288 == (arr_0 [i_0] [i_0]))))))) ? (!32754) : 0)))));
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        var_19 = ((-((2044 ? ((-1859174143 ? -2464 : 154421792665302328)) : (arr_0 [i_0] [i_0])))));
        var_20 -= (((((20 ? (arr_0 [i_0] [i_0]) : 15))) ? (((-(arr_1 [i_0])))) : ((-(min((arr_1 [1]), 1859174142))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_21 -= ((arr_4 [i_1] [i_1]) ? (((arr_5 [0]) ? 154421792665302328 : 202)) : (((((arr_0 [i_1] [i_1]) > 15)))));
        var_22 = ((18292322281044249288 ? 244 : -4598));
    }
    var_23 = (max(var_23, var_10));
    var_24 = ((((14385 ? (!251) : var_0)) * 53));
    #pragma endscop
}
