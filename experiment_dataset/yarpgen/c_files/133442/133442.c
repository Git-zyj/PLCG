/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((19 ? (min(var_9, 18502)) : var_0))) ? (((-((1 ? var_8 : var_6))))) : (((var_8 - 18507) - 10128651776331117728))));
    var_11 = (max(var_6, (min(((46792 ? 12012386350172014872 : var_0)), var_7))));
    var_12 = (min(var_12, (var_8 - var_9)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((18531 ? 65516 : 0));
                var_13 = ((~(6513026312704943147 < 0)));
                arr_5 [3] [3] [1] = ((-(var_1 / var_9)));
            }
        }
    }
    #pragma endscop
}
