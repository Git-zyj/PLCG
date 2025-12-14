/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (-(((arr_1 [i_0] [i_1 - 1]) ? (arr_4 [i_0 - 1] [i_1 - 1] [i_0 - 1]) : 2096896)));
                var_15 = var_11;
                var_16 = (max(((((arr_1 [i_0 - 1] [i_1 + 1]) ^ -2096901))), var_4));
                var_17 = ((-(((2096896 <= (max((arr_2 [i_0] [i_0 - 1]), -2096881)))))));
            }
        }
    }
    var_18 = ((((var_0 >= (((var_5 ? var_1 : 112))))) ? (+-2096897) : (max(var_5, (var_10 / var_0)))));
    #pragma endscop
}
