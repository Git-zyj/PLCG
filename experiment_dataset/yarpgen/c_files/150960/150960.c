/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((((((var_1 + 9223372036854775807) << ((((((1 ? -883855295 : 0)) + 883855321)) - 26))))) || (!22)));
                arr_7 [0] [i_1] [i_0] = var_17;
                arr_8 [i_0] [i_1 - 2] = -451208360722572305;
                var_21 = (max(var_21, (84 < 883855294)));
                arr_9 [i_0] [i_0] [7] = (~((24732 ? -1 : -883855290)));
            }
        }
    }
    var_22 -= (((((~(~var_14)))) || (((((-883855271 ? 9876 : 3982639081127413542)) ^ var_14)))));
    #pragma endscop
}
