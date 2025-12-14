/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_17 ^= (arr_0 [i_1] [i_0]);

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_18 = var_8;
                    var_19 = ((((1 ? (arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 2]) : var_8)) <= (((~1) ^ var_11))));
                    var_20 += (min(var_1, (((arr_6 [i_1 - 3] [2]) << (var_7 - 1)))));
                }
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    var_21 = (min(var_21, ((max(((6003512153807834626 ? 0 : 53738)), (arr_3 [i_0] [i_3 + 1]))))));
                    var_22 = (!(((arr_0 [4] [i_0]) || 14)));
                    var_23 = var_15;
                }
            }
        }
    }
    var_24 = (min(var_1, (((max(-105, 111))))));
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_25 &= ((((var_8 / (arr_13 [20])))));
                                var_26 = (max(var_26, ((((min((arr_11 [i_7] [19]), var_8))) <= (max((arr_15 [8]), ((((-9223372036854775807 - 1) ? var_13 : var_14)))))))));
                                var_27 = (arr_23 [i_4] [i_4 - 2] [i_4 - 1] [i_4 - 3] [i_4] [2]);
                                var_28 *= ((((((arr_22 [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 - 1] [14]) ? (arr_22 [i_4 - 3] [i_4] [i_4 + 1] [i_4 + 1] [16]) : var_2))) && ((!(var_4 && var_11)))));
                            }
                        }
                    }
                    arr_24 [i_4] = ((((min(105, 1))) & ((((var_7 - (arr_13 [i_4]))) / var_0))));
                }
            }
        }
    }
    #pragma endscop
}
