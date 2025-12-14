/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = 17468;
        var_10 = (max(var_10, ((((((max((arr_1 [2]), (arr_0 [i_0])))) == ((min(var_3, (arr_0 [i_0])))))) ? ((48068 ? -4 : 4)) : ((~((min((arr_0 [1]), (arr_1 [i_0]))))))))));
        arr_3 [6] = (((((((48041 ? 216 : var_7)) || (39 % -4))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_11 -= (min((((((4294967295 ? 6 : -2))) ? 3 : (((arr_5 [i_1]) ? 1771081530 : (arr_10 [i_0] [i_0] [i_2] [i_0] [2] [i_3]))))), (((2 ? 65535 : 216)))));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_12 = (((~-1) ? 152 : 7214));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] = 1;
                            var_13 = ((~(((((min(1, (arr_13 [i_0] [i_1] [i_4])))) != ((1 ? 749095020 : 1529050258)))))));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_19 [i_0] [13] [i_2] [0] = (arr_13 [i_1] [i_2 + 1] [i_5]);
                            var_14 = (arr_1 [i_2]);
                            arr_20 [i_0] [i_0] [i_0] [i_3] [i_0] = (arr_6 [i_1 - 2] [i_1 + 2]);
                            arr_21 [2] [i_1] [2] [i_1] [i_0] = (min((63 + var_7), ((1 ? var_4 : (((arr_6 [i_1] [i_3]) / (arr_14 [i_0] [i_1] [i_2 + 1] [i_3] [i_1] [15])))))));
                            arr_22 [1] [1] [1] [i_3] [i_3] = 927161333;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_15 = (arr_6 [i_0] [i_1 + 3]);
                            var_16 -= (arr_17 [i_0] [i_1 - 1] [i_2] [i_3] [i_6] [i_6] [i_2 - 1]);
                        }
                        arr_25 [i_0] = 6321;
                        var_17 = (arr_13 [i_1 + 2] [i_2] [0]);
                    }
                }
            }
        }
    }
    var_18 = (((((var_3 ? 1704781865 : 1))) + 48068));
    var_19 = var_5;
    #pragma endscop
}
