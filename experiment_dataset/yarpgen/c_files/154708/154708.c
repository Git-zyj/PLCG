/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (((((30888 >> (3567931034 - 3567931003)))) < ((-157752149115970740 % ((34643 ? 15 : 3247575327561969579))))));
                var_18 += (((107 | 1187868678021178654) << (((max(7742528860536030100, 4126941643)) - 7742528860536030060))));
            }
        }
    }
    var_19 = ((var_12 & (((-((-108 ? 29850 : 9)))))));
    #pragma endscop
}
