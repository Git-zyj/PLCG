/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_9);
    var_11 = (var_9 >= var_6);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_2] [i_2] [i_3] [i_4] = (max(((((max(48648, (arr_5 [i_2] [i_2] [i_4])))) * (!65535))), ((((((arr_8 [i_0] [i_0] [i_2] [6]) > (arr_2 [i_1] [i_4] [i_2])))) + var_0))));
                                arr_12 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_2] [i_4] = ((min((arr_6 [i_3] [i_0 - 2] [i_2] [i_2]), ((!(arr_7 [i_0] [i_1] [i_2] [i_2] [i_4] [1]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_12 &= (arr_8 [i_0] [i_0] [i_0] [i_6]);
                            arr_18 [i_0] [i_0] [i_0] [i_6] [i_5] = ((((min((arr_9 [i_0] [i_0] [i_1 + 1] [i_6] [i_0] [i_6] [i_6]), ((max(238, var_3)))))) ? ((min(((48651 ? var_0 : 0)), var_7))) : ((-10337 ? var_5 : (arr_0 [i_0 - 1])))));
                        }
                    }
                }
                var_13 *= (arr_16 [i_1] [i_1] [i_1] [i_0] [4] [i_1]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_25 [i_0] [i_1] [i_1] [i_1] [i_7] [i_8] = ((!((((arr_14 [i_0 + 2]) ? (arr_14 [i_0 + 2]) : 65522)))));
                            var_14 ^= (min((max((((65522 == (arr_21 [i_0] [i_1] [i_1])))), var_8)), ((min((arr_24 [i_0] [i_1 - 2] [i_7] [i_8]), var_2)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 15;i_10 += 1)
        {
            {
                var_15 -= ((0 >= ((max(48654, (max(13, -122)))))));
                var_16 = (max(var_16, ((max((((((var_5 ? (arr_26 [i_9]) : var_8))) ? (((max(var_7, 48648)))) : (max(var_2, (arr_26 [6]))))), (arr_31 [i_9] [i_10 - 2]))))));
                arr_32 [i_10] [i_10] = ((65508 ? ((~(arr_30 [i_9] [i_10]))) : var_1));
                var_17 = (((((-(arr_30 [i_9] [i_10])))) * ((((((arr_31 [i_9] [i_10]) ? (arr_29 [i_10] [i_10] [i_10]) : -636032476))) ? -65512 : (max((arr_26 [i_10]), (arr_30 [i_9] [i_10])))))));
            }
        }
    }
    #pragma endscop
}
