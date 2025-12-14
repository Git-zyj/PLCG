/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = (var_0 ? (((-(1 - 1)))) : var_10);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0 + 2] = (((min(((min(1703350706, var_6))), (min(13, 1)))) ^ (((1 << (1987241532 - 1987241510))))));
                    arr_9 [i_2] [i_1] [i_2] = (~var_8);

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_14 = (min(var_14, -2144728799379261912));
                        arr_12 [i_1] [i_2] [i_3] = -1022;
                        var_15 = (min(var_15, (((+(max((arr_10 [i_0 + 2] [i_0 - 1] [i_3 + 1] [i_0 + 2]), (max(-2055679175579171380, 2055679175579171379)))))))));
                    }
                    var_16 += (((~-12) ^ ((744321751375224198 ? 4294967272 : (((arr_1 [i_0 + 2]) ? (arr_5 [i_0] [i_0]) : (arr_2 [i_0])))))));
                    var_17 = 5766698798155559929;
                }
            }
        }
    }
    var_18 = ((var_7 ? ((54455 ? 1703350709 : 1513605620)) : (((2591616586 ? -100 : 65535)))));
    #pragma endscop
}
