/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((+(((var_13 >= var_13) ? ((max(1020, -1020))) : (1 - 48)))));
    var_16 = var_5;
    var_17 = (min(var_17, ((max(var_2, (var_3 - 2653623102423532889))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 6;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_18 ^= (min((min(var_0, (arr_6 [i_1]))), (72057593903710208 % 1)));
                                var_19 = (((arr_14 [7] [i_0 + 1] [i_3] [3] [i_0]) ? 5265213655387918628 : var_0));
                                var_20 = (var_6 >> ((((9223372036854775807 ? (min(6186, -6336845654161521720)) : 10)) + 6336845654161521720)));
                                var_21 ^= ((((max((arr_6 [i_1]), (arr_13 [i_4 - 2] [0])))) < (arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4])));
                                arr_16 [i_0] [i_4] [i_0] [i_4] [i_4] [5] [i_1] = 4565587664467990263;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_19 [i_0 + 2] [i_0] = (((((var_9 ? (arr_14 [i_2] [i_2 - 2] [i_2] [i_2] [i_0]) : -4004093555012301887))) ? ((min(((((arr_8 [i_0] [i_1] [i_0]) == (arr_3 [i_2] [i_2 + 3])))), (((arr_6 [i_0]) * -2943150299419219500))))) : 14293198358152490699));
                        var_22 += (arr_14 [i_0] [i_0] [i_1] [i_2] [i_1]);
                        var_23 = (max(var_23, 36665));
                        arr_20 [i_2] [i_2] [i_2 + 1] [i_0] = ((36665 ? (((((((((arr_10 [i_0 + 2] [i_1] [i_2] [i_0 + 2]) > 17489)))) <= (5150071312313374790 % 1))))) : 7254331740756295222));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_2 + 4] [i_6] = ((arr_10 [i_1] [i_2] [i_2 + 1] [i_6]) + var_10);
                        var_24 = (max(var_24, ((((4565587664467990263 ? var_5 : (arr_2 [i_0 - 1])))))));
                        var_25 = ((-1021 ? (((arr_2 [i_0 + 2]) ? var_0 : var_11)) : (0 + 28870)));
                        arr_24 [i_6] [i_0] [i_2 + 2] [i_1] = ((4063232 ? 9110757894255453580 : 3));
                        var_26 = (((arr_17 [i_6] [i_1] [i_2 + 3]) ? var_10 : (arr_7 [i_0 - 1])));
                    }
                    var_27 += (((arr_21 [i_0] [2] [i_2] [i_2]) / ((var_3 ? 2126259751726850066 : (((4005449007 ? (arr_21 [i_0] [i_0 - 1] [i_0] [i_0]) : 131)))))));
                }
            }
        }
    }
    var_28 = var_5;
    #pragma endscop
}
