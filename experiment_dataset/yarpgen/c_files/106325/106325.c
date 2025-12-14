/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_10 += ((var_5 * (arr_3 [i_2 + 4] [i_4 + 4])));
                                arr_11 [i_0] [i_0] [i_2] [i_3] [15] = var_2;
                            }
                        }
                    }
                }
                var_11 |= ((-1063528935 || ((!(arr_8 [i_0] [i_1] [i_1] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 7;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_12 *= (var_6 * (min(var_0, 1063528936)));
                            arr_26 [i_5 + 1] [i_5] [i_7 + 3] [i_7 - 1] [i_8] [9] = ((min((arr_5 [5] [i_7 - 1] [i_5]), (arr_7 [i_7]))));
                            var_13 -= (arr_16 [i_5] [i_7 + 3]);
                        }
                    }
                }
                var_14 &= ((!(((-(arr_19 [i_5 + 1]))))));
                var_15 -= (arr_7 [i_6]);
                var_16 *= ((((((arr_19 [i_5 - 3]) ? 1961317214 : (arr_19 [i_5 - 1])))) ? (((((~(arr_6 [i_5] [i_6] [i_6] [i_6])))) ? var_6 : (~var_4))) : (!1183620169)));
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
