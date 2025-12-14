/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_20 = ((((((arr_1 [i_0]) + 11882))) ? (((((arr_5 [i_1] [1] [i_1] [i_0]) >= ((18446744073709551606 | (arr_0 [i_0]))))))) : (arr_5 [i_0] [i_1] [i_1] [11])));
                            arr_10 [7] [i_0] [i_0] [i_0] = (((max((arr_6 [i_3] [8] [7] [13]), (((arr_0 [i_0]) * 10301169686554038115)))) ^ ((((((arr_3 [i_0] [i_3]) ? 32676 : 89)) + ((min((arr_3 [i_0] [i_0]), (arr_6 [2] [1] [6] [i_3])))))))));
                        }
                    }
                }
                var_21 = (((arr_7 [i_0 + 4] [i_0] [i_0]) ? 34634 : var_16));
                var_22 = (min(var_22, (((max((arr_6 [13] [i_1] [i_0 - 2] [i_1]), (((arr_6 [i_0] [i_0] [i_0] [9]) - var_16)))) != var_3))));
                var_23 = (((arr_7 [4] [4] [i_0]) ? var_11 : (arr_2 [i_0])));
            }
        }
    }
    var_24 = var_4;
    #pragma endscop
}
