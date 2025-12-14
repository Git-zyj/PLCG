/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 *= ((((((arr_2 [i_0 - 2] [i_1]) ? (var_3 <= -1) : ((192 ? -7422601869864970711 : -7142))))) ? ((60960 - (!122))) : var_10));
                    var_14 ^= ((((~(min(var_1, (arr_6 [i_2] [i_1]))))) ^ ((1152921504606846976 ? (((31 ? var_7 : 1))) : (min((arr_0 [i_1]), (arr_3 [i_0 - 2])))))));
                    var_15 -= var_10;
                }
            }
        }
    }
    #pragma endscop
}
