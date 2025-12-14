/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, -var_7));
                                var_17 = (0 == 18446744073709551615);
                                var_18 = (min(var_18, var_4));
                                arr_16 [i_0] = (1 << 21);
                            }
                        }
                    }
                    var_19 &= var_11;
                    var_20 = (min(var_20, -1));
                    arr_17 [i_0] [i_0] [i_2] = ((((-(arr_5 [i_1 + 1] [i_0 + 1] [i_0]))) == (((var_9 > (arr_11 [14] [i_1] [i_2] [14] [i_1]))))));
                    arr_18 [5] [i_1] [i_1] = ((!(arr_7 [i_1])));
                }
            }
        }
    }
    var_21 *= (min(((~((var_8 ? var_7 : 16)))), ((((235 >> 1) > -235)))));
    #pragma endscop
}
