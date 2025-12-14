/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_15 += (arr_4 [i_1] [i_1] [6]);
                            var_16 ^= (max((((arr_2 [i_0]) && (((arr_1 [6]) || (arr_6 [i_0] [i_1] [i_2]))))), var_10));
                        }
                    }
                }
                arr_12 [i_0] = (min(9, ((var_11 ? var_4 : (arr_11 [i_1] [i_1] [i_1 - 1])))));
                var_17 -= (((arr_10 [i_0 - 4] [9] [i_0 - 1] [i_0 - 2] [5]) << ((((max((arr_11 [1] [1] [i_1]), -62)) != (108 % var_8))))));
            }
        }
    }
    var_18 *= ((var_12 ? var_0 : var_4));
    var_19 = (min((((-13175 ? (1 & 78) : ((1683760951 << (((var_2 + 21008) - 19))))))), ((var_7 ? var_13 : (3319842223742717863 / 218)))));
    var_20 = ((var_3 <= ((max(var_8, -1753445063438082906)))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                arr_19 [i_5] = var_1;
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_21 -= var_2;
                            arr_26 [14] [i_7] [11] [i_7] = (max((((8018 / ((var_8 ? 1 : var_10))))), (((arr_17 [i_4] [i_4]) ? (arr_17 [i_7 - 1] [10]) : (arr_21 [i_4] [i_4] [i_4])))));
                            arr_27 [i_4] [3] [4] [i_7] [i_7] = ((220 > ((var_12 ? (arr_13 [i_6]) : -1))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
