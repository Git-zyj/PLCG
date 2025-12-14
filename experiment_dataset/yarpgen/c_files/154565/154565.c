/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((var_11 ? (max(4214987788, ((var_12 ? 4599809265221528278 : 9187343239835811840)))) : (((~(~124))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((max((max((arr_2 [1] [i_1]), ((3 ? var_0 : var_19)))), ((~(arr_2 [i_0] [i_1]))))))));
                arr_5 [i_0] [i_1] [i_0] |= (max((((arr_3 [i_0] [i_1]) ? ((max((arr_3 [i_0] [i_1]), var_16))) : 139)), (arr_2 [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
