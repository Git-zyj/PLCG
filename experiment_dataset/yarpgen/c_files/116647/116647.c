/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (max((((!(~9588)))), ((((max((arr_4 [i_0] [i_1]), 0))) ? ((min(55931, (arr_5 [i_1])))) : 9598))));
                var_13 = ((max(-61165138528269207, (arr_1 [i_1 + 3]))));
                var_14 = 1;
            }
        }
    }
    var_15 = 29759;
    var_16 += (max(var_6, (max((228 & 6052095962177965833), (var_4 <= 6052095962177965859)))));
    #pragma endscop
}
