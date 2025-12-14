/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(11236736378956890450, 96097051));
    var_17 = (min(((min(var_8, var_1))), var_7));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (((((!-96097052) ? (!var_6) : (max(var_1, (arr_1 [i_0]))))) << (((634869014 - 65349) - 634803627))));
        var_19 ^= -var_9;
    }
    #pragma endscop
}
