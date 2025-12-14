/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 65535;
    var_19 = var_0;
    var_20 = ((-((var_5 >> (((~var_6) + 45912))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = (~(max((arr_3 [i_0] [i_0]), (arr_2 [9]))));
        arr_4 [i_0] = ((!(!12751207883806722290)));
    }
    #pragma endscop
}
