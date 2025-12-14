/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 += (max((((arr_1 [0] [i_0]) ? (arr_1 [i_0] [i_0]) : (((min((arr_2 [i_0] [i_0]), 13332)))))), ((min((arr_2 [1] [i_0]), (arr_2 [i_0] [i_0]))))));
        var_12 *= (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = -197;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_2] = (arr_1 [i_0] [i_0]);
                    arr_10 [i_2] [i_0] [i_0] = (((arr_1 [i_1 + 3] [i_1 - 2]) ? ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_1]) : 206))) : (max((min(var_0, (arr_2 [i_0] [i_1 + 3]))), (arr_6 [i_0] [i_1] [i_0])))));
                    var_13 = (max(var_13, (arr_7 [i_1 - 1] [i_1 + 3] [i_1 - 1])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_14 &= (arr_6 [i_0] [i_3] [i_4]);
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [2] = (var_0 >= (!var_0));
                        var_15 = (max(var_15, (((((var_1 ^ (arr_15 [i_3])))) ? (arr_18 [i_0] [i_0] [i_0] [i_0]) : ((((arr_15 [i_0]) >= (arr_18 [i_0] [i_0] [i_0] [i_0]))))))));
                        var_16 = (!196);
                        arr_20 [i_5] [i_4] [i_3] [i_0] = var_7;
                    }
                }
            }
        }
    }
    var_17 = ((((((min(var_10, var_4))) ? var_7 : -180)) + var_3));
    #pragma endscop
}
