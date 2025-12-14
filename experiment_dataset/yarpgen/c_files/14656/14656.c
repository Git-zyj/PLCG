/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= 64;
    var_11 = (max(var_11, ((((!30414) ? var_2 : (((min(var_6, var_0)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_12 ^= var_1;

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_13 = ((!((((arr_6 [i_0] [i_1 - 3]) ? (var_7 / var_9) : (arr_4 [i_3 + 3] [i_3 + 3] [i_1 - 1]))))));
                                var_14 = (((((!(-32767 - 1)))) < -30414));
                                var_15 = (max(var_15, (((((arr_2 [i_1] [9] [2]) % var_2))))));
                            }
                            var_16 = (max((((arr_9 [i_2 - 1]) ? (arr_4 [i_0] [11] [i_0]) : (arr_4 [i_3 + 2] [i_2] [i_1 + 2]))), ((((((1 ? 1 : -30409))) ? (max(-30415, -1818866979)) : var_3)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_17 = 30415;
                            var_18 = ((var_4 ? ((-85 ? 30414 : 9223372036854775807)) : ((((((var_4 ? (arr_8 [i_0] [i_1 - 3] [i_6]) : 30428))) ? ((var_4 ? var_2 : (arr_17 [i_5]))) : ((max(30433, (arr_11 [1] [i_5] [i_5] [i_5] [i_5] [i_5])))))))));
                        }
                    }
                }
                var_19 &= (arr_9 [i_0]);
                var_20 = ((((!(arr_12 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 2]))) ? -var_8 : (((var_6 ? (arr_12 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1] [i_1 - 3] [i_1 + 2]) : var_2)))));
            }
        }
    }
    var_21 = (((--30429) ? (max(var_4, (min(var_7, var_2)))) : var_4));
    #pragma endscop
}
