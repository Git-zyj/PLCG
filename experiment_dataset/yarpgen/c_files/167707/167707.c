/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= 0;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [8] [8] |= ((+(((max((arr_0 [i_0]), (arr_1 [i_0 + 1]))) | (((arr_1 [i_0 + 1]) >> (1887579124 - 1887579108)))))));
        var_19 = (((arr_0 [i_0 - 1]) != (-2147483647 - 1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (i_0 % 2 == 0) ? (((((((-5514662255176470841 + 9223372036854775807) >> (((arr_10 [i_0] [i_0 + 1]) - 15130))))) ? (((arr_10 [i_0] [i_0 + 1]) & (arr_9 [i_0 + 2]))) : (arr_5 [i_0 + 1])))) : (((((((-5514662255176470841 + 9223372036854775807) >> (((((arr_10 [i_0] [i_0 + 1]) - 15130)) + 27069))))) ? (((arr_10 [i_0] [i_0 + 1]) & (arr_9 [i_0 + 2]))) : (arr_5 [i_0 + 1]))));
                                arr_15 [i_2] [i_4] |= (max((max((((-5514662255176470839 + 9223372036854775807) << (((((-32767 - 1) + 32777)) - 8)))), (arr_9 [i_0 + 2]))), (arr_12 [i_4])));
                                var_21 = 1377080478;
                            }
                        }
                    }
                    var_22 *= var_12;
                    var_23 ^= (arr_10 [i_1] [i_0 + 2]);
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_24 ^= ((((((-4801 | (arr_18 [14] [i_5 + 1]))) ? (arr_5 [i_5]) : 4827))));
        var_25 = (!-8421190939957470740);
        arr_19 [i_5 - 1] [i_5] = ((((((9062 && 1007058667) ? (arr_10 [i_5] [i_5]) : var_4))) >= (arr_9 [i_5 - 1])));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_26 = (((arr_2 [i_6]) | var_0));
        var_27 += (arr_20 [i_6 - 1] [i_6 - 2]);
    }
    #pragma endscop
}
