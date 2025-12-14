/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = ((110 == (32840 == -1)));
                var_21 = (min(var_21, ((((0 & 65535) & 24)))));
                arr_5 [i_1] [i_1] = (((var_8 && ((1346912449 < (arr_0 [i_0] [i_1]))))));
            }
        }
    }
    var_22 ^= ((var_6 >> (var_5 - 8051057961836587362)));
    var_23 = 14052495698373452192;
    #pragma endscop
}
