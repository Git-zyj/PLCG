/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        arr_3 [i_0] = ((-351250395 ? (max((var_11 + 6343464721870375852), ((min(var_9, var_6))))) : ((max((((arr_0 [i_0] [i_0]) + 6677621317687880528)), (arr_1 [i_0] [i_0]))))));
    }
    var_12 = max((((var_11 ? var_2 : 1056964608))), 23284);
    #pragma endscop
}
