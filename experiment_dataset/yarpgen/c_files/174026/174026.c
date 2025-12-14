/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_11 = (min(((1 + (-2147483647 - 1))), (((-2147483647 - 1) ? 0 : 8195))));
                                var_12 = (((min(1, 0))) && ((min(9, (((-9223372036854775807 - 1) | 1))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_2] [11] = (max(((-98 ? 1 : -9)), -1));
                }
            }
        }
    }
    var_13 = ((-(var_4 * 1)));
    var_14 = (((((0 ? var_9 : 1))) + (max(var_7, ((27784 ? 15673594212360515803 : -117))))));
    var_15 = ((!(((~((14629490732382490805 ? 9 : 1)))))));
    #pragma endscop
}
