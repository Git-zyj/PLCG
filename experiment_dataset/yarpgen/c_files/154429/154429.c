/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((4224577196 * 21147) ? var_1 : var_0);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_11 = ((((((arr_8 [i_1] [i_1]) ? (arr_8 [i_2] [11]) : (arr_8 [i_3] [i_3])))) ? ((var_2 ? (arr_8 [i_0] [i_3]) : var_6)) : (((max((arr_8 [i_0] [i_0]), var_4))))));
                        arr_10 [0] [i_2] [i_2] [i_0] [i_0] = 63;
                    }
                }
            }
        }

        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            var_12 = (max(var_12, ((((max(var_6, (((70390107 ? 4224577175 : 192))))) | ((min((((65 ? var_0 : 63))), (max(1835719606, (arr_13 [i_0] [i_4])))))))))));
            arr_14 [i_0] [8] [i_4] = (arr_7 [i_0] [i_4] [i_4] [i_4]);
            arr_15 [i_4] [i_4] [i_4] = (((max(((64 ? 22675 : var_5)), (arr_7 [i_4 + 3] [i_4] [i_4 + 3] [i_4]))) >> (343872306 - 343872292)));

            /* vectorizable */
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                var_13 = ((511 ? ((73 ? 64 : 4468310450657876735)) : var_4));
                var_14 = (i_4 % 2 == 0) ? (((((343872306 >> (((arr_13 [i_4] [i_4 + 2]) - 8258)))) << (((arr_13 [i_4] [i_4]) - 8257))))) : (((((343872306 >> (((((arr_13 [i_4] [i_4 + 2]) - 8258)) - 21787)))) << (((((arr_13 [i_4] [i_4]) - 8257)) - 21778)))));
                var_15 = (((arr_3 [i_5] [i_5 + 2] [i_5 + 1]) ? var_9 : var_0));
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
            {
                var_16 = (var_1 ? (((arr_16 [i_4 + 1] [8]) ? 192 : var_6)) : ((((arr_1 [i_4 + 1]) ? 86053946 : (arr_16 [i_4 + 2] [i_4 + 2])))));
                var_17 = (((arr_4 [i_6] [1] [i_6]) * 62));
                arr_21 [14] [8] [i_4] = var_3;
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
            {
                var_18 = (max(var_18, ((max(((((((arr_4 [i_0] [i_0] [i_0]) ? (arr_6 [i_4] [i_7]) : var_7))) ? (arr_20 [i_0] [i_4] [i_4 + 3] [i_0]) : (arr_23 [i_0] [i_4 + 1] [i_7] [i_7]))), ((((var_3 >= var_5) <= var_4))))))));
                arr_26 [i_0] |= ((~(((arr_8 [i_0] [i_4 + 3]) ? ((var_1 ? var_1 : 4294967287)) : -1))));
            }
            var_19 = ((((((~59822534) ? (arr_25 [i_4 + 1]) : (arr_11 [i_0])))) ? (arr_19 [i_4 - 1] [i_4 + 3] [i_4 - 1] [i_4 - 1]) : ((((((arr_9 [i_0] [i_0] [0] [i_4]) || (arr_17 [11] [i_4] [i_0] [i_4])))) / (arr_16 [i_0] [i_0])))));
        }
        var_20 = (max((((((var_5 ? (arr_25 [i_0]) : var_4)) % var_0))), (arr_4 [i_0] [i_0] [15])));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 16;i_8 += 1)
    {
        arr_29 [i_8] [i_8] = ((235924455 ? var_8 : (arr_13 [12] [i_8 + 1])));
        var_21 = (((!var_9) || (arr_22 [2] [i_8 - 1] [i_8] [i_8 + 1])));
    }
    #pragma endscop
}
