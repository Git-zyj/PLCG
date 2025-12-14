/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 |= (!var_16);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [1] [10] [16] [16] = ((51835 > (((((-(arr_3 [i_2])))) ? ((max(1, (arr_5 [i_0 - 1] [0] [i_0])))) : ((50 ? -16 : 148))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] = ((-(18446744073709551600 == 120)));
                                var_19 = ((~(arr_5 [i_1 + 1] [i_1 + 1] [i_4])));
                                var_20 = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
