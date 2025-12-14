/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_12 |= 6;

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = ((201 ? (((((215 ? 54 : var_3))) ? ((min(var_5, var_3))) : -12)) : (((!(arr_0 [i_1 - 2]))))));
                    var_13 = (((arr_0 [i_0]) == (((arr_0 [i_0]) & (arr_2 [i_1 + 3] [i_1 - 2] [i_1 + 2])))));
                }
                arr_7 [i_0] = ((((arr_1 [i_1 + 2]) ? -5129 : (arr_1 [i_1 - 1]))));
                var_14 = (((((arr_2 [i_1 + 3] [i_1] [i_1]) ? (arr_2 [i_1 - 1] [i_1 - 1] [i_1]) : (arr_4 [i_1 - 1] [i_1 - 1] [i_1])))) ? (arr_5 [i_1 + 3] [i_1] [i_0]) : ((((arr_4 [i_1 + 1] [15] [i_1]) ? (arr_5 [i_1 + 3] [15] [i_1]) : (arr_4 [i_1 + 3] [i_1] [i_0])))));
            }
        }
    }
    var_15 = var_8;
    #pragma endscop
}
