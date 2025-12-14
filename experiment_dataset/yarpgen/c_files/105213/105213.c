/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_5 ? var_1 : (var_2 + var_2))) <= ((((((var_5 ? var_0 : 1))) ? var_4 : ((min(var_6, var_5))))))));
    var_11 += 1;
    var_12 = (((((var_1 ? var_7 : (var_1 == var_8)))) ^ ((((min(var_3, var_8))) ? var_9 : (max(var_3, var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((min(var_2, ((((arr_0 [i_0] [i_1]) <= 500545277))))));
                var_13 *= var_0;
                var_14 += (((((arr_2 [i_0]) ? 1 : (arr_2 [19]))) + (((((arr_2 [11]) && (arr_0 [i_0] [i_1])))))));
                var_15 = ((((((1 ? 1 : 16384)) | (max(var_7, 1)))) <= var_9));
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}
