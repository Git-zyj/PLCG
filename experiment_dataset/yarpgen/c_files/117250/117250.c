/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((8574 ? -7 : 6595629606946465712)));
        arr_3 [i_0] = ((867 != -1179631537) ? (arr_0 [i_0] [6]) : 3280266091);
    }
    var_16 = (((((((8024466712785112664 ? (-9223372036854775807 - 1) : 1335087618)) != (var_1 % 7860)))) * (!var_1)));
    #pragma endscop
}
