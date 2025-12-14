/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (1765153797454398390 * ((max(-32760, 1720109474))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 += (arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 *= (arr_2 [i_0]);
                                var_20 -= (max(801, var_3));
                                arr_12 [i_1] [i_4] [i_3] [i_2] [i_1] [i_1] = ((arr_6 [i_3] [i_3] [i_3] [i_1]) + (arr_6 [i_3] [i_3] [i_3] [i_1]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((-2056412228 ? -2056412244 : -7597));
    var_22 |= var_11;
    #pragma endscop
}
