/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = (min(var_13, ((min((min((arr_0 [i_0 - 1] [i_0 - 1]), ((-2371320717571954583 ? 1708132491576559851 : -49)))), ((((-210955472 >= -1154447297) < (arr_0 [i_0] [i_0])))))))));
        var_14 = (((arr_1 [i_0 - 1] [i_0 - 1]) ? (((((arr_1 [i_0 - 1] [i_0 - 1]) > (arr_1 [i_0 - 1] [i_0 - 1]))))) : ((22 ? -2958854228232989719 : 1708132491576559851))));
    }

    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_15 = (min(var_15, ((((((-((((arr_11 [i_3] [i_1 - 1] [i_1 - 1]) > (arr_11 [i_1] [i_1] [i_1]))))))) ? (((+(((arr_10 [1] [i_2] [i_2]) ? (arr_7 [i_1]) : (arr_5 [1] [i_1])))))) : (min((((arr_3 [i_1 + 3] [15]) ? (arr_11 [i_1] [i_1] [i_1 + 2]) : (arr_3 [i_4] [i_4]))), (arr_11 [i_3] [i_3] [i_1 + 3]))))))));
                        var_16 = (((0 > -210955462) || (arr_4 [i_1] [i_2])));
                    }
                }
            }
        }
        var_17 = (((((arr_13 [i_1] [i_1] [i_1 + 2] [i_1] [13] [9]) & (((arr_10 [i_1] [i_1 - 1] [i_1]) & (arr_3 [i_1] [i_1]))))) | ((((arr_12 [i_1 + 1]) ? (arr_12 [i_1 + 3]) : (arr_12 [i_1 + 3]))))));
        var_18 = (max((arr_8 [i_1] [3] [i_1] [i_1]), (arr_12 [i_1 + 2])));
    }
    #pragma endscop
}
