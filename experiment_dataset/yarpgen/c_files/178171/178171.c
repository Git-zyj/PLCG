/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = max((~var_4), (((var_0 << (var_1 - 56)))));
    var_19 = ((var_8 ? var_3 : (!var_13)));
    var_20 &= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = ((arr_4 [20] [i_0] [3]) * ((((((((arr_1 [2]) | (arr_2 [i_1] [i_0])))) || (arr_0 [i_0] [i_1]))))));
                arr_6 [i_0] = (((((((((arr_3 [i_1]) ? (arr_4 [18] [i_1] [i_0]) : (arr_3 [i_0])))) ? (((arr_2 [i_0] [6]) ? (arr_4 [i_0] [i_0] [i_1]) : (arr_5 [i_0] [i_1]))) : ((((arr_1 [16]) ? (arr_3 [0]) : (arr_1 [i_1]))))))) ? ((((((arr_3 [i_0]) ? (arr_1 [i_0]) : (arr_4 [i_1] [i_0] [15])))))) : (((arr_0 [1] [i_1]) & (arr_4 [9] [i_1] [i_1])))));
                arr_7 [17] |= ((((((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [8]) : (arr_2 [i_0] [i_1])))) | ((~(min((arr_0 [i_1] [i_0]), (arr_5 [i_0] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
