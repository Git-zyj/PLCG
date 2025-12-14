/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_17 ^= ((!(arr_4 [i_2] [i_1] [i_2])));
                        var_18 -= (arr_3 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((max(29785, ((max(-19519, 13945))))))));
                                arr_16 [i_0] [i_0] [i_1] [i_2] [i_4] [i_1] [i_5] = (min(var_13, (((-(arr_14 [i_1] [i_4] [i_2] [i_1] [i_5] [i_4] [i_5]))))));
                            }
                        }
                    }
                    var_20 += ((+((min((arr_3 [i_2]), (arr_10 [i_2] [i_1]))))));
                    var_21 = (min(var_21, (((((((arr_4 [i_2] [i_0] [i_2]) + (arr_4 [i_0] [i_0] [i_0])))) && (((-(arr_12 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2])))))))));
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_19 [i_6] = ((~((min((arr_10 [0] [i_6]), (arr_1 [i_6]))))));
        var_22 = (max(var_22, ((min((min((((arr_13 [i_6] [i_6] [i_6] [i_6] [i_6]) ? 4061 : -19520)), (arr_3 [i_6]))), (((min(741768549, 1)))))))));
    }
    var_23 = ((var_1 ? 4925 : ((-617228734 ? var_1 : var_12))));
    var_24 = ((-((27520 + (min(10312502163759083531, 2174124285))))));
    #pragma endscop
}
