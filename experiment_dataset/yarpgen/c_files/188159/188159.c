/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 -= ((arr_2 [i_0]) ? ((((min(1, 22596))))) : ((((1401 ? var_0 : 64106)) + (((4294967295 ? (arr_1 [i_1] [i_0]) : 64135))))));
                var_12 = ((((((!((min((arr_3 [i_0] [i_0] [i_0]), (arr_1 [i_0] [i_0])))))))) >= (4095 + 538188853)));
            }
        }
    }
    var_13 = (min(var_13, (((var_9 + (min(((3498512447 ? var_3 : 1516418967)), var_8)))))));
    #pragma endscop
}
