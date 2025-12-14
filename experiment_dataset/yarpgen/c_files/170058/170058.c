/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 ^= 894194926;
                                arr_13 [i_2] [i_3 - 1] [i_0] = 29;
                                arr_14 [i_0] = (min(((53485 << (2096640 - 2096627))), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_18 = (((-53479 ? -12731 : 29)));
                            arr_23 [i_0] [i_0] [i_6] [i_0] [i_0] [i_0] &= (arr_18 [i_1] [i_5] [i_6]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_35 [i_7] [i_8] [i_9] [i_7] = ((1 ? (~53502) : ((((!(arr_16 [i_7] [23])))))));
                            var_19 += ((((min((arr_20 [i_10] [i_8] [i_8] [i_7 - 1]), ((min(-12, 198)))))) ? 29 : (min(var_15, ((216781889194627377 ? 100 : 3175))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            var_20 ^= (min((min(226, (arr_25 [i_8]))), 1631615763607306579));
                            var_21 = (((max((max(18446744073709551612, 84)), 6)) ^ ((212 ? (arr_16 [i_11] [i_11 - 1]) : (arr_16 [i_11] [i_11 - 1])))));
                            var_22 = (min(var_22, (arr_2 [i_7] [i_7] [i_11 + 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
