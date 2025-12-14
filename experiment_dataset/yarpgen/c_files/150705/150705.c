/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    var_12 ^= var_3;
                    var_13 = (((-2059496622 | 9223372036854775807) & ((~(arr_4 [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [i_2 - 2] [1] [i_0] = (min(2059496637, ((((-2059496617 - var_5) + 19602)))));
                                arr_14 [i_4] [i_0] [i_2 - 3] [1] [i_0] = 190;
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [2] = (arr_8 [i_2] [i_2 - 1] [i_0] [i_0]);
                }
                arr_16 [i_0] [6] [i_1] &= 2059496637;

                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {
                    arr_20 [i_1] [i_0] = -2059496637;
                    var_14 = 2059496637;
                }
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                            {
                                arr_28 [i_8] [i_6] [i_0] = ((((-32760 ? (arr_21 [i_6]) : 1947552482))) ? (((var_2 && (arr_18 [i_1])))) : ((-(arr_22 [i_0] [i_0] [i_0]))));
                                arr_29 [i_1] [i_6] [i_6] [i_1 - 1] [i_1] [i_6] [i_0] = (arr_7 [i_1 + 2] [7] [i_7] [i_8]);
                                arr_30 [i_8] [i_6] [i_6] [i_1 + 2] [i_6] [i_0] = (!-2059496638);
                            }
                            for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                            {
                                var_15 *= (((max((arr_12 [i_1] [i_9] [i_7] [i_1] [i_1] [i_1] [0]), (arr_3 [i_7] [0]))) == var_3));
                                arr_33 [i_7] [i_1] [i_1] [i_1] &= ((67782311 ? 190 : 0));
                            }
                            var_16 = 2059496638;
                            arr_34 [i_6] [i_6] = (-2059496618 - -3970822727218920769);
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] = (max((-32760 == 2147483620), ((var_0 + (22 * 67782329)))));
                            arr_36 [i_7] [i_6] [i_6] [1] [i_7] = (arr_5 [i_7]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
