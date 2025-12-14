/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_13 & var_7) != ((-(max(var_2, var_13))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((((((((arr_3 [i_1 + 3] [i_1 + 2]) > (max(var_11, (arr_7 [i_0] [i_0] [i_0 - 1]))))))) != 39)))));
                    var_16 = (((((max(15, -1556334078)))) ? (((((-1 <= (arr_2 [i_0])))) | (arr_5 [i_0 + 1]))) : (arr_7 [i_0] [i_0 + 1] [i_1 + 2])));
                    var_17 = ((((((min((arr_6 [i_2] [i_1] [i_0]), 0)) >> (!0)))) ? (arr_5 [i_0]) : (min((-16 ^ 955451982), (arr_5 [i_0])))));
                }
            }
        }
    }
    var_18 = var_1;
    #pragma endscop
}
