/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((~var_6), (max(-var_11, var_11))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [19] [13] = (min(((~((2097088 ? 12620 : 2097072)))), (((~(~var_5))))));
                var_15 = -18446744073709551591;
            }
        }
    }
    var_16 = (min(var_16, var_8));
    var_17 += (((((65535 ? ((max(var_7, 12611))) : var_0))) ? var_6 : ((~((var_2 ? -12620 : var_3))))));
    #pragma endscop
}
