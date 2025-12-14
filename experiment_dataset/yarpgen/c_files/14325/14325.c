/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = (min((((+((-8 ? (arr_8 [i_0] [i_4]) : (arr_7 [i_4])))))), ((-(((arr_11 [i_0] [15]) ? -9223372036854775799 : (arr_10 [i_2] [i_3 - 2] [i_4])))))));
                                var_16 = (((arr_8 [i_0] [i_0]) ? var_3 : -11286244357552864909));
                            }
                        }
                    }
                    arr_12 [i_0] = 11009676257893699732;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_17 *= (arr_0 [21]);
                                var_18 = -44;
                                var_19 &= var_13;
                                var_20 = (--123);
                                var_21 = (((-127 - 1) ? ((min(((max((arr_1 [i_2]), 227))), var_5))) : ((~(arr_0 [i_2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 |= min(var_11, var_11);
    #pragma endscop
}
