/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((((min(-3878, (arr_1 [i_2] [i_4]))) / (min(-1, (arr_1 [i_0] [i_4]))))))));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (-127 - 1);
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_3] = 192;
                                arr_14 [i_0] [i_0] [i_4] [i_3] [i_4] |= (min((-27437 ^ 175), var_1));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_20 = (min(87, (((arr_15 [i_0] [i_1] [i_5] [i_6]) << (((min(76, var_5)) - 71))))));
                            arr_20 [i_0] [i_0] [9] [i_0] = 5379;
                            var_21 -= (((-11935 ^ (arr_18 [i_5] [i_2] [i_0]))));
                            var_22 = (min(var_22, (((((max((arr_3 [7]), ((((arr_1 [i_0] [i_1]) / (arr_10 [i_0]))))))) ? (arr_7 [i_1] [i_1]) : (min((arr_16 [i_0] [3] [i_0] [3] [i_0]), -118)))))));
                        }
                        arr_21 [i_0] [i_0] [i_1 - 3] [4] [i_0] [i_5] = ((!((min((min(27458, 12293337016845770241)), (27458 == var_2))))));
                        var_23 = (max(var_23, (((-(min((arr_7 [i_1 - 2] [i_1 - 2]), (arr_7 [15] [i_1 - 2]))))))));
                    }
                }
                arr_22 [i_1] = -14603;
                var_24 *= (max(-13431, (arr_15 [i_1] [i_1] [10] [i_0])));
            }
        }
    }
    var_25 = var_5;
    var_26 = (max(var_26, -64));
    #pragma endscop
}
