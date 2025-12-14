/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_14 += (min((min(((min(var_4, var_7))), (3464225256319188486 % -36))), 1637831330));
                arr_4 [i_0] = (min((((!(arr_3 [i_0] [i_1 - 1])))), (min((arr_3 [i_0] [i_1 - 1]), (arr_3 [i_0] [i_1 - 1])))));
                var_15 ^= var_4;
                var_16 *= var_9;
            }
        }
    }
    var_17 += (min(var_9, ((14931 ? -36 : ((min(1, var_3)))))));
    #pragma endscop
}
