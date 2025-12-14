/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 ^= (min(((32767 ? (arr_0 [i_0] [i_0]) : 36)), (((max((arr_2 [i_0]), (arr_2 [i_0]))) * (240 % -1)))));
                var_18 += (((((max(-11, 32758)))) ? (arr_1 [i_0]) : (min(var_6, (arr_1 [i_0])))));
                arr_4 [i_0] [i_1] [4] = ((((arr_2 [i_1]) ? (min(-955514123, 127)) : 4064)));
                arr_5 [i_0] [4] = (arr_0 [i_1] [i_0]);
            }
        }
    }
    var_19 = (130 / -1);
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_20 = (~(((arr_6 [i_2 + 2]) ? (arr_3 [1] [1] [i_2 + 2]) : (max((arr_2 [9]), var_5)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 10;i_6 += 1)
                            {
                                var_21 -= -37;
                                var_22 = min((var_0 - 4064), (min(((1 << (49 - 23))), (arr_0 [i_5] [i_6]))));
                            }
                            arr_18 [i_2 + 2] [i_3] [i_3] [7] [i_5] = (((max(-4, 18446744073709551615)) * ((((arr_10 [i_3] [7]) / var_5)))));
                        }
                    }
                }
                arr_19 [i_2] [i_2] [i_3] = ((((max((arr_12 [7] [i_2 + 3] [i_2 + 3] [i_3]), -34))) % (~1)));
            }
        }
    }
    #pragma endscop
}
