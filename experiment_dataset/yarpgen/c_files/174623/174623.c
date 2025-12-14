/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (arr_6 [i_0] [i_0] [i_1] [i_2]);
                    arr_7 [i_0] [i_2] = (-127 - 1);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 *= (arr_4 [i_3 + 3] [i_0]);
                                var_14 = (min(var_14, (((arr_9 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3]) && (arr_9 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3])))));
                                arr_13 [i_4] [i_3] [i_3] [i_2] [i_3] [i_0] [i_0] = (((!25299426) > (((((arr_1 [i_2]) + (-127 - 1))) | 0))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_15 = (((max(0, 17424749737058495961)) == (-127 - 1)));
                                var_16 = 0;
                                var_17 = (var_0 ? (((arr_28 [i_9] [i_8] [i_7] [i_6] [i_5]) - (arr_18 [i_6]))) : ((2251799813685248 ? (((0 || (arr_23 [i_9] [i_6] [i_7] [i_6] [i_5])))) : ((min(var_10, (arr_15 [i_7])))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_18 = ((((((((128 > (arr_18 [i_6])))) >= ((min((arr_16 [i_5] [i_6]), (arr_25 [i_11] [i_6] [i_6] [i_5]))))))) | ((max((arr_32 [i_6] [i_6] [i_10] [i_11] [i_5 - 1] [i_10]), (arr_26 [i_10 - 2] [i_11] [i_10] [i_11] [i_6]))))));
                            var_19 = (!14095);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 16;i_14 += 1)
                        {
                            {
                                arr_44 [i_6] = (arr_21 [i_5] [i_5]);
                                var_20 = (((((14009 && (arr_26 [i_6] [i_13] [i_12] [i_6] [i_6])))) != (arr_31 [i_5 - 1] [i_5 - 1] [i_14 + 1] [i_14 - 3])));
                                arr_45 [i_6] = (arr_18 [i_6]);
                                var_21 = (((((~-113) != (arr_20 [i_6] [i_12] [i_13] [i_14]))) && (+-0)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
