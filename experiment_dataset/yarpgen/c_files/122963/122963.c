/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((+(((var_9 * var_3) ? ((min(var_8, 43740))) : 21796))));
    var_11 = (min(var_11, ((((((43740 ? var_5 : 21799))) ? (-3244 & 17540903107906179601) : 462997650)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 ^= ((~(((var_6 ? 43737 : (arr_5 [4] [i_1] [i_1]))))));
                    var_13 = ((((max((((43 ? 51313 : var_6))), (43741 & 4294967287)))) ? (((max(var_6, (2886296657 >= 65526))))) : ((-2174141838 ? ((var_2 >> (-462997651 + 462997679))) : (arr_0 [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
