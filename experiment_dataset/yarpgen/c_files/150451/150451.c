/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((177 ? var_9 : var_0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = arr_3 [i_0] [i_1];
                var_12 += (min(-8199205646271777334, (arr_0 [i_0 - 1] [i_0])));
                var_13 += ((((arr_1 [i_0 - 1]) ^ (arr_2 [i_0 - 1]))));
            }
        }
    }
    var_14 |= var_4;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_15 = (max(((((min(183, (arr_6 [i_3])))) ? ((2696295113626477767 >> (var_4 - 32027))) : (arr_13 [i_2] [i_2] [i_4] [i_6]))), (((!(((arr_7 [i_4] [i_6]) >= var_7)))))));
                                var_16 = (min((((var_5 <= (~78)))), (((arr_5 [i_2] [i_2]) ? ((255 ? (arr_9 [i_3]) : 6294546427642634224)) : var_0))));
                            }
                        }
                    }
                }
                var_17 = (max(var_17, (((((((arr_15 [i_2] [i_2] [i_2] [i_3] [i_3]) ? (arr_6 [i_2]) : 12152197646066917393)) ^ (max(var_2, 12152197646066917371))))))));
            }
        }
    }
    #pragma endscop
}
