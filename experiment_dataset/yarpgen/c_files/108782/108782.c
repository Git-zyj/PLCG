/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0 + 3] [i_0] = ((+((min(((((arr_2 [i_0] [5]) <= 11))), -40)))));
                var_13 = ((57147 ? (((-(arr_5 [i_1 + 1] [i_1 + 1])))) : ((-(((-4433844648729461013 + 9223372036854775807) << (var_5 - 26774)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, 64));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_15 = (min(var_15, ((((arr_9 [i_0] [i_4]) ? (arr_0 [i_2]) : -31)))));
                                var_16 = (((!134217727) - (arr_11 [i_2] [i_3 - 4] [i_1])));
                                var_17 += (((arr_13 [i_3] [6] [i_0 + 3] [i_0 + 3] [i_0 + 3]) ? (arr_13 [i_4] [i_4] [i_4] [i_3 - 4] [i_0 + 3]) : (arr_13 [3] [4] [8] [i_0 + 2] [i_0 + 3])));
                            }
                            var_18 ^= ((~(!-11)));
                        }
                    }
                }
                arr_15 [i_0] &= (arr_9 [i_0 + 3] [i_1]);
            }
        }
    }
    var_19 = min(-121, 0);
    #pragma endscop
}
