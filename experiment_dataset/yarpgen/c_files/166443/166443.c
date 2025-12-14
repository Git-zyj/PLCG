/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 *= (arr_2 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_11 = (max(var_11, ((((arr_3 [i_0]) ? 374577542 : (arr_3 [i_0]))))));
                        var_12 = (arr_3 [i_0]);
                        arr_11 [i_0] [i_3] [i_3] [i_3] = (((((4542 > (arr_0 [i_0])))) << (((-374577541 + 374577572) - 28))));
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] |= (~-374577526);
                        var_13 = ((arr_5 [i_0] [i_0] [i_2] [i_3]) ? (arr_5 [i_0] [i_0] [i_2] [i_0]) : (arr_5 [i_0] [i_0] [i_0] [i_0]));
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = ((((((arr_1 [i_0]) ? 15 : -15))) > 6270067095643972538));
    }
    var_14 = ((2147483647 ? ((1 ? -1644361330 : (max(1, 13875031968100988187)))) : 374577542));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                var_15 -= ((31616 ? (((!(((-1644361328 ? 0 : 255)))))) : ((33919 ? ((((arr_8 [i_5] [i_5] [i_5] [i_5]) != 42099))) : 0))));
                arr_19 [i_4] [i_4] [i_4] = (max((arr_7 [i_4] [i_4] [i_4]), ((~(((arr_0 [i_4]) >> 1))))));
                arr_20 [i_4] [i_4] &= ((((max(-1644361316, (arr_3 [i_4])))) ? (((min(1, 1644361331)))) : (((((489774722 ? 255 : (arr_16 [i_5])))) ? (arr_18 [i_5] [i_5]) : ((1 ? (arr_14 [i_4] [i_4]) : 8))))));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_16 = 8958128074877162429;
                    var_17 += (((arr_3 [i_4]) ? (arr_3 [i_4]) : (arr_3 [i_4])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 20;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_18 = ((!((((2097136 ? (arr_0 [i_7]) : -1220364440))))));
                            var_19 = ((-((1032192 ? (arr_1 [i_8]) : (arr_30 [i_7] [i_8 + 2] [i_9 + 1])))));
                            var_20 -= ((-1220364451 ? (((8176 - 0) ? (((1099444518912 ? 134217727 : 22120))) : (((arr_26 [i_9 + 1]) ? (arr_9 [i_7] [i_7] [i_7] [i_10]) : 255)))) : (~1099444518912)));
                        }
                    }
                }
                var_21 = (max(var_21, (arr_24 [i_8 - 1] [i_8 - 1])));
            }
        }
    }
    #pragma endscop
}
