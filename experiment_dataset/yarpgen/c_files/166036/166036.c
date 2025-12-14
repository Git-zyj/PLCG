/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = ((-(arr_2 [i_0])));
        arr_3 [i_0] = (((((+(((arr_0 [i_0] [i_0]) - var_8))))) ? (min((arr_2 [i_0]), (arr_2 [i_0]))) : ((((((-(arr_2 [7])))) ? (((arr_0 [i_0] [4]) ? 26157 : 26180)) : ((min(65535, (arr_0 [i_0] [i_0])))))))));
    }
    var_13 = (max(var_13, (((var_1 ? var_7 : var_11)))));
    var_14 = var_0;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_15 ^= (((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [1])));
        var_16 = 39383;
        var_17 = arr_4 [i_1] [i_1];
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_18 = (((arr_4 [i_1] [i_2 + 3]) <= 24));
                    var_19 = ((~(arr_9 [i_2 - 1] [i_2 + 3] [i_2 + 2] [i_2])));
                    var_20 &= 3656821595131660726;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_21 = ((((max(((((arr_12 [i_4]) ? (arr_12 [i_4]) : (arr_12 [i_4])))), var_5))) ? (((arr_14 [i_4]) * 3)) : ((((~18) > 64564)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 22;i_6 += 1)
            {
                {
                    var_22 = 42285;
                    var_23 = (((((-(arr_12 [i_6 - 4])))) ? (((6 || (arr_18 [i_4] [i_4] [i_6] [i_6 - 1])))) : (((arr_12 [i_6 - 1]) ? (arr_18 [i_4] [i_5] [i_6] [i_6 - 2]) : (arr_18 [i_4] [i_5] [i_6] [i_6 - 3])))));
                    var_24 ^= ((((-(arr_13 [i_6 - 3] [i_6 - 4]))) > (((arr_13 [i_6 - 2] [i_6 + 1]) ? var_0 : (arr_13 [i_6 - 3] [i_6 - 1])))));
                }
            }
        }
        arr_20 [i_4] = max((((((((arr_19 [21] [i_4] [21] [i_4]) >= 39355))) + ((min(13129, (arr_15 [i_4] [4]))))))), (arr_19 [7] [i_4] [i_4] [i_4]));
        var_25 = ((((((((arr_12 [i_4]) ? 1575385654 : 1478900549))) ? ((13129 ? 39369 : (arr_17 [0] [i_4] [0]))) : (~var_1))) << (var_4 - 52899)));
    }
    var_26 = -var_5;
    #pragma endscop
}
