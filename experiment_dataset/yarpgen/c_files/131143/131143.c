/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = -304217920413643899;
        arr_3 [i_0] = ((+(min((7835 / -304217920413643904), (arr_2 [i_0] [i_0])))));
        arr_4 [13] |= ((-(((arr_2 [i_0] [i_0]) & 0))));
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        var_16 = (min(var_16, 304217920413643898));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                {
                    var_17 -= (239 ? 304217920413643873 : 304217920413643911);
                    arr_15 [i_1] &= (304217920413643897 == -304217920413643874);
                    arr_16 [i_1] [i_3] [i_3] [6] = (max((((arr_11 [i_3 - 1] [0] [i_1 + 2]) ? ((((arr_13 [i_3]) ? (arr_8 [i_1 - 2] [4] [i_1 - 2]) : var_14))) : (arr_0 [i_2]))), ((((((arr_9 [i_3] [i_2] [i_1 + 2]) <= 1)) || (~54))))));
                    var_18 = max(((((arr_7 [i_3 + 2] [i_1 + 1]) && 4294967290))), (max((arr_7 [i_3 - 1] [i_1 + 3]), (arr_7 [i_3 + 1] [i_1 + 2]))));
                }
            }
        }
        var_19 *= 0;
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                var_20 = ((((-((15 >> (215 - 186))))) / ((0 ? (arr_24 [i_5] [9] [i_4 + 1]) : ((var_3 ? (arr_24 [i_4] [i_5] [i_5]) : (arr_24 [i_4] [8] [i_5])))))));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_21 = (arr_21 [i_6 + 3] [i_6 + 3]);
                            arr_32 [i_4 + 1] [i_5] [1] [i_7] &= ((-(arr_26 [i_4 + 2] [i_5] [i_6] [i_6 - 3])));
                            var_22 = ((((!((max(-48, 0))))) ? (((((arr_21 [i_4 + 2] [i_6 + 1]) == ((0 ? 0 : (arr_19 [i_4]))))))) : (max((((47 ? 1 : 76))), (3077087867536208912 / 121)))));

                            for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                            {
                                var_23 -= ((((min(10644, (arr_26 [5] [5] [0] [i_5]))) + (min((arr_31 [10] [10] [i_6 + 3] [i_7] [i_8] [i_7]), 3340305536881176059)))));
                                var_24 &= -12535;
                                var_25 -= (min((arr_34 [i_4 - 2] [i_7] [i_6] [i_5] [i_4 - 2]), ((min((arr_24 [i_6] [i_6] [1]), (((arr_17 [i_6]) ? -10654 : (arr_28 [i_4 - 3] [i_5] [i_5] [i_4 - 3] [i_8]))))))));
                            }
                            for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                            {
                                arr_38 [i_9] [i_5] = (((max(((var_9 ? (arr_19 [i_5]) : 10657)), var_0)) >= ((max(10644, (arr_20 [i_4 - 1]))))));
                                var_26 *= 7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (max(var_27, var_7));
    #pragma endscop
}
