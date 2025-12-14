/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_17 -= (arr_1 [i_0 + 1] [i_1 - 1]);
                arr_5 [3] [i_1 + 3] [i_1 + 2] = (((~var_10) - (min(((((arr_1 [i_0] [i_0]) ? (arr_4 [i_0]) : var_11))), (max(var_5, var_5))))));
                var_18 = (min(var_18, ((((((-(arr_4 [i_0 + 2])))) && (arr_2 [i_0 - 2]))))));
                arr_6 [i_0] [i_0] = ((~(((!((max((arr_4 [i_1]), (arr_1 [10] [i_0])))))))));
                var_19 = (max(var_19, (((!((max(((255 ? 18124326311918351667 : 255)), var_13))))))));
            }
        }
    }
    var_20 += ((((-var_16 ? -var_3 : 1820729833250925815)) >= (((1142715027 ^ ((-4027 ? 255 : var_14)))))));
    var_21 = (min(var_21, (((var_16 ? (var_4 <= var_5) : ((-85972291 / (var_10 != var_4))))))));
    #pragma endscop
}
