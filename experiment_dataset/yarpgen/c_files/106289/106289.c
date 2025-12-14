/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_12 *= (max((arr_4 [i_0] [i_0] [12]), 15788117858332881536));
                var_13 = (((((5969324566132538949 ? 88 : 680961610100478653)) / ((((arr_2 [i_0] [i_1]) ? var_5 : var_2))))));
                arr_6 [0] [i_0] = (((arr_3 [i_1 - 1]) & ((((-81 & (arr_5 [i_0 - 1]))) >> (77 - 71)))));
                var_14 = (max(var_14, ((max(var_5, (arr_0 [12]))))));
                arr_7 [i_0] = ((((((max((arr_0 [i_0]), -20)) ^ (arr_5 [i_1])))) ? 8191 : (arr_0 [i_0])));
            }
        }
    }
    var_15 = (max(((((min(var_4, var_0))) ? var_10 : (min(var_9, var_11)))), (((var_11 ? (var_8 * var_11) : var_3)))));
    var_16 = max((var_9 / var_8), (((max(-829703610, var_2)))));
    var_17 = 1;
    var_18 = (max(var_18, ((((max(var_6, ((var_7 ? (-127 - 1) : 4294967295)))) + var_4)))));
    #pragma endscop
}
