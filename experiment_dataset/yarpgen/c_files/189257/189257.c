/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 81;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0 + 1] = ((~((65532 << (65531 - 65512)))));
                var_14 = (min(var_14, 65532));
                var_15 += (min((max((arr_6 [i_0 + 3] [i_1]), ((min(var_7, (-2147483647 - 1)))))), ((((65525 + 2147483647) << (((var_4 + 3713120549355243770) - 4)))))));
                arr_8 [i_0 + 1] = var_6;
            }
        }
    }
    var_16 *= var_11;
    var_17 = (~65534);
    #pragma endscop
}
