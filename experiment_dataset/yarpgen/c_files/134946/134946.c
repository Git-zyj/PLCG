/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0 - 1] [i_0] [i_0] = arr_4 [i_0] [i_0];
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((((((arr_1 [i_0 - 2] [i_0 - 2]) == 18446744073709551607))) == ((((arr_3 [i_0 + 1]) >= (arr_3 [i_0 - 2]))))));
                }
            }
        }
        arr_10 [i_0] = (((((arr_1 [i_0 + 1] [i_0 + 1]) ? (arr_1 [i_0 - 3] [i_0 - 3]) : (arr_2 [i_0 + 1] [i_0 - 1] [i_0 - 2]))) - (((((min((arr_3 [i_0]), (arr_2 [i_0] [i_0] [i_0])))) == (((!(arr_0 [i_0] [i_0])))))))));
        var_16 = (((((arr_6 [i_0] [i_0] [i_0]) / 1232053879)) % (arr_1 [i_0] [i_0 - 1])));
        arr_11 [i_0] = ((+(max((((arr_2 [i_0] [i_0] [i_0]) ? (arr_4 [i_0 - 3] [i_0 - 3]) : (arr_1 [8] [i_0]))), 24435))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 14;i_5 += 1)
            {
                {
                    arr_19 [i_5 - 4] = (((arr_16 [i_5 - 3]) && (arr_16 [i_5 + 1])));
                    arr_20 [i_4] [i_4] [i_5] = ((~(arr_17 [i_3] [i_3] [i_3] [i_3])));
                    var_17 = ((arr_12 [i_5 - 1]) ? (arr_15 [i_5 + 1] [i_5 - 2]) : (arr_17 [i_5 - 1] [i_4] [i_4] [i_5]));
                    arr_21 [i_3] [i_4] = (!1232053860);
                    var_18 = (min(var_18, (((-(arr_18 [2] [i_5 - 2] [2] [i_5]))))));
                }
            }
        }
        var_19 ^= (arr_14 [i_3] [i_3]);
        var_20 = (arr_14 [i_3] [i_3]);
        var_21 = ((!(arr_17 [i_3] [i_3] [i_3] [i_3])));
    }
    var_22 = (max(var_8, ((-var_8 ? (var_11 * 12883819807514590093) : var_10))));
    #pragma endscop
}
