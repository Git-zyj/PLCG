/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((min(((19219 ? 12672505419241049933 : var_3)), var_6)), (((5774238654468501684 * var_9) + 183))));
    var_12 -= var_2;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_5;
        arr_3 [i_0] = (min((262143 >= 65528), (~734)));
    }
    #pragma endscop
}
