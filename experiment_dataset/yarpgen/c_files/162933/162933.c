/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] = (min((((arr_0 [i_1 - 1] [i_1 - 1]) ? (arr_0 [i_1 + 1] [i_1 + 1]) : (arr_0 [i_1 + 1] [i_1 + 1]))), ((((arr_0 [i_1 + 1] [i_1 - 1]) <= (arr_0 [i_1 - 1] [i_1 - 1]))))));
                arr_7 [i_1] = ((73 ? (min((arr_1 [i_1]), ((min(4294967295, 17))))) : (-0 + var_4)));
                arr_8 [i_1] [i_1] [6] = (max(((-88 ? -1 : 18446744073709551607)), 127));
            }
        }
    }
    var_13 = var_8;
    #pragma endscop
}
