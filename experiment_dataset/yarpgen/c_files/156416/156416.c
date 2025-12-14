/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_0] = 33550336;
                    arr_11 [i_2] [i_2] [i_2] [9] = (((!(arr_4 [i_2 + 1] [i_2 + 2]))));

                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        arr_16 [i_2] [i_1] = ((254 ? 43628 : 1));
                        arr_17 [i_2] = (arr_15 [i_1 - 1] [i_2 + 2] [i_3 - 2] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_2] [i_2] [i_2] = ((-(arr_18 [i_0] [3] [21])));
                        var_18 = 5106508501719114113;

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_19 &= arr_15 [i_1] [i_1] [i_1 + 2] [i_5];
                            arr_24 [i_0] [i_0] [13] [17] [i_2] [i_5] = ((-347308135 ? 6793477835229189269 : (((~(arr_13 [i_1 + 1] [i_1 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    var_20 -= var_7;
    var_21 = var_13;
    #pragma endscop
}
