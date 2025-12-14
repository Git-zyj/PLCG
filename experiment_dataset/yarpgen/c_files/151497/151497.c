/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0 + 1] = var_4;
                var_17 = (!-24);
                var_18 ^= (arr_2 [i_0 + 1]);
                var_19 = (min(var_19, (arr_0 [1] [9])));

                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_20 += ((+((((min((arr_2 [i_0]), 12))) ? ((((arr_2 [5]) ? -115 : (arr_5 [i_1])))) : var_6))));
                    var_21 = 1;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_14 [i_5] = (arr_10 [i_3] [i_3] [i_3]);
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_22 = (min(var_22, (arr_10 [i_4] [i_5] [1])));
                                arr_19 [i_7] [i_4] [i_5] [i_6 - 3] [i_7] = ((((min(19961, var_5))) ? (max((21 + -1763138690), (-121 == 26763))) : (arr_10 [i_3] [i_3] [i_3])));
                            }
                        }
                    }
                    var_23 = ((((171 ? var_7 : (arr_8 [i_5]))) / (((min(var_4, (arr_8 [i_3])))))));
                }
            }
        }
    }
    #pragma endscop
}
