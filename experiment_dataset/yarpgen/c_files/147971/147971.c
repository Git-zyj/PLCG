/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_7, (((var_14 + 2152643702) ? var_2 : (min(var_2, var_12))))));
    var_16 -= ((((((((var_7 << (var_4 + 26064)))) ? var_5 : var_1))) <= ((((-5692224229679319007 ? var_12 : var_14)) / -5692224229679319007))));
    var_17 = ((var_4 ? ((var_7 ? var_3 : ((var_4 ? var_3 : var_0)))) : ((-var_4 ? (((1705502188 ? 197 : 255))) : (826384304 / var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_18 ^= (+(min((arr_6 [8] [2] [i_3]), (((arr_8 [i_0] [i_2 + 2] [i_0] [i_3] [i_1]) - var_4)))));
                        arr_9 [i_1] [i_1] [i_2 + 4] [3] = ((((min((min(18446744073709551595, 408517168)), (min((arr_0 [i_0]), -955109112))))) ? (!var_12) : (((1032714394 > ((20 & (arr_5 [i_1]))))))));
                        var_19 = (min(var_19, ((max(545400175, 15462920513087911652)))));
                    }
                    arr_10 [i_0] [i_1] [i_0] = ((((min(0, (arr_7 [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_1])))) ? (((arr_7 [i_2 + 1] [i_2 + 4] [i_2 + 4] [i_1]) ? (arr_6 [i_1] [i_1] [i_1]) : (arr_7 [i_2 + 3] [i_2 + 1] [i_2] [i_1]))) : (arr_7 [i_2 + 4] [i_2 + 3] [i_2 + 2] [i_1])));
                    arr_11 [i_1] = ((min(1756571089, 18446744073709551581)));
                }
            }
        }
    }
    var_20 = (max(var_20, ((max((min(var_0, 149218048)), 0)))));
    #pragma endscop
}
