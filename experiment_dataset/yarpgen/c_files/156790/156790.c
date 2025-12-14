/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (var_14 ? ((max((var_12 >> 1), (var_12 & 1)))) : ((var_8 ? 633221004 : 4294967295)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_19 += (arr_4 [i_0] [i_0] [14]);
                var_20 = (((((arr_4 [i_0] [i_1] [2]) ? (arr_4 [1] [i_1] [i_0]) : 0)) + ((-(arr_4 [i_0] [i_1] [i_0])))));
            }
        }
    }
    var_21 = var_8;
    #pragma endscop
}
