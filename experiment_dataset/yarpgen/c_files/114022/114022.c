/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = ((((max((arr_2 [i_1]), (((56865 ? 362817078034022019 : 1596859510)))))) ? 2094 : 2120));
                    var_12 = max((arr_2 [i_0]), (arr_3 [i_2] [i_1] [i_0]));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            {
                var_13 = (min((((arr_2 [i_4 - 3]) ? (arr_2 [i_4 - 1]) : (arr_12 [i_4 - 1]))), (arr_8 [i_4] [i_4])));
                var_14 = (min(var_14, ((+(((arr_8 [i_4 - 3] [i_4]) ? (arr_8 [i_4 + 2] [i_4 + 1]) : 754721341))))));

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_15 = (max(var_15, (((((arr_11 [i_3] [i_3] [i_3]) ? ((63443 ? var_0 : (arr_15 [i_3] [i_4] [i_5] [i_5]))) : var_2))))));
                    var_16 = (min((((((max((arr_8 [i_3] [i_3]), 63899))) ? (arr_13 [i_3] [i_3] [i_3]) : -8233749781899675163))), (arr_8 [i_3] [i_4])));
                }
            }
        }
    }
    var_17 ^= -6939508219006915230;
    var_18 &= (max((((var_3 ? var_2 : var_8))), (((var_9 ? ((var_5 ? var_7 : var_0)) : ((min(var_11, var_2))))))));
    #pragma endscop
}
