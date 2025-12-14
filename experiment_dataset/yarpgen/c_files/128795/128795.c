/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_2 [i_0] [i_1] [i_0]);
                var_11 += 57184;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_12 = var_6;

                            for (int i_4 = 0; i_4 < 0;i_4 += 1)
                            {
                                var_13 *= ((1023 ? 64518 : ((max(64499, 0)))));
                                var_14 = ((~((~(min(5110603672231195191, (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                arr_16 [i_4] [i_3] [i_2] [i_1] [i_0 + 2] |= (((arr_14 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 3] [i_0] [i_0] [i_0 + 2]) ? var_9 : ((~(((-1510054373 + 2147483647) << (-1510054373 + 1510054374)))))));
                                var_15 = (max((min(((1018 ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : 64518)), ((var_3 ? 1018 : 1004)))), (max((arr_15 [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4]), -1510054373))));
                            }
                            var_16 = ((((-(arr_0 [i_0]))) != ((max(var_9, (1510054372 || 1366903938785672769))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((var_0 | ((var_5 ? var_2 : ((var_1 ? var_8 : var_4))))));
    var_18 += var_9;
    var_19 = ((((((((1510054373 ? 1024 : 1004))) ? 32439 : (var_1 & var_0)))) ? 903536592134157932 : (((((max(var_4, 1004))) ? 1366903938785672780 : (1011 || 1366903938785672769))))));
    #pragma endscop
}
