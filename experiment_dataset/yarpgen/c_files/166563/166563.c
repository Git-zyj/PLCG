/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_7 ? var_9 : 1957033098)) & (~var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = 10510078871329690940;
                    arr_10 [i_0] = (~((69 ? 126 : ((720213268 ? var_10 : var_0)))));
                    arr_11 [i_2] [i_0] [i_0] [i_0] = ((-27 ? ((var_15 ? var_11 : var_3)) : (~173)));
                }
            }
        }
    }
    var_21 = (((max(-720213268, ((-16703 ? 491520 : 65)))) & (((~((1306266758521634223 ? 59 : var_6)))))));
    #pragma endscop
}
