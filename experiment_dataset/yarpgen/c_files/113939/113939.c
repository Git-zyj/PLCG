/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (max(((-(-107 == var_7))), ((var_0 >> (var_6 + 8264818691018484658)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 + 1] = (arr_2 [i_0]);
                arr_8 [i_0] = (((max((arr_0 [i_1 - 4]), 3415410559)) != (((min((arr_0 [i_1 - 2]), (arr_0 [i_1 - 1])))))));
                var_14 &= (((arr_6 [8] [8]) + (((arr_3 [i_1 + 1] [i_1 + 1]) ? (arr_6 [1] [1]) : (arr_3 [i_1 + 1] [i_1 - 3])))));
            }
        }
    }
    #pragma endscop
}
