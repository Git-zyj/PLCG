/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_20 ^= (arr_7 [i_0]);
                var_21 *= (((arr_2 [i_0] [i_0]) - (arr_2 [i_0 + 4] [i_0 + 2])));
                var_22 ^= (arr_4 [i_1]);
                arr_9 [i_0] [10] [i_0] [i_0] = (arr_8 [i_1 + 2] [i_1 + 1]);
            }
            var_23 = (min(var_23, (((-(arr_0 [i_0 + 4]))))));
        }
        var_24 = (arr_6 [i_0] [i_0] [i_0] [i_0]);
        var_25 ^= (arr_7 [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_12 [i_3] = ((arr_11 [i_3]) == ((~(arr_10 [i_3] [i_3]))));
        var_26 = arr_10 [i_3] [i_3];
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_27 -= (arr_18 [i_4] [i_4]);
                    var_28 -= (((arr_18 [i_3] [7]) + (arr_16 [11] [i_4])));
                }
            }
        }
        arr_20 [i_3] [i_3] = (arr_13 [i_3] [i_3]);
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_29 = (((max(((min((arr_11 [4]), (arr_15 [i_6] [9] [i_6])))), ((-(arr_16 [i_6] [i_6]))))) / (max((arr_13 [i_6] [i_6]), (arr_13 [i_6] [i_6])))));
        arr_24 [i_6] = (arr_15 [i_6] [i_6] [i_6]);
    }
    var_30 = (min(var_30, (((!((max((~var_19), (var_18 && var_13)))))))));
    #pragma endscop
}
