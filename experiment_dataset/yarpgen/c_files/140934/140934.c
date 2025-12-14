/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -1412858664;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (((127 ? 1140864177 : 127)));
        var_21 = 4294967287;
        arr_5 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }
    var_22 = ((!(((~(max(var_7, var_9)))))));
    #pragma endscop
}
