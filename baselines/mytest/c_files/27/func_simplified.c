/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/27
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (min(var_4, ((+((min(var_0, var_4)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 2)
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 2)
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2)
            {
                {
                    var_17 = (arr_1 [i_0]);
                    var_18 = (((-(max(var_1, (-5095881884517144951LL))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 2)
                    {
                        for (int i_4 = 2; i_4 < 14; i_4 += 2)
                        {
                            {
                                var_19 = ((((((arr_7 [i_0 - 2] [i_0 - 1] [i_0]) ? -2147483647 : (arr_7 [i_0 + 1] [i_0 - 2] [i_0])))) ? (var_13 > 79) : ((+(arr_7 [i_0 - 2] [i_0 - 2] [i_0])))));
                                var_20 |= ((((((731150399U) ? 88 : var_13))) && ((((arr_11 [i_4 - 1] [i_3 + 1] [i_0 - 2]) ? var_6 : (arr_11 [i_4 + 1] [i_3 - 1] [i_0 - 3]))))));
                            }
                        }
                    }
                    var_21 = (min(var_21, ((max(1, (2783068569285757288LL))))));
                }
            }
        }
    }
    #pragma endscop
}
