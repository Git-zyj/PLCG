/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_0;
    var_21 = (min(48, 27514));
    var_22 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_23 = ((-(+-34504)));
                            var_24 = (min(-126, 65507));
                            var_25 -= arr_1 [i_0] [i_2];
                            var_26 = max(35478, (min(var_6, var_2)));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_27 = ((~((((-14 ? (arr_10 [2] [i_1] [5]) : (arr_12 [i_0] [i_1] [i_4])))))));
                    var_28 = ((((max((arr_10 [6] [i_1] [i_4]), (arr_10 [i_0] [i_1] [i_4])))) << (var_13 - 9531)));
                    var_29 += arr_1 [2] [2];
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_25 [19] [i_1] [i_0] [16] [15] [i_1] = arr_22 [i_0] [10] [i_5] [i_6] [i_5] [i_6];
                                var_30 -= var_2;
                            }
                        }
                    }
                    var_31 = arr_5 [i_0];
                }

                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    var_32 ^= ((-((-((min(110, (arr_20 [i_0] [i_0] [16] [4]))))))));
                    var_33 = (max(var_16, -42));
                }
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    arr_31 [i_0] = (max(32752, 28));
                    arr_32 [1] [i_0] = -44;
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_34 = ((~((~((max((arr_12 [i_0 - 1] [i_1] [i_1]), -41)))))));
                                var_35 += ((!(~var_9)));
                                var_36 += 42;
                            }
                        }
                    }
                    var_37 = (min(-59, (((!((min(-65, 27))))))));
                }
                var_38 -= arr_28 [16] [i_1];
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            {
                                arr_47 [i_0] [14] [i_0] [i_0] [4] = 2;
                                var_39 += (((max((((arr_13 [i_0] [i_14] [i_12]) ? 16866 : var_8)), ((min(var_4, 60714))))) >= ((((min(64053, 26))) ? ((-(arr_23 [5] [i_14] [i_0] [2] [10] [16] [i_0]))) : (!65535)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
