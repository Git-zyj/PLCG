/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_14 = ((((arr_3 [4]) != (arr_1 [i_0] [i_0]))) ? 35799316 : ((((!(arr_3 [i_1]))))));
                        var_15 ^= (arr_10 [i_2 + 2] [i_2 - 1]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        var_16 ^= (((arr_12 [i_2 + 3] [i_1] [i_2 + 3] [i_4]) ? var_7 : (arr_12 [i_2 + 1] [i_2 + 1] [i_2] [i_4])));
                        arr_13 [15] [i_2 + 2] [i_0] [i_0] = (1240821209 >> (((arr_12 [i_1] [i_1] [i_2 + 1] [i_2 + 1]) - 56987856)));
                    }
                    var_17 ^= (var_3 / ((((min(37, (arr_3 [i_0])))) ? (((var_13 * (arr_9 [17] [9])))) : 1310439628)));
                    arr_14 [i_2] [i_1] [i_0] = (((((arr_10 [i_0] [i_2 + 3]) ? (arr_9 [i_2 + 2] [i_2 + 2]) : (arr_10 [i_0] [i_2 + 1]))) + (((((arr_9 [i_2 + 1] [i_2 + 3]) == (arr_10 [i_0] [i_2 + 2])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                var_18 = (min(var_18, (min(((((-62 ? 78 : (arr_8 [i_5] [i_6] [i_5] [i_5]))))), var_5))));
                arr_20 [i_5] |= 1294657616;
                var_19 = (max(var_19, ((((((~var_0) ^ var_4)) & (((arr_7 [i_5]) ? (arr_2 [15] [15]) : ((~(arr_6 [8] [8]))))))))));
            }
        }
    }
    #pragma endscop
}
