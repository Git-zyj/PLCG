/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = -0;
                var_13 = max(var_0, ((((var_4 % var_2) ? 4294967295 : ((((arr_2 [i_0] [i_1]) >> var_2)))))));
                arr_5 [9] = (((((var_10 <= (arr_3 [i_0] [i_0 - 4] [i_0])))) & -976445617));
                var_14 = ((((var_11 ? (arr_4 [i_0] [i_0] [i_1]) : 254)) * ((((var_10 | 108) > var_1)))));
            }
        }
    }
    var_15 = var_4;
    var_16 = ((-(((var_10 ? var_9 : var_0)))));
    #pragma endscop
}
