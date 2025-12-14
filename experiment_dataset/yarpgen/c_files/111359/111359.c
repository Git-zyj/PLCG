/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((~((max(var_8, var_0)))));
    var_13 += (max(-5603830376256906540, 5603830376256906536));
    var_14 = (((((536870911 ? (min(var_5, var_10)) : (!5603830376256906562)))) ? 31 : (((((var_10 ? -38 : var_10))) ? var_6 : (~-79)))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_15 += ((min(var_5, 1)));
        arr_4 [1] = ((~(!5603830376256906533)));
    }
    #pragma endscop
}
