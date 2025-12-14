/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        arr_4 [i_0] = ((!((((((182 ? 65 : (arr_2 [i_0])))) ? ((max(164, 158))) : 182)))));
    }
    var_19 = (((((-var_16 ? var_4 : 200))) ? var_4 : var_7));
    #pragma endscop
}
