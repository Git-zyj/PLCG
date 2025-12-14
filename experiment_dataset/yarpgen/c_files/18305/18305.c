/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-var_2 >= ((var_4 * (((35 ? var_2 : var_6)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = min(((((((arr_0 [i_0] [i_0]) ? 140 : var_0))) ? (arr_1 [i_0]) : 521100188)), ((max((!89), ((!(arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] = (((var_8 + var_6) / ((max((arr_1 [i_0]), (((!(arr_0 [5] [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_13 = (min((((arr_3 [i_1] [i_1]) ? 140 : (arr_3 [i_1] [i_1]))), ((var_6 ? ((((arr_3 [i_1] [9]) || var_1))) : (arr_3 [i_1] [i_1])))));
        var_14 = (max((((arr_3 [i_1] [i_1]) ? ((var_0 ? (arr_3 [i_1] [i_1]) : var_5)) : ((var_6 ? var_5 : (arr_3 [i_1] [i_1]))))), ((((83 ? 84 : (arr_4 [0]))) ^ ((((!(arr_4 [i_1])))))))));
    }
    var_15 *= ((var_2 ? var_0 : ((((var_1 % var_1) >= var_10)))));
    var_16 = ((((min((var_4 >= var_8), (min(6006473318561955038, var_8))))) ? (((((var_3 ? var_3 : var_6))) ? ((max(var_10, 166))) : var_3)) : var_9));
    var_17 ^= (max(var_5, ((max((~89), var_2)))));
    #pragma endscop
}
