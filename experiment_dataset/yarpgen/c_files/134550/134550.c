/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((min(((~(min(18446744073709551609, 56160)))), (!var_12))))));
    var_15 = ((var_4 ? var_11 : ((min(var_7, (var_10 || 0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_16 -= ((((!var_5) > (~var_6))));
                                var_17 *= (!((min(var_1, var_7))));
                                var_18 = (((((((arr_5 [i_0] [i_0]) ^ var_1)))) ? var_5 : -var_9));
                            }
                        }
                    }
                    var_19 ^= ((((((arr_3 [10] [10]) | (arr_3 [10] [1])))) ? (((!(arr_3 [i_1] [14])))) : (~var_9)));
                    var_20 = var_8;
                }
                arr_14 [i_0] [i_0] [23] = (min((arr_9 [i_0] [i_0] [i_0] [i_1]), (arr_10 [i_0] [i_0] [i_0])));
                var_21 ^= ((((((!(arr_5 [20] [i_1]))))) >= ((((-18712 ? var_13 : 10217)) / (arr_2 [16] [i_1])))));
                arr_15 [i_0] [i_0] [i_0] = (((((((var_2 ? (arr_2 [i_0] [i_1]) : (arr_11 [i_0] [15] [i_0])))) ? (((min(var_9, (arr_10 [i_0] [i_0] [i_0]))))) : (((arr_9 [i_0] [i_1] [i_1] [i_1]) ? (arr_11 [i_0] [i_0] [i_0]) : var_10)))) != -1));
            }
        }
    }
    #pragma endscop
}
