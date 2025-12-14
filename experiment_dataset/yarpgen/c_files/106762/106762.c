/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = ((0 ? 1083979366 : 18446744073709551612));
                    var_17 = var_9;
                    var_18 = (max(var_18, ((((arr_4 [i_0] [2] [i_0]) ? ((((!(-2147483647 - 1))))) : ((((((arr_3 [i_0] [i_0]) / 21))) ? -32755 : (((arr_5 [i_0]) ? var_10 : (arr_2 [i_1] [i_0]))))))))));
                }
            }
        }
    }
    var_19 = ((var_13 ? ((var_2 ? var_3 : var_5)) : -4445));
    #pragma endscop
}
