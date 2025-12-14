/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((12301013796667505847 ? 12887300684473604192 : 26)), (min(var_3, var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [8] [i_1] = ((((1203538083 - (arr_3 [i_1 + 1]))) != ((((((-(arr_2 [i_0]))) > (arr_1 [i_1 - 2] [i_1 + 2])))))));
                arr_5 [i_1] [i_1] = ((var_0 ? ((var_12 ? (min((arr_2 [i_0]), var_0)) : 0)) : ((var_10 ? ((var_6 ? (arr_2 [i_1]) : var_10)) : (arr_1 [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
