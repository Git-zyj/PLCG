/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 = (((~(~-16))));
                    var_11 = (var_9 + 7821411680433217313);
                    var_12 = ((var_5 ? (min(var_5, (var_7 / var_3))) : ((((((arr_2 [i_2]) ? (arr_7 [i_0] [i_1]) : var_1))) ? var_6 : (((min(0, 65535))))))));
                }
            }
        }
    }
    var_13 = ((~(((var_4 == (var_9 <= var_3))))));
    #pragma endscop
}
