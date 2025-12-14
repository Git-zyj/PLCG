/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (((((((((arr_7 [i_0] [11]) ? 17883736226960007203 : 36385))) ? (arr_5 [i_1] [i_1] [i_1]) : 1573544611621477747))) ? var_10 : (((((~(arr_2 [i_0]))))))));
                    arr_8 [5] [i_1] = var_2;
                }
            }
        }
    }
    var_14 = var_9;
    #pragma endscop
}
