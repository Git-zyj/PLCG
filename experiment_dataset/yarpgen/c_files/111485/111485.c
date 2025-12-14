/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(((3512547199095997960 ? -1 : -3512547199095997945)), var_13);
    var_21 = var_16;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_22 = (((1298701899590457479 == -127) != ((4294967295 ? 255 : 3410431449049683361))));
        arr_2 [i_0] = var_14;
    }
    var_23 = -16;
    var_24 = var_14;
    #pragma endscop
}
