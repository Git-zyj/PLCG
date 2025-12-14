/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (min((arr_0 [i_1]), ((((((!(arr_5 [i_2] [i_0])))) >= (((!(arr_6 [i_0 + 2])))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            arr_14 [i_0] = ((!(arr_2 [i_0 + 3] [i_1 - 1])));
                            var_17 ^= ((128 ? 121 : 119));
                            var_18 = (max(var_18, (((~((2299925725904235915 ? 1 : 1)))))));
                            var_19 = (15328 && 0);
                            var_20 = (1 >> 19);
                        }
                        var_21 = (!0);
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_22 = ((35 ? ((35 - (arr_2 [i_0 + 2] [i_2 + 1]))) : (((max(var_1, (!2)))))));
                        var_23 = (((((5946 ? (~105) : -18903))) - ((-(max(1, 144115188075855872))))));
                        var_24 = 4294967295;
                    }
                }
            }
        }
    }
    var_25 |= -var_8;
    var_26 = 253;
    #pragma endscop
}
