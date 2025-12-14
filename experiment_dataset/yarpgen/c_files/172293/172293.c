/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_0, ((-20 ? 6187439615995122871 : 23579))));
    var_16 = (max(182, -6187439615995122872));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2] [i_2] = -25;
                    var_17 = ((-3639 || (min((!32), (5251089766399674365 && 58562)))));
                    arr_7 [i_0] [i_1] [i_2] = ((236 ? 19 : 251));
                }
            }
        }
    }
    #pragma endscop
}
