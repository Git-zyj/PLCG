/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (min(((((var_9 >= var_4) > ((var_9 ? var_4 : var_4))))), ((-3458600452 ? (((max(var_1, var_1)))) : (max(var_8, var_2))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_12 = ((~(((!((max(var_2, 836366847))))))));
        arr_3 [i_0] [i_0] = 836366844;
    }
    var_13 = var_2;
    var_14 = (max(var_5, var_9));
    #pragma endscop
}
