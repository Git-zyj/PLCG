/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max((min(0, 15126284992964681658)), (max(8482413634894724311, 9964330438814827305)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = max((max((arr_0 [i_1]), (max((arr_1 [i_0]), (arr_3 [i_0] [i_1]))))), (max((arr_0 [i_1]), (arr_1 [i_0]))));
                var_14 = (min(var_14, (arr_1 [i_0])));
                arr_5 [i_1] [i_1] [i_1] = min((arr_2 [i_1] [i_1]), (arr_3 [i_0] [i_0]));
            }
        }
    }
    #pragma endscop
}
