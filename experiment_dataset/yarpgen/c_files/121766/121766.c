/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 ? var_14 : (~var_0)));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_17 += ((((min((arr_3 [i_0 - 1]), (arr_3 [i_0 + 1])))) ? (arr_3 [i_0 - 1]) : ((0 ? 6545 : (arr_3 [i_0 - 1])))));
        arr_4 [i_0] = ((((min(((114 ? 92 : (arr_0 [i_0 - 1] [5]))), (arr_0 [i_0 - 2] [i_0])))) / (140737488355326 | 12637686274290028070)));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                var_18 = (min((min((((arr_2 [i_1]) ? 12637686274290028070 : -6545)), (((~(arr_8 [i_1])))))), ((((((arr_8 [i_1]) | (arr_0 [1] [i_1]))) | (32767 & 1))))));
                arr_10 [i_1] = (((((((-6545 * 0) < (((arr_6 [i_1] [i_2]) ? (arr_7 [i_1]) : 14533780641109995276)))))) - (arr_6 [13] [14])));
            }
        }
    }
    #pragma endscop
}
