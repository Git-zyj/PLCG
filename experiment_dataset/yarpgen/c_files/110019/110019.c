/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (((((arr_2 [i_0] [i_1]) << (((arr_1 [23]) + 1342236999409700582)))) >> (((min((arr_1 [i_0]), var_6)) + 1342236999409700573))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 += -7322;
                                var_17 = ((+(((arr_12 [i_4 - 2] [i_3] [i_4 + 2] [i_4 + 1] [i_3] [i_3]) ? (arr_12 [i_4 - 2] [i_3] [i_4 - 4] [i_4 - 4] [i_3] [i_4]) : 113))));
                                var_18 -= max((arr_4 [i_2] [i_3] [i_4]), (min(1, 61783)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_19 [i_5] [i_1] [15] [i_2] [i_5] [i_6] [i_6] = ((-((1 ? ((var_12 / (arr_7 [i_0] [i_1] [i_2] [18] [i_6]))) : (((min((arr_15 [22] [i_5] [7] [i_0]), (arr_5 [i_0] [18] [i_0])))))))));
                                var_19 = (((min(285971686, 58214))) ? ((-(((-1988868152 + 2147483647) >> (-3478929264645057931 + 3478929264645057932))))) : 1);
                                var_20 -= ((-((-(arr_16 [i_1] [i_5] [i_2] [i_5] [i_6] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 += ((var_9 ? var_11 : ((~(~var_5)))));
    #pragma endscop
}
