/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = (max((10172673650916698058 != -2038120754), 15203828692288378088));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_2] [i_2] [i_2] [i_1] = 76;
                                arr_16 [i_3] [i_3] [1] [i_1] [i_3] = 2038120754;
                            }
                        }
                    }
                    arr_17 [i_1] = 8274070422792853563;
                    arr_18 [i_1] [i_2] = (arr_2 [i_0]);
                }
            }
        }
    }
    var_18 = (1 && 15203828692288378088);
    #pragma endscop
}
