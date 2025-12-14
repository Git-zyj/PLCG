/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_1, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_12 += (max((min((arr_1 [i_1 - 3]), var_9)), (((min(2257025522, 2037941774))))));
                var_13 = (min((min(var_3, (arr_5 [i_1 - 1] [i_1 - 1]))), (arr_5 [i_1 - 1] [i_1 - 1])));
                var_14 |= ((max(18446744073709551608, -1493348557)));
            }
        }
    }
    var_15 = ((var_4 ? var_10 : ((min(var_6, var_4)))));
    var_16 = (((!(((var_0 ? var_0 : var_6))))));
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_17 += -55;

                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_2] [i_3] [i_2] [i_5] = (~(arr_10 [i_2] [i_3]));
                        var_18 = (max(var_18, ((min(((((arr_15 [i_5] [i_4] [i_2] [i_2]) == ((2257025533 ? 2037941802 : 2257025522))))), var_7)))));
                        var_19 = (((((((2 - 10) + 2147483647)) << (((((75 | var_3) + 14357)) - 20)))) * 0));
                        var_20 = 31;
                        arr_19 [i_2] [i_2] [1] = ((((min(-var_10, (3285936112318570483 + 511)))) ? (min((var_7 + 2037941774), 1073217536)) : ((min(-2044154331, (arr_13 [i_2] [i_2 - 1] [i_2 - 2]))))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_21 = ((~(((min(var_0, var_7)) ^ var_3))));
                        var_22 = (min(((((var_8 <= (arr_21 [i_6] [i_2] [i_2] [i_2]))) ? ((min(var_2, var_4))) : 15)), (arr_15 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_6])));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        var_23 = 130;

                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            var_24 = (arr_13 [i_2] [i_7 - 2] [i_7 - 1]);
                            var_25 = (((arr_2 [i_2 - 2] [i_8 + 1]) > (arr_2 [i_2 + 1] [i_8 - 1])));
                            var_26 = (max(var_26, ((((arr_10 [i_3] [i_2 + 1]) < 1073217536)))));
                        }
                        var_27 = (max(var_27, 31444));
                    }
                    for (int i_9 = 3; i_9 < 18;i_9 += 1)
                    {
                        var_28 = (max(2513359138, (!var_2)));
                        var_29 = ((((arr_24 [i_2] [i_2 + 1] [i_9 - 1] [i_9] [i_9 - 1] [i_9]) * 165)));
                        var_30 = (max(var_7, var_8));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 19;i_11 += 1)
                        {
                            {
                                var_31 = (min(var_31, (((((arr_9 [i_2 + 1]) ? var_7 : 130))))));
                                var_32 ^= ((!(arr_32 [i_2 - 3] [2] [i_3] [i_10] [i_11])));
                            }
                        }
                    }
                    arr_33 [i_2] [i_2] [i_2] [i_2] = -612895956;
                    var_33 = (58584 < ((var_1 ? ((4294967269 ^ (arr_28 [i_2]))) : (var_7 <= 1052))));
                }
            }
        }
    }
    #pragma endscop
}
