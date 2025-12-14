/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = var_15;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = (min(((((((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_4 [i_1] [i_1]))) & ((var_10 ? (arr_4 [i_1] [i_0]) : -2962))))), ((((var_16 / (arr_4 [i_0] [i_1]))) - (arr_4 [i_1] [i_0])))));
            var_19 = (((((-2962 & var_4) ? (((min(var_12, 2)))) : 6695910066012240234)) + ((((var_13 ^ var_15) ? var_12 : (-2064568741 + var_2))))));
        }
        var_20 = ((((((var_14 > ((((arr_0 [i_0]) * var_7))))))) | (min(((((arr_1 [i_0]) > var_10))), (arr_0 [i_0])))));
    }
    var_21 = ((((var_10 | (max(var_5, 6695910066012240221)))) <= (((((var_5 ? 1 : var_14))) ? var_1 : (var_13 | -5518657249288015457)))));
    #pragma endscop
}
