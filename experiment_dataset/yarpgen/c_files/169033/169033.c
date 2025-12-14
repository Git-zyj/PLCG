/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(var_10, 65535))) && var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_12 ^= (arr_7 [i_2] [i_2 + 3]);
                        arr_10 [i_0] [i_0] [i_2] [i_3] = 1;
                        var_13 |= -13498;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_14 &= ((((min(-16, (arr_3 [i_0] [2] [i_4])))) ? (min((arr_11 [i_1 + 1] [i_1] [i_1 + 1] [i_2 - 2] [i_4]), 8902679442586258326)) : ((((arr_5 [i_0] [i_1 + 1] [8]) ? (arr_4 [i_1 - 1] [i_1 + 1]) : (arr_5 [i_4] [i_1 + 1] [1]))))));
                        arr_13 [i_0] [i_1 + 1] [i_2] [i_0] = (arr_11 [i_2 + 3] [3] [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_15 = (max((((arr_8 [i_5 - 1] [i_1 + 1] [i_1 - 1] [i_5] [i_5] [i_2 + 2]) ? 3745792609213867672 : (arr_1 [i_1 - 1]))), 1));
                        var_16 = (max(((min((arr_14 [i_0] [i_0] [i_0]), (arr_2 [i_0] [1])))), (((arr_11 [i_2] [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 3]) ? (arr_11 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_2 - 3]) : (arr_11 [i_2 + 1] [i_2] [i_2] [0] [i_2 - 3])))));
                    }

                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        var_17 *= (max((arr_9 [i_6] [i_2] [i_1] [i_0]), (arr_18 [i_6] [i_6])));

                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            arr_22 [i_0] [6] [i_2] = (arr_12 [10] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1 + 1]);
                            var_18 = 1;
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_0] [i_2 + 2] [i_8] = ((53 <= (arr_21 [i_1 - 1] [i_1 + 1] [i_2 + 3] [i_0] [i_2 - 1] [i_2] [i_8])));
                        var_19 = 1;
                        var_20 = (((((arr_9 [i_0] [i_0] [1] [8]) % 1)) ^ ((1 ? 4294967295 : 4294967278))));
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                    {
                        arr_30 [0] [i_1] [0] [11] [i_0] [i_9] = (arr_1 [i_0]);
                        var_21 = -119;
                    }
                    var_22 *= var_10;
                }
            }
        }
    }
    var_23 = (((((var_10 != (var_6 > 1486646126)))) ^ 37));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                arr_35 [i_11] [i_11] [i_10] &= (arr_34 [i_10]);
                var_24 = (((arr_34 [i_10]) ? (arr_34 [i_10]) : (arr_34 [i_10])));
                var_25 = 1;
            }
        }
    }
    #pragma endscop
}
