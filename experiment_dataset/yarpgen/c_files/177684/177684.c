/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((-((-(162 | var_1)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = ((~((max((arr_1 [i_1]), 1)))));
                    var_20 ^= ((((((arr_5 [i_2 + 1] [i_2 + 2] [i_2 - 1]) % (arr_7 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 1])))) ? (((!(arr_4 [i_2])))) : ((-94 ? (var_6 == var_11) : (((-111 + 2147483647) >> (var_9 - 22635)))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_17 [i_0] [i_4] [i_4] [i_4] = ((-((((~var_4) == (((arr_14 [i_0] [i_0] [i_0] [i_4]) | (arr_6 [i_3] [i_3]))))))));
                        arr_18 [i_0] [i_0] [i_0] [i_4] = (((max(94, -111))));
                        arr_19 [i_4] [i_4] [i_4] [i_0] = 4095;
                        arr_20 [i_4] [i_5] [i_4] [i_5] = (arr_7 [i_3] [i_3] [i_4] [i_5]);
                    }
                }
            }
        }
        var_21 = (((arr_6 [i_0] [i_0]) / 21));
        arr_21 [i_0] [i_0] = ((((((((var_13 & (arr_5 [i_0] [i_0] [i_0])))) ? (arr_14 [6] [i_0] [i_0] [6]) : (arr_11 [0] [i_0] [i_0] [i_0])))) ? ((((((max(-29011, (arr_12 [8] [i_0] [i_0] [i_0]))))) ^ (arr_10 [i_0] [i_0] [i_0])))) : ((((((arr_10 [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_11 [8] [8] [i_0] [i_0])))) ? 255 : (((arr_16 [i_0] [i_0] [10]) ? (arr_16 [i_0] [i_0] [16]) : (arr_0 [i_0])))))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        var_22 += (((-(arr_24 [i_6] [i_6]))));
        arr_25 [i_6] = ((-339433349 ? ((((1 && 3942239097) > ((-87 ? -116715835 : var_3))))) : ((((3942239107 | 5293614749892632865) <= (((3718680101 ? -8060284745910240070 : 18996))))))));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] = var_17;
        arr_29 [i_7] = (arr_22 [i_7]);
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                {
                    arr_36 [i_7] [i_7] [i_8] = ((+(min((arr_30 [i_7] [i_8 + 1]), (min((arr_24 [i_7] [i_8]), (arr_35 [i_7] [i_7] [i_8] [i_7])))))));
                    var_23 |= var_18;
                    var_24 -= (min(-1847159469, 6166443617314926618));
                }
            }
        }
        var_25 = (min(((-(!1847159469))), (!3942239107)));
    }
    var_26 = var_6;
    #pragma endscop
}
