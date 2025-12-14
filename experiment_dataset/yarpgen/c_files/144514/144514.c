/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((((198194463 ? 63 : 2904508637)))) - (((!-30558) ? (((198194449 ? 2119044110 : 2838833298))) : 14482314443657409287)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 ^= (((~(~3551908534))));
                var_20 = 0;
                arr_6 [i_1] = 1;
                var_21 = ((0 ? (((((0 ? 1165 : -80))))) : ((max(3551908534, 52)))));
                var_22 = (((~(-32767 - 1))));
            }
        }
    }
    var_23 = (!3551908534);
    var_24 = (!198194460);
    #pragma endscop
}
