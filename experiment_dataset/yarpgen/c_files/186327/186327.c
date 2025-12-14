/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -8165812904731232174;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = -2957;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, 1));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = (min(((max(var_1, 61853))), (((var_4 && -32764) ? var_5 : var_12))));
                                arr_17 [i_0] [i_0] [i_4] = ((((((arr_5 [i_0] [i_0]) ? var_5 : 4282167388253477187))) ? (max((max(646037891, var_5)), ((var_8 >> (var_7 + 2869758383540079541))))) : var_7));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_18 -= 32764;
                                var_19 = var_3;
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_7] = (32505856 && 64);
                                var_20 = -9223372036854775789;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
