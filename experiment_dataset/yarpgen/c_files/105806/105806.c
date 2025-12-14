/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = ((-(((var_2 ? var_4 : (arr_2 [i_0]))))));
                var_12 = (min(var_12, (((((((arr_1 [i_1] [i_0 + 2]) ? (arr_2 [i_0]) : (arr_2 [11])))) ? ((var_6 / (arr_0 [i_0 - 3] [i_1]))) : (arr_2 [i_0 + 2]))))));
                arr_5 [i_0] [i_1] [i_1] = (((((max(var_1, (arr_0 [i_0] [i_1]))))) * ((var_8 * ((7012735234058922464 / (arr_1 [i_0] [i_0])))))));
            }
        }
    }
    var_13 = ((9753472264734120840 & ((var_3 ? var_5 : ((2503222646 ? 7372991448097368230 : 1))))));
    var_14 = (max((((26893 == (8693271808975430775 + 63783)))), ((max(8693271808975430771, 1)))));
    #pragma endscop
}
