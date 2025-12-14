/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((1 != var_9) ? (max(var_5, var_6)) : var_2))) ? 9132 : (((((var_1 ? 1 : -887420989))) ? 16648181181183332235 : ((min(-1, 1440270452)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 ^= (((((((2547893648 == (arr_6 [i_0] [i_0] [i_2] [i_2]))) ? var_11 : ((max(var_8, 1)))))) ? ((var_0 ? (arr_5 [i_2]) : (arr_2 [i_1]))) : (((((var_3 ? (arr_3 [i_1] [8]) : var_0)) | var_8)))));
                    arr_8 [i_1] [4] [4] = ((-(((var_12 != (arr_1 [i_0]))))));
                    var_15 = (max(var_15, -139));
                    arr_9 [i_0] |= (((arr_1 [i_0]) ? ((((((arr_3 [i_1] [1]) ^ var_4))) ? (((arr_6 [i_0] [10] [i_0] [i_2]) ? (arr_4 [i_0] [i_1] [i_1]) : var_9)) : (arr_0 [i_0] [i_1]))) : ((~(arr_1 [i_1])))));
                    arr_10 [i_1] [i_1] [i_1] = 1440270453;
                }
            }
        }
    }
    #pragma endscop
}
