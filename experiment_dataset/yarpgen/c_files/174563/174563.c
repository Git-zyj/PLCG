/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        var_13 ^= (((var_4 / var_5) << (((arr_9 [i_0] [i_1] [3] [i_2] [i_3]) - 20883))));
                        var_14 |= (var_4 || 4097377370);
                        var_15 = (((arr_6 [i_3 + 1]) * (arr_6 [i_3 - 4])));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_16 = ((-9262 ? 3601645702 : 9261));
                                arr_14 [i_2] [10] [i_2] = (((((min((arr_12 [i_0] [16] [i_2] [i_4] [i_5]), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (arr_13 [i_0] [i_0] [i_2] [i_4] [20]) : (~var_1)));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_0] [i_4] [i_5] |= ((((((arr_5 [i_2 - 1] [i_2 - 1]) ? (arr_5 [i_2 - 1] [i_2 - 1]) : (arr_8 [i_1] [i_1] [11] [i_2 - 1])))) || (((((((arr_3 [i_4] [i_0]) ? (arr_13 [i_0] [i_0] [i_2 - 1] [i_4] [15]) : (arr_10 [i_0] [i_0] [i_2])))) ? (arr_3 [i_0] [i_0]) : ((21 ? (arr_8 [1] [i_1] [i_2] [1]) : var_9)))))));
                                var_17 = (-463688200 || -9289);
                            }
                        }
                    }
                    var_18 -= 3045;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            {
                arr_22 [i_7] [i_6] [i_6] = (arr_19 [i_7]);
                var_19 = ((27336 && ((((((65514 ? var_3 : (arr_20 [i_6])))) ? (~18) : (arr_20 [i_7 + 1]))))));
            }
        }
    }
    var_20 += (min(var_11, ((max(var_2, var_8)))));
    var_21 |= (-(var_1 & var_9));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            {
                var_22 = (arr_21 [i_9 + 3] [i_9 + 3] [i_9 + 1]);
                var_23 += (min(var_10, -9));
            }
        }
    }
    #pragma endscop
}
