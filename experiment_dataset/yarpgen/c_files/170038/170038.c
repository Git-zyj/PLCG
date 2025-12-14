/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((28 ? 132 : 28944))) ? (max(12, 154)) : (((var_15 >> (48 - 40)))))) < (((-(!246))))));
    var_21 = (64 | 49689);

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_12 [i_3] [i_1] [i_1] [i_0] = (((((((((arr_3 [i_0]) ? var_4 : 14475))) ? (((arr_9 [i_3] [i_1] [i_1] [6]) ? (arr_8 [i_0]) : 3517)) : (min((arr_7 [5] [i_1] [i_1] [i_3]), var_5))))) ? (!-8509) : (max(((max(93, -100))), ((1953522410798878183 / (arr_11 [i_0] [i_0] [i_2] [i_3] [i_3] [5])))))));
                        var_22 ^= ((-(arr_6 [i_1] [i_1])));
                        var_23 = arr_4 [i_1] [i_3];
                        var_24 = (((((((arr_10 [i_0] [14] [0]) >= (arr_2 [i_0] [i_1])))) / ((max((arr_1 [i_0]), var_17))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_25 |= -37667;
                        arr_19 [14] = max((arr_5 [i_4]), (((!((max(108, 1)))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_26 [i_7] [i_0] = (min(((min((arr_2 [i_7] [i_0]), (arr_2 [i_8] [i_7])))), (arr_10 [i_0] [i_0] [i_8])));
                    var_26 = ((((((arr_11 [i_8] [16] [i_7] [i_7] [i_0] [i_0]) ? 298238405 : ((((arr_10 [i_0] [i_7] [i_8]) ? (arr_18 [8] [8]) : -29842)))))) + (((arr_11 [i_0] [i_0] [8] [10] [7] [7]) ? (arr_24 [i_0] [i_7] [i_8] [i_8]) : ((((arr_13 [i_8] [i_7] [i_0]) ^ 593685879)))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_27 = (((15835 ? 0 : 2147483647)));
                                var_28 = (arr_14 [i_0] [i_7] [i_10 - 2]);
                            }
                        }
                    }
                }
            }
        }
        arr_33 [i_0] [i_0] = (max((((arr_3 [i_0]) << (((arr_3 [i_0]) - 556897873)))), (12859104055677600014 || 1)));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    {
                        var_29 = (255 | 168);
                        var_30 = (arr_35 [9] [i_14 - 1]);
                        var_31 = ((-1714 ? -7042241625057737797 : 298238399));
                        var_32 += -65535;
                    }
                }
            }
        }
        arr_46 [i_11] = (arr_22 [i_11] [i_11] [i_11]);
        arr_47 [i_11] [i_11] &= (((((3996728893 ^ (arr_32 [i_11] [i_11] [i_11] [i_11])))) ? (32757 >> 0) : (arr_6 [i_11] [i_11])));
    }
    var_33 = (var_12 | var_8);
    #pragma endscop
}
