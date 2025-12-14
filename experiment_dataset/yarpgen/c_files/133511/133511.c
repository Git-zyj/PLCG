/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~(min(((min(var_1, var_4))), (min(1, var_9)))));
    var_12 = ((var_5 << (-var_6 + 26436)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = ((!(arr_4 [i_0])));
                var_14 = ((((((min((arr_3 [i_1 - 1] [i_0] [i_0]), var_3))) ? (arr_1 [i_1 - 3] [15]) : (arr_2 [i_0] [i_1 - 2]))) | (((min(var_4, var_6))))));
                var_15 = (max(var_15, 0));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_16 &= (!162782536);

                /* vectorizable */
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    var_17 = (((arr_8 [i_4 + 2] [i_4 - 2] [i_3]) ? 6485088286883209412 : (arr_8 [i_4 + 1] [i_4 + 1] [i_3])));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_18 -= 1682431044;
                                var_19 += ((4095 ? (arr_17 [7]) : ((~(arr_1 [i_2] [i_2])))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_20 = (max((((!(arr_3 [i_3] [i_3] [i_7])))), (((arr_4 [i_2]) ? (arr_3 [i_7] [i_3] [i_2]) : (arr_4 [i_2])))));
                    var_21 = (arr_1 [i_7] [i_7]);
                }
                var_22 &= ((((~(arr_13 [12] [12])))) ? (((arr_13 [i_2] [i_2]) << (((arr_13 [i_3] [i_2]) - 25048)))) : ((-(arr_13 [i_2] [i_3]))));
            }
        }
    }
    #pragma endscop
}
