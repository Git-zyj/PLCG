/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((1004863235 << (-1004863254 + 1004863254)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_1] = var_9;
                arr_8 [i_1] [i_1] = var_7;
            }
        }
    }
    var_11 -= (max((((-1004863241 > (min(var_0, -1004863236))))), var_0));
    #pragma endscop
}
