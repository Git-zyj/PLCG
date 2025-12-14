/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (((((-((4633816935193905411 ? -605408688467243065 : 57))))) ? ((var_3 ? -7231008438127057616 : 255)) : (arr_4 [i_2])));
                    var_17 = (min(var_17, var_10));
                }
            }
        }
    }
    var_18 = ((~(~4633816935193905411)));
    var_19 = var_16;
    var_20 = ((65535 ? (((~(-32767 - 1)))) : (((max(var_5, -32748)) & 243))));
    #pragma endscop
}
