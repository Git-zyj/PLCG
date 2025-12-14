/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = var_3;
                arr_4 [i_0] = ((((9223372036854775807 < (arr_1 [i_0]))) ? ((33554432 ? ((19 ? 9223372036854775807 : 9223372036854775804)) : (~-10969))) : ((min((min(var_5, 268751311)), 50)))));
                var_21 = 1370101106239414872;
                var_22 = (max((127 - 18446744073709551596), ((((min((arr_0 [i_0] [i_1]), -2106570911))) ? ((-(arr_2 [i_0]))) : 9065))));
            }
        }
    }
    var_23 = var_0;
    var_24 = var_6;
    var_25 = ((((((~var_17) ? (((max(var_13, var_17)))) : (max(var_7, 33554432))))) ? (var_7 * 9) : (((((4261412855 ? var_15 : -1836189890)) < ((var_4 ? var_1 : 13)))))));
    #pragma endscop
}
