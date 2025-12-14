/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (127 > -1539480593);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_11 = ((min(((-7274596517977702013 ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : -7128)), -121)));
                        var_12 -= ((-((-(arr_8 [i_1 - 1] [i_1 - 1])))));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_13 = ((((((1 & 7) || (~7128))))) > (arr_4 [i_3] [i_0]));
                            var_14 = ((5714 << (((((12055486547126739459 ? 191 : (arr_0 [i_0])))) ? (arr_1 [i_0] [i_0]) : (156 < -3100453310490697543)))));
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_4] = (((min(156, (((!(arr_6 [i_0] [11] [i_2] [i_0]))))))) & (arr_11 [i_0] [i_1 + 3]));
                        }
                    }
                }
            }
        }
        arr_17 [i_0] [i_0] = ((max(((0 ? -2079424281 : -1539480593), 1978348768))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    {
                        var_15 = (((min(12055486547126739460, 7120)) <= (((((min(-107, 0))) ? (1 ^ 1) : 55978)))));

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_30 [12] [i_5] [3] [i_5] [i_0] [i_5] = ((+(((arr_6 [i_0] [i_6] [i_7] [i_0]) ? 1098237994 : -1978348768))));
                            var_16 = (((75 >= 7108) - (max(12055486547126739460, 52733))));
                            var_17 -= ((45932 > (arr_7 [10] [i_7 + 2] [10])));
                        }
                    }
                }
            }
        }
    }
    var_18 -= var_0;
    var_19 = ((((max(110, 9863234254613080447))) ? 2079424297 : (var_1 < 0)));
    var_20 = (((((var_6 / 72) / ((min(-1539480604, 97))))) & (((-((max(8964, 1))))))));
    #pragma endscop
}
