/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 9;i_4 += 1)
                            {
                                var_13 = ((~(max(8791592833954582570, 18446744073709551615))));
                                var_14 = (max(var_14, ((((~var_5) ? (((((arr_7 [6]) >= (arr_7 [1]))))) : (((max(var_8, (arr_12 [5]))) >> (((arr_9 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4]) - 9969)))))))));
                                var_15 = ((!(((((min(9655151239754969041, 12))) ? (-7607974637298479717 ^ 500583187) : (min((arr_1 [i_0] [i_4]), 18446744073709551615)))))));
                                var_16 = var_5;
                            }
                            for (int i_5 = 0; i_5 < 10;i_5 += 1)
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_5] = ((((min((arr_2 [i_0]), ((9655151239754969047 ? (arr_14 [i_0] [i_1] [i_2] [i_3] [i_1]) : -444287484))))) ? (((((18446744073709551615 ? 19888 : var_4)) > ((~(arr_7 [i_0])))))) : (((((-7512 ? var_4 : (arr_15 [9] [i_1 - 3] [i_1] [9] [1]))) <= ((-19889 ? var_9 : 1)))))));
                                var_17 &= (~var_10);
                                var_18 = ((max((arr_3 [i_0] [i_2]), (arr_4 [i_0] [i_1] [i_5]))));
                            }
                            var_19 = ((((!(arr_11 [i_0] [i_0] [i_1] [i_2] [i_2]))) ? ((((min(-19888, var_6))))) : (((((8791592833954582575 ? 8791592833954582546 : 0))) ? (((((arr_5 [i_0] [i_1] [i_2]) != 9)))) : 8791592833954582535))));
                            var_20 = (arr_13 [i_0]);
                        }
                    }
                }
                arr_17 [i_0] [i_0] = ((!(arr_4 [i_0] [i_1 + 3] [i_0])));
                arr_18 [9] [i_0] [i_1] = (((min((arr_11 [i_1 + 1] [i_1] [i_1 + 3] [i_1 + 3] [i_0]), (97 % var_1))) > ((min((((arr_1 [i_0] [i_0]) ? (arr_2 [i_1]) : var_10)), (((0 ? (arr_14 [i_0] [i_0] [i_1 - 2] [i_1] [i_0]) : (arr_13 [i_1])))))))));
                var_21 = (max((((((((arr_6 [i_0]) ? (arr_11 [i_0] [i_0] [i_1] [i_1 + 2] [i_1]) : 106))) ? ((min(-6, (arr_11 [i_0] [i_1] [i_1 - 3] [i_0] [i_1])))) : ((min(var_5, 65535)))))), (((((var_10 ? (arr_9 [i_0] [i_0] [i_0] [i_1] [8]) : (arr_6 [i_1])))) | (((arr_5 [i_0] [i_0] [i_0]) << (((arr_10 [i_0] [i_0] [i_0] [i_0]) - 7162))))))));
            }
        }
    }
    #pragma endscop
}
