/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((((-4156129130018219195 ? (arr_1 [i_0] [i_0]) : 2591)) <= 45)) ? (((!((max((arr_2 [i_1]), 211)))))) : (arr_0 [i_0] [i_1])))));
                var_18 = (max(var_18, ((((((((-1484417405426144586 + 9223372036854775807) << (4294967295 - 4294967295)))) & var_1))))));
            }
        }
    }
    var_19 = var_10;
    var_20 = (max(var_20, ((min((max(2521676952270182466, (var_3 * 0))), var_6)))));
    #pragma endscop
}
