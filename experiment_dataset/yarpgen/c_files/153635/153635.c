/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((((var_2 ? var_7 : var_12)) ? (var_7 == var_0) : (var_4 == var_5))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (((min((max(var_2, (arr_1 [i_0]))), (min(var_12, (arr_1 [i_0])))))) ? var_0 : var_10);
                var_15 |= var_9;
            }
        }
    }
    var_16 = ((((max((var_9 - var_5), 386519888))) ? (!var_3) : ((((!var_3) >= (var_2 + 1023))))));
    var_17 = (min(((((var_1 | -111) != var_12))), var_10));
    #pragma endscop
}
