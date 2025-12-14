/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max(var_12, ((var_11 ? 616986376 : 14606231394532846373)))));
    var_16 = (max(15031, 2483921218332070265));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = 32767;
                var_18 = (+((-18737 ? (arr_2 [i_0 + 2] [i_0 + 3] [i_0 - 1]) : (arr_3 [i_0 + 2]))));
                arr_4 [i_1] = (max(-8456, 20448));
            }
        }
    }
    #pragma endscop
}
