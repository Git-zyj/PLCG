/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_13 ^= (5217997936007937282 > -5217997936007937281);
        var_14 = (min(var_14, (((5217997936007937311 ? -5217997936007937267 : -5217997936007937312)))));
    }
    var_15 = (min(((((!var_9) && var_5))), ((max(9020332205426582880, var_12)))));
    var_16 = var_10;
    var_17 = (((!9020332205426582900) ? 1 : -244445502088782561));
    #pragma endscop
}
