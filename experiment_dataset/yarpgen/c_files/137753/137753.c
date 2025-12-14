/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((max(7, 18)))));
                    var_17 = (((-12 ? (((65535 ? 255 : 18))) : (max(-1, 0)))));
                }
            }
        }
    }
    var_18 = ((1 ? (((((0 ? 0 : 12824064829858098908))) ? 1 : (((-32767 - 1) ? 170 : 6181169724742159570)))) : ((max((((758676133632864344 ? 1 : 1))), (((-32767 - 1) ? 43866 : -8632657151388853372)))))));
    #pragma endscop
}
