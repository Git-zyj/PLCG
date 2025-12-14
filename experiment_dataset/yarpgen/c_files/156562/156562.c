/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((!(7431899141091060127 != var_8))));
    var_15 = (-3163000184525749975 || 4948902054282400361);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (!3053482933873990513);
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((((((58 ? 140 : 1738900881)))) >> var_7));
                }
            }
        }
    }
    #pragma endscop
}
