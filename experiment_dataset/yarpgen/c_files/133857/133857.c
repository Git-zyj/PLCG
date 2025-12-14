/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (-127 - 1);
        arr_2 [i_0] [i_0] = (var_0 ? (arr_0 [i_0] [i_0]) : var_4);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_12 = (max(var_12, ((((((var_3 >= (arr_6 [i_1] [i_1]))) || (((var_10 ? (arr_4 [i_1] [i_1]) : 1)))))))));
        arr_7 [i_1] = ((234539482 ? var_4 : (((240882918892854199 ? -32751 : (arr_5 [15] [11]))))));
        var_13 = (((((var_4 ? (arr_4 [i_1] [i_1]) : var_4))) ? 54133 : (((!(((-19088 ? 9223372036854775807 : -240882918892854226))))))));
        arr_8 [i_1] = (((arr_6 [i_1] [6]) ? (!116) : (((!(arr_6 [i_1] [i_1]))))));
        arr_9 [i_1] = (((arr_6 [i_1] [i_1]) ? -var_0 : (arr_6 [i_1] [i_1])));
    }
    var_14 = ((var_8 ? -var_4 : var_4));
    #pragma endscop
}
