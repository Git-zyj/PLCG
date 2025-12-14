/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((164 ? 305145837 : 5528452800758534307));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (arr_0 [i_0]);
                arr_5 [i_0] [i_1] = var_7;
                var_20 = ((~(max((16994 % var_0), (16994 && var_2)))));
            }
        }
    }
    var_21 = ((((16383 ? ((min(-16381, -16383))) : var_1)) - var_1));
    #pragma endscop
}
