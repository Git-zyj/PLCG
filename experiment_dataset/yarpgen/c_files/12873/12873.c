/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-4412190326784906264 > var_13);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, -40));
                    arr_7 [i_0] [i_1] [i_0] = (arr_2 [i_0] [i_1]);
                }
            }
        }
    }
    var_17 = (((((((-40 ? var_9 : -50))) || var_2)) ? ((11572 ? var_5 : var_5)) : var_13));
    var_18 = ((var_14 ? (min(-2775655474247905326, ((var_12 << (2775655474247905326 - 2775655474247905318))))) : (min((((113 ? -1022209150 : var_3))), (min(var_0, var_0))))));
    #pragma endscop
}
