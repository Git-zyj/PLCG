/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = ((((1 != (((arr_5 [i_1]) ? (arr_4 [i_0] [i_0]) : var_0)))) ? (arr_4 [i_0] [i_0]) : ((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_2])))) ? ((min(80, var_3))) : (arr_3 [i_1] [i_1])))));
                    arr_8 [21] [i_2] = 1;
                    arr_9 [i_0] [2] [1] = (1 ? (arr_7 [2] [2] [i_2]) : ((((-(arr_0 [15]))) >> var_3)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 = ((((((arr_4 [i_0] [i_4]) ? ((~(arr_7 [i_4] [i_4] [i_4]))) : (arr_1 [i_4] [i_1])))) ? (max((((arr_2 [i_4]) ? (arr_10 [i_1] [i_3]) : (arr_2 [i_1]))), var_9)) : 1));
                                var_13 += (((((((max(var_8, var_1))) ? ((var_3 ? 1 : (arr_5 [i_0]))) : (arr_7 [i_1] [i_3] [i_4])))) ? (((var_2 ? (((var_9 == (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (~var_0)))) : (max((((1 ? var_3 : var_5))), (min(var_10, 6809744959748785673))))));
                                var_14 = (min(var_14, ((min((arr_15 [1] [1] [i_2] [1] [i_4]), (((arr_15 [22] [i_1] [22] [i_3] [i_4]) ? ((1 ? (arr_6 [i_0] [i_0] [i_4]) : 1)) : var_8)))))));
                                var_15 ^= 1;
                            }
                        }
                    }
                    var_16 = (arr_14 [12] [i_0]);
                }
            }
        }
    }
    var_17 = (1 % var_7);
    var_18 &= max((min(((var_8 ? var_5 : 1)), var_10)), var_4);

    /* vectorizable */
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        arr_19 [i_5] = ((arr_5 [i_5 + 1]) ? -311258260 : var_0);
        var_19 = (max(var_19, (arr_5 [i_5 + 1])));
    }
    #pragma endscop
}
