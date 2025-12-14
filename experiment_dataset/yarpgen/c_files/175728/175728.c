/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(var_8, -1))) - (((155205624104161316 + var_5) - (((min(var_6, var_6))))))));
    var_15 ^= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 += ((var_2 ? -155205624104161319 : (((((min(7920, 1))) ? 1 : 277297319)))));
                                var_17 += ((120 ? (max(((max((arr_9 [i_0] [i_1] [i_0] [18] [18] [i_2] [i_0]), 255))), (min(-155205624104161325, -155205624104161323)))) : -499039518));
                                var_18 = (-1 ? 14 : ((((min((arr_1 [i_0]), 277297319)) * ((min(-20687, var_9)))))));
                                arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] = ((arr_7 [i_1 - 3] [i_2 - 1] [i_2] [i_3 - 1] [i_1]) ? (min((((var_5 + 9223372036854775807) << (arr_9 [i_1] [i_3] [i_2] [i_0] [i_0] [i_0] [i_1]))), (min(var_5, 1)))) : (((min((arr_7 [i_0] [i_1 - 1] [i_2] [9] [i_1]), (arr_4 [i_1 + 1] [i_1] [i_0]))))));
                            }
                        }
                    }
                    var_19 |= (min((max(var_12, 4294967295)), ((((arr_4 [6] [i_0] [i_2 + 2]) ? (arr_5 [i_2 + 2] [i_1] [i_1 + 1]) : ((2774601633 << (var_10 - 1017071532))))))));
                }
            }
        }
    }
    #pragma endscop
}
