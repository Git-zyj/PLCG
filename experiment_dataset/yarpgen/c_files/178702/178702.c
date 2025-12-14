/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = ((((((2672 ? var_0 : 255))) % (1397335205 + 0))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (max((min(72, 0)), 0));
                    var_20 = ((-1345242608 ? 60002 : 5534));
                    arr_7 [i_0] [i_0] [i_2] [11] = ((((max((arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_0]), -13301))) ? (((((max((arr_0 [i_1]), 5534)))) * ((-13301 ? 0 : 925751879)))) : (((((arr_1 [i_2 + 1]) <= (((0 ? -1345242608 : 60002)))))))));
                }
            }
        }
        var_21 = -1132103470;
    }
    var_22 = 171500243;
    #pragma endscop
}
