/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (((var_6 || (((1152851135862669312 ? 0 : 61966))))));
    var_16 = var_3;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((3579 <= 1152851135862669304) > (((arr_1 [i_0]) * (arr_1 [i_0])))));
        var_17 = (((max(1152851135862669307, (((36028797018963964 ? (arr_1 [1]) : -1181897416))))) << ((((!1181897416) != 46919)))));
    }
    var_18 = var_1;
    #pragma endscop
}
