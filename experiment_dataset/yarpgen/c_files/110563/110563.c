/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [16] [i_0] = 32905;
                var_18 = ((((((-95 - var_4) % -19932))) + (((12255873674956133598 * 0) ? 0 : (26254 + 50331648)))));
                var_19 = 32755;
            }
        }
    }
    var_20 = 65535;
    #pragma endscop
}
