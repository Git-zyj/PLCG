/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(min(var_10, 2047180787))));
    var_21 = (201307458 ? 5508250651476414661 : 201307465);
    var_22 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = 201307465;
                var_23 = ((-(((28943 + (arr_3 [i_1]))))));
                var_24 = (((!-201307488) ? (arr_3 [i_1]) : ((((((arr_4 [i_1]) ? var_9 : var_15))) ? ((((arr_0 [i_0] [6]) || var_14))) : (((!(arr_3 [i_1 + 1]))))))));
                arr_6 [i_1] = ((~((~(arr_0 [i_1 + 4] [i_1])))));
            }
        }
    }
    #pragma endscop
}
