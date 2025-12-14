/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_14 = (min((((arr_0 [i_0 + 2] [i_0 + 4]) - 1356)), (((arr_0 [i_0 - 1] [i_0 + 3]) & (arr_2 [i_0 + 2])))));
        var_15 = ((var_11 << (4185097956 - 4185097941)));
        var_16 = ((210 ? 189 : 109869350));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_1] [i_0] = (min((arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (((var_2 ? ((1123599972970128086 ? var_1 : (arr_6 [i_2] [i_2] [i_2]))) : 967843104)))));
                    var_17 = (max(var_17, (arr_2 [i_0 + 2])));
                    var_18 = (arr_4 [i_0 + 4] [i_1] [i_0 + 4]);
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_19 -= ((((((arr_9 [i_3] [i_3]) <= ((10068 ? (arr_5 [6] [6]) : var_1))))) % ((((arr_12 [i_3]) >= var_1)))));
        var_20 = (min((max((arr_8 [17] [i_3 + 4]), (arr_2 [i_3 + 4]))), ((((arr_6 [i_3 + 1] [i_3 + 1] [i_3]) == (min((arr_8 [i_3] [i_3]), 1189139174)))))));
        var_21 = ((var_13 ? (((arr_11 [i_3 + 4]) ? (arr_11 [i_3 - 1]) : (arr_11 [i_3 + 4]))) : ((((arr_6 [i_3] [i_3] [i_3 + 2]) / (arr_6 [i_3] [i_3] [i_3 + 4]))))));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_22 -= (((arr_22 [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 2] [i_7 - 2]) == (arr_25 [i_7] [21] [i_7] [i_7] [i_7 + 1])));
                                var_23 = (((arr_26 [i_4] [i_4] [11] [i_5 - 1] [i_8]) * (arr_26 [i_6] [i_5] [i_6] [i_5 - 1] [i_8])));
                            }
                        }
                    }
                    var_24 = (4185097946 >= 3327124191);
                    var_25 = (min(var_25, 8388607));
                }
            }
        }
        var_26 = (max(var_26, (arr_23 [i_4] [i_4] [i_4] [i_4])));
        var_27 = 58411;
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        var_28 = (min(var_28, (((((3902972354 ? -10094 : (-9543 || -2933))) >> (65535 - 65478))))));
        var_29 += (max(var_4, (min(104, -1))));
    }
    #pragma endscop
}
