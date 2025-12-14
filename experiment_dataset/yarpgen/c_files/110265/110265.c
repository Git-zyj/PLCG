/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!-1979839040);
    var_21 |= var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, ((((((arr_1 [i_1]) & (((!(arr_7 [i_0] [i_1] [i_0])))))) << ((((~(arr_4 [i_0] [i_1] [i_1]))) + 620416060)))))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_23 += (((arr_12 [i_0] [i_1]) > ((((arr_3 [i_0] [i_0] [i_2]) != (arr_7 [i_0] [13] [19]))))));
                            arr_14 [i_4] [i_2] [i_2] [i_2] [i_0] = (arr_10 [i_0] [3] [i_1] [3] [17] [i_1]);
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_2] = (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]);
                        }
                        var_24 -= (arr_12 [i_1] [i_0]);
                    }
                    var_25 += (arr_8 [14] [i_1] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
