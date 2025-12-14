/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = var_5;
        var_14 ^= (((((max(3256315085, 5839141123231504649))) ? (max(-1923123078, (arr_1 [i_0] [i_0]))) : (max(var_2, (arr_1 [i_0] [i_0]))))));
    }
    var_15 = ((-(((!(~var_10))))));
    #pragma endscop
}
