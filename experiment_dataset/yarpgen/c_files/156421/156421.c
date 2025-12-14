/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((-32767 - 1), (var_8 ^ var_10)));
    var_20 = (134300333 - 113);

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            var_21 = (min(var_21, (((var_2 ? ((1342717733 ? 200603484 : -125)) : var_6)))));
                            var_22 = var_6;
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            var_23 &= ((arr_1 [8]) ? (arr_1 [12]) : (arr_1 [10]));
                            var_24 = (105 && 4094363811);
                        }
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            arr_19 [i_0] [4] [0] [i_0] [i_0] = ((+(((arr_3 [i_1 + 1] [i_0] [i_1 + 1]) % var_15))));
                            var_25 = (min((~20162), (arr_18 [i_6] [i_6 - 1] [i_6 - 1] [11] [i_6] [i_6])));
                            var_26 = (min(-10626, ((((min(var_0, -30))) ^ 42661))));
                        }

                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            var_27 = (min((((((max(var_17, 4110460235))) ? -12 : ((((arr_3 [i_0] [i_0] [i_2]) <= (arr_15 [i_0] [i_1] [9] [i_2] [i_3] [i_7]))))))), (max((((arr_8 [i_0 - 3] [i_0 - 3] [i_2] [i_3]) - (arr_9 [i_0 + 2] [i_0 + 2] [i_1] [i_3] [i_0 + 2] [7]))), (!var_6)))));
                            var_28 = (((((var_0 + (min((arr_12 [i_0] [i_0] [2] [i_0] [i_0]), var_4))))) ? ((-((2 ? 84 : 10)))) : ((((((arr_16 [i_0] [i_0] [i_0] [9] [i_3] [i_7]) ? 36028796985409536 : var_15)) <= (arr_16 [i_0] [i_1] [i_2] [i_0] [i_7] [i_2]))))));
                            var_29 = (arr_21 [6] [i_0 + 1] [i_0]);
                        }
                    }
                }
            }
        }
        var_30 = (min(((200603484 ? -58 : ((114 ? 1064793889 : 55)))), -115));
    }
    var_31 = (((((max(-1, -54))) ^ (max(2461445916, var_6)))));
    #pragma endscop
}
