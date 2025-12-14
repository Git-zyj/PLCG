/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 = 221;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0 - 3] [i_0] [i_0] = (~(((arr_7 [i_0 - 3] [i_0 - 1] [4] [i_0 - 2]) ? 1 : (arr_7 [3] [i_0 - 3] [i_0 - 3] [i_0 - 3]))));
                    var_19 *= (((((((((arr_3 [3]) % (arr_0 [i_0] [7])))) != ((3659390016946602216 - (arr_4 [i_0])))))) * (1 >> 1)));
                }
            }
        }
    }
    var_20 = ((+(((~var_16) >> (var_13 + 16221)))));
    var_21 = var_9;
    #pragma endscop
}
