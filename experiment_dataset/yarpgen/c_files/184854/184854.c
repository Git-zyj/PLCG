/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 ^= -8100373162253366863;
                var_19 = ((+(((arr_3 [i_0]) / ((max((arr_1 [i_0 + 1]), (arr_3 [i_0]))))))));
            }
        }
    }
    var_20 = (min(var_20, var_9));
    var_21 = (-1078921629 & ((-(!-81))));
    #pragma endscop
}
