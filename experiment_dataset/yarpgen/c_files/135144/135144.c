/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_18 -= ((~(arr_0 [17] [i_1 + 2])));
                arr_5 [i_1] [6] [11] = ((((((18446462598732840960 ? 1269684458 : (arr_4 [i_0] [i_1] [16])))) ? (arr_3 [i_0] [i_1] [i_0]) : (max((arr_3 [i_0] [i_1] [i_1]), (arr_0 [i_0] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
