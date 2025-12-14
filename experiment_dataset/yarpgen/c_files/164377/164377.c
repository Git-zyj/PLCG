/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1922475939;
    var_16 = ((var_3 ? ((-var_3 ? 1637869765 : ((-1225214231 ? 25767 : 1015966664)))) : -1225214239));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : ((60131 / (arr_3 [1] [i_0]))))) | ((-1705942076 * (max((arr_1 [i_0]), (arr_3 [i_0] [i_0])))))));
        var_18 = (max(var_18, (((1 ? (arr_2 [i_0] [i_0]) : ((-(arr_3 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (arr_2 [i_1] [i_1])));
        var_20 = (min(var_20, 1225214214));
        var_21 = (min(var_21, ((max(((((max((arr_3 [i_1] [i_1]), 60131)) == (((1 | (arr_5 [i_1] [i_1]))))))), (((((2 ? 1225214245 : (arr_5 [i_1] [i_1])))) ? -38 : -39768)))))));
        var_22 = (-(((!((((arr_7 [i_1]) / 18446744073709551610)))))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_23 &= ((2147483626 ? ((1 ? (arr_11 [i_2]) : (arr_11 [i_2]))) : (arr_9 [i_2])));
        var_24 = 60139;
        var_25 = ((((((arr_4 [i_2]) ^ (arr_4 [i_2])))) ? ((~(arr_4 [i_2]))) : 8655929626912134485));
    }
    #pragma endscop
}
