/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((max(var_7, 809549071))), var_9));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 = (arr_2 [i_0]);
        var_12 = (min(var_12, (((var_9 ? -106 : ((-(var_7 + var_8))))))));
        var_13 = (max(var_13, var_3));
    }
    var_14 = ((max(-9, ((max(var_5, var_4))))));
    #pragma endscop
}
