/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (((+((((2147483647 * var_13) > var_3))))))));
                                var_16 = (min(var_16, (((-(((!(arr_9 [i_0] [0] [i_0 + 1] [1] [i_0 + 2])))))))));
                            }
                        }
                    }
                }
                var_17 = (max(var_17, (!-22)));

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_18 = ((var_10 ? var_14 : (((var_11 > (arr_3 [i_0]))))));
                    var_19 += 28;
                }
            }
        }
    }
    var_20 -= 223;
    #pragma endscop
}
