/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 += (!6558546058172004315);
                    var_17 |= ((8 % ((17489028341603212661 ? 3506934320286285949 : -32747))));
                    arr_8 [i_0] [i_0] [i_2] = (arr_5 [i_0] [i_1]);
                }
            }
        }
    }
    var_18 = ((-((((-1101180054680476487 == (-32767 - 1))) ? var_4 : (-20764 / -6324505374711816567)))));
    var_19 = min(var_14, (min(17489028341603212659, -9)));
    #pragma endscop
}
