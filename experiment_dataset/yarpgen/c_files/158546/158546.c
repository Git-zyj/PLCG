/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((min(var_5, (max(2862678096, 107)))));
                    var_17 = (min(15829171123769084408, 0));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((((min((arr_4 [i_0 - 2] [i_0] [i_2]), var_12)) << ((var_13 / ((162 ? 15829171123769084432 : var_10)))))))));
                                var_19 += var_5;
                                var_20 = (min(((max(2, 4294967288))), (max(2988362736990792354, var_12))));
                            }
                        }
                    }
                    var_21 = ((+(((arr_5 [i_2 + 2] [i_0 + 2] [i_0] [i_1]) ? (178 && 317036367) : var_14))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_22 = ((2113094411 || (var_5 && var_13)));
                                var_23 = (!192);
                                var_24 = (329385229 < 2382099996261861964);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 ^= var_4;
    #pragma endscop
}
