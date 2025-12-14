/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = var_7;
                    arr_8 [i_0] [i_1 - 2] [i_0] = 2938892497;
                    var_19 = -5720143007295400667;
                    arr_9 [i_0] [i_0] [17] = 2825285490;
                }
            }
        }
    }
    var_20 = var_7;
    var_21 = (((((var_4 ? ((1 ? -6020759944329488494 : 1064228339)) : (((max(var_7, 1))))))) ? -var_5 : var_10));
    #pragma endscop
}
