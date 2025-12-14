/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min((1 % 30), var_7);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_20 &= (arr_2 [i_0]);
            var_21 = (max(var_21, 274341036032));
            arr_5 [i_0] [12] = (arr_3 [i_0] [i_1]);
            arr_6 [i_0] = (arr_0 [i_1] [i_0]);
        }
        arr_7 [i_0] |= -4395134860328482422;
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_10 [i_2] = (max(var_14, (arr_2 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 10;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [6] [i_4] [i_5] [i_6] = ((min(8880434094025276352, (arr_12 [i_2] [i_3]))));
                                var_22 = (max(var_22, ((((arr_4 [i_3 + 1] [i_4 + 2]) ^ ((-(arr_4 [i_3 - 1] [i_4 - 4]))))))));
                            }
                        }
                    }
                    arr_22 [i_3] [i_3] [7] = (arr_18 [i_2] [i_3] [i_4] [i_3] [i_4 - 1] [i_3]);
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_23 *= (min((~var_1), 1));
        arr_25 [1] [i_7] = (max((((178 > (arr_24 [4])))), (max((-9223372036854775807 - 1), (arr_24 [i_7])))));
        arr_26 [i_7] [i_7] = 19;
    }
    var_24 = (min(var_8, (var_9 << var_3)));
    var_25 = (!var_4);
    var_26 = var_13;
    #pragma endscop
}
