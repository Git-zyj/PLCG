/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = (max((((max(8179718620704691970, var_5)))), (arr_6 [i_2])));
                    var_20 = (max(var_20, ((((min((arr_7 [i_2] [i_1 + 1] [i_0]), ((-(arr_3 [i_0]))))) - ((-(arr_3 [i_1 + 1]))))))));
                }
            }
        }
    }
    var_21 = 21081;
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_4] [i_4] = ((((arr_11 [i_3 + 1] [i_3 + 2]) ? var_11 : (max((arr_14 [i_3] [i_3] [i_3]), var_9)))));
                var_22 &= (-((((min((arr_10 [i_3 - 2]), (arr_14 [i_3] [21] [21])))) ? (((-1321553031 ? 131 : (arr_13 [i_3] [5] [i_4])))) : (((arr_12 [i_3]) ? (arr_9 [1]) : var_2)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_23 = ((((((arr_21 [i_7 - 1] [i_7 - 2] [i_7 - 1]) ? var_16 : (((min(-106, (arr_13 [i_5] [i_6] [i_5])))))))) && ((max((((var_0 || (arr_16 [i_8] [i_6])))), (arr_18 [4] [i_6]))))));
                            var_24 = (((-2165538374686159341 | (arr_22 [i_7 - 3] [i_7 - 2] [i_7 - 3] [i_7 + 1]))));
                            var_25 = ((var_13 ? (min(2165538374686159332, (arr_22 [i_8 + 2] [i_8 - 3] [i_8 + 2] [i_8 + 1]))) : ((max(4805, (arr_22 [i_8 - 2] [i_8 - 1] [i_8 + 2] [i_7 - 2]))))));
                            var_26 = (max(var_26, 376751284));
                            var_27 ^= ((((min((arr_22 [i_8 - 1] [i_8 + 1] [i_8 - 2] [i_8 + 2]), var_17))) || ((min((arr_20 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]), (arr_22 [i_8 + 1] [i_8 - 2] [i_8 - 3] [i_8 - 2]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_28 = (arr_25 [i_5] [i_5] [1] [i_10 + 2]);
                            arr_30 [i_5] [i_5] [0] [i_5] = var_4;
                        }
                    }
                }
                var_29 ^= (max((arr_17 [i_5]), ((var_4 ? (arr_17 [i_5]) : (arr_17 [i_5])))));
            }
        }
    }
    #pragma endscop
}
