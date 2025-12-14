/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((!(((var_1 ? 16392088236788687788 : var_1))))) && ((min((min(var_11, var_15)), (!var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (~43)));
                    arr_8 [i_1] [16] [i_2] [i_2] = (arr_2 [i_0]);
                    var_21 -= var_9;
                    arr_9 [i_1] = arr_4 [i_2] [i_0];
                    var_22 = (min(((~(arr_4 [i_0] [i_1 - 2]))), (((!((min((arr_7 [i_1] [i_1] [i_1] [16]), var_2))))))));
                }
            }
        }
    }
    #pragma endscop
}
