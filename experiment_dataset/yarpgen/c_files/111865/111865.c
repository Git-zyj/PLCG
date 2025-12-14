/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((~(((!6121) ? -644525334 : 10))));
    var_14 = 14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((18446744073709551606 ? 18446744073709551615 : 5776)))));
        arr_3 [i_0] [i_0] = (!4653031999273149085);
        arr_4 [2] = (~1);
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = ((~(((!(-2147483647 - 1))))));
        arr_10 [i_1] [i_1 + 1] = (((-((1 ? 19 : 0)))));
    }
    var_15 = var_1;
    #pragma endscop
}
