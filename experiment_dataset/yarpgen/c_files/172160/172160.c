/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 = 17623181710870547102;
                                var_13 = (((max(4026253026011364915, var_8)) / var_7));
                                arr_15 [i_3] = (arr_3 [i_0] [i_0]);
                                arr_16 [i_1] [i_3] [i_3] [i_1] [i_3] [i_1] = (max(-var_0, (arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_4])));
                            }
                        }
                    }
                }
                var_14 &= (((~3059209076) <= (arr_3 [i_0] [i_0])));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_5] [i_5] [i_6] [i_6 + 2] |= 280441394;
                                var_15 = (!var_9);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 *= ((+((((var_10 + var_5) <= (min(var_1, var_5)))))));
    var_17 = (max(var_17, var_5));
    var_18 &= var_1;
    #pragma endscop
}
