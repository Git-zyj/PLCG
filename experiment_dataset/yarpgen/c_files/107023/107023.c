/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (min((min((arr_0 [i_0 - 2]), var_2)), (arr_0 [i_0])));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_9 [0] [i_0] [i_1] [i_0] = 31;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_16 = (max(var_16, (((~(min((arr_6 [i_0] [i_1]), (arr_6 [i_2] [i_1]))))))));
                        var_17 *= ((-(240 && 2147483647)));
                        arr_12 [i_0] [10] [i_2] [10] = ((((var_13 ? (arr_7 [i_0 - 1] [i_1] [i_0 - 1] [i_3]) : var_8)) < ((min((arr_8 [i_0 - 2] [i_3] [i_1]), var_14)))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_2] [i_4] = (((~23758) ? (min((min(var_6, (arr_4 [i_0]))), ((min(var_8, (arr_5 [i_0] [i_1] [i_2])))))) : (~-7566554410683443105)));
                        arr_16 [i_0] = -934332462;
                        var_18 += (((arr_14 [i_0] [i_1] [i_1]) ? ((min((arr_11 [i_0 - 1]), (arr_11 [i_0 - 2])))) : (arr_3 [i_1] [0])));
                    }
                }
                var_19 -= (min((min((arr_3 [i_0 + 1] [12]), (arr_7 [i_0] [14] [i_0] [i_0 - 3]))), (min((arr_3 [i_0 + 2] [2]), (arr_0 [i_0 + 2])))));
            }
        }
    }
    var_20 = (((min(var_10, var_12))));
    #pragma endscop
}
