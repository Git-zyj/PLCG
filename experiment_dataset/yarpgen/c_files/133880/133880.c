/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 56;
    var_14 = (min(var_14, var_9));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((min(1, -10)));
        arr_4 [8] |= ((((((arr_0 [i_0 - 1]) <= (arr_0 [i_0 + 1])))) > (61 || 4124325701)));
        arr_5 [i_0] = ((var_11 ? -11 : 1));
    }
    #pragma endscop
}
