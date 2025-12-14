/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (max((!-8165591561558254713), ((18446744073709551615 <= (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = (arr_7 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 = (arr_0 [i_0] [i_0]);
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [19] = (~8165591561558254713);
                            }
                        }
                    }
                }
            }
        }
        var_13 += (((arr_10 [i_0] [i_0] [2] [i_0] [i_0]) >= -79));
        var_14 ^= arr_16 [i_0] [i_0] [i_0] [14] [i_0] [14] [14];
        var_15 *= (!1076628562);
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_16 ^= (max(((18014772230539652281 ? -8165591561558254697 : 14609271357365736267)), (arr_18 [i_5])));
        arr_20 [i_5] = ((min(18014772230539652281, -120)));
        var_17 = ((-(arr_18 [i_5])));
        arr_21 [i_5] = ((~(arr_19 [10])));
        arr_22 [i_5] = (max((~1495611931), ((~(arr_19 [i_5])))));
    }
    var_18 = var_3;
    var_19 = (((~-8165591561558254697) < var_4));
    #pragma endscop
}
