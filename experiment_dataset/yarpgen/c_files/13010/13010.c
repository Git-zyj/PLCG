/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_1] [18] = ((((max(var_0, (arr_4 [i_1])))) ? (~0) : (((!(((~(arr_8 [1] [i_2] [i_2])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 *= ((((((arr_18 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]) ? (arr_7 [i_0] [i_1] [i_2] [i_3]) : (arr_18 [i_0] [i_1] [i_2] [i_3] [i_4 - 1] [i_0])))) ? (arr_4 [i_0]) : ((var_2 ? var_14 : (arr_5 [1] [i_3] [i_4 - 2])))));
                                arr_19 [i_0] [11] [15] [i_0] [11] [i_0] = (((-9223372036854775807 - 1) ? 9223372036854775807 : 4294967295));
                                var_18 ^= var_16;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                arr_26 [i_5] [2] [i_6] |= ((0 ? 15 : 15));
                arr_27 [i_5] [i_5] [i_5] = ((!(arr_0 [i_6] [i_6])));
            }
        }
    }
    var_19 *= var_7;
    var_20 = var_0;
    #pragma endscop
}
