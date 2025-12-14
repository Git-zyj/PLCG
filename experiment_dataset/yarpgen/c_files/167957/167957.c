/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_14 = (min(var_14, ((-1 ? (arr_3 [15] [i_2]) : (var_1 % 180)))));
                            var_15 = (max(var_15, (arr_12 [3] [i_1] [i_1] [i_3] [8] [1])));
                        }
                        var_16 *= (((var_8 & 3048439437) ? -3328493991 : (arr_3 [i_1] [i_2])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_17 = (((((!(arr_17 [i_2] [i_5])))) | -var_3));
                        var_18 = (max(var_18, (arr_3 [i_1] [i_2])));
                        var_19 = (((-127 - 1) ? (arr_2 [i_1]) : ((((arr_11 [i_2]) || 36028797018963967)))));
                    }
                    arr_18 [i_0] [i_1] [i_2] = (((((((min(var_2, (arr_4 [1])))) ? (((-(arr_6 [i_2])))) : ((1 ? -36028797018963968 : 3447132331))))) ? 4294967295 : ((((((1 ? (arr_13 [i_0] [i_1] [i_1] [i_1] [i_2] [i_2]) : 1246527858)) >= (arr_9 [i_0] [14] [14] [i_2])))))));
                    arr_19 [i_0] [i_1] [i_1] [1] &= (((arr_9 [i_0] [i_0] [i_2] [i_0]) ^ 82430869386007663));
                }
            }
        }
    }
    var_20 = (var_12 ? -3305687376 : var_7);
    #pragma endscop
}
