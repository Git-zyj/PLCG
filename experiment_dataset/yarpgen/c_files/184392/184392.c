/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((max(-107, 3912630478)) >> (-107 + 132)))) ? (((((-45 ? var_3 : 382336831))) ? 1 : 4294967295)) : 1));
    var_13 = (max(var_10, (((var_8 > (-8 - var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((7451205276482836933 > (max(((var_8 ? var_6 : (arr_1 [i_2]))), (~1)))))));
                    var_15 = ((((arr_0 [i_2] [i_0]) - (!8))));
                    var_16 -= ((!((((1 ? var_2 : 1371192028))))));
                    var_17 = (max(var_6, (!0)));
                }
            }
        }
    }
    #pragma endscop
}
