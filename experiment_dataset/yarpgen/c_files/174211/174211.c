/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(0, (((var_2 ? var_1 : var_10)))))) ? ((-((var_10 ? 0 : var_0)))) : (max((3146632443311698840 || var_3), (max(-200989230, -76))))));
    var_14 = (((((var_2 << (var_0 + 65)))) - ((var_8 ? -var_9 : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = ((39838 ? (min((var_11 * var_10), var_11)) : var_7));
                var_16 = (min(var_16, (((~(6481592313588343668 / var_8))))));
                arr_6 [i_1 - 4] [i_0] = 1;
            }
        }
    }
    #pragma endscop
}
