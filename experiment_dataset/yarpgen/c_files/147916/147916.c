/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_8 [0] [i_0] = arr_4 [5] [i_1] [i_0];
                var_20 = (min((max((min(var_19, 229)), 23)), (~-1)));
                arr_9 [i_0] [i_1] [7] = (((arr_0 [i_0 - 1]) ? (((arr_1 [i_0 + 1]) << (((arr_1 [i_0 - 1]) - 36)))) : (((!53104) ? (((arr_1 [i_0]) << (((arr_5 [i_0] [4]) - 24010)))) : (arr_6 [i_0] [i_0])))));
                var_21 = ((((!(~50))) ? (!82) : -1783465407));
            }
        }
    }
    var_22 = (min(var_22, var_10));
    #pragma endscop
}
