/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = max(28799, (min((arr_0 [i_0]), (arr_1 [i_0]))));
        arr_3 [i_0] = ((((((arr_1 [i_0]) * (arr_1 [i_0])))) && var_9));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (64509 < -102)));
                    var_13 = 80;
                    var_14 = ((~((1479633478 ? 28799 : 36737))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_12 [1] = (min((min(((-(arr_0 [i_3]))), ((var_4 ? var_2 : var_4)))), var_10));
        arr_13 [5] [5] = (min((((!((min((arr_8 [i_3] [i_3] [i_3] [9]), 79)))))), (((((8220158208319844274 ? var_7 : var_9))) ? (((var_1 ? (arr_1 [i_3]) : 13))) : (arr_10 [i_3])))));
        arr_14 [i_3] = ((((min((arr_11 [i_3] [4]), 76))) ? ((var_0 / (arr_11 [i_3] [i_3]))) : ((((arr_11 [i_3] [i_3]) ? 1504948328 : (arr_11 [i_3] [i_3]))))));
    }
    #pragma endscop
}
