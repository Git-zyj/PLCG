/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= 1;
    var_12 = (max(var_12, var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (max((((~(-47 ^ 1)))), var_2));
                    var_14 = (((((((((arr_5 [i_0]) ? var_1 : (arr_5 [i_0])))) ? ((min((arr_3 [i_0]), var_7))) : (((arr_2 [i_0] [i_0]) ? 6137835861253863193 : 1))))) ? ((var_1 ? (arr_2 [i_0] [11]) : 63321)) : (min((arr_2 [13] [i_1]), (arr_2 [i_0] [i_0])))));
                }
            }
        }
    }
    var_15 = -1283453333;
    #pragma endscop
}
