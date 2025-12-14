/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((((((((arr_4 [8] [i_1]) ? (arr_3 [i_0] [i_0]) : (arr_4 [i_1] [3])))) ? (((1 & (arr_1 [i_1])))) : ((25116 ? 2941839707 : 2)))) | ((7 ? (arr_2 [i_0]) : (arr_0 [i_1 + 1]))))))));
                var_18 = (((((0 ? ((1019217206 ? (arr_1 [10]) : (arr_0 [i_1 - 1]))) : ((-(arr_1 [i_0])))))) ? (((-(((arr_4 [i_1 + 1] [1]) ? 1353127604 : -1))))) : (((((30337 ? -25 : (arr_4 [i_0] [i_1])))) ? (arr_0 [i_0]) : 6920780895474551490))));
                arr_5 [8] = 89;
                arr_6 [19] [i_1] = (arr_3 [i_0] [i_0]);
            }
        }
    }
    var_19 = -15680;
    var_20 = var_14;
    var_21 = ((12195 ? 32760 : (var_8 <= var_6)));
    #pragma endscop
}
