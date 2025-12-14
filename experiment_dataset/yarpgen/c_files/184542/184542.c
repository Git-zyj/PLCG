/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_10 ^ ((((12328564202125651857 << (6680512245064270447 - 6680512245064270385))) | 91))));
    var_15 = (max(var_15, (((((-((1 ? 127 : 3313282009362448443))))) ? ((var_9 ^ (3313282009362448443 | var_10))) : ((var_5 & (min(12328564202125651877, var_9))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = ((6118179871583899751 ? 15259406442242790218 : 119));
                var_17 ^= (~12328564202125651852);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_18 = (arr_1 [i_2]);
                var_19 = 12328564202125651877;
            }
        }
    }
    #pragma endscop
}
