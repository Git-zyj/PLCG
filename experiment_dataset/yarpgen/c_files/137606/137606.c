/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    var_19 = (min(var_14, var_4));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(var_20, 1));
        var_21 ^= min((max((max(202, var_1)), var_8)), 1);
        var_22 = (min(var_22, (((1273737245 - (min(((112 ? -4938178927575560918 : var_11)), 121)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_23 &= 11793;
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_12 [i_2] = (!var_8);
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_24 -= -29989;
                                var_25 *= ((1 ? ((((-127 - 1) != var_13))) : var_2));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_22 [i_1] [i_1] [i_1] &= 45999;
                                var_26 += 54680;
                                var_27 = (max(var_27, 343300362));
                            }
                        }
                    }
                    arr_23 [i_2] = (4945 == var_12);
                }
            }
        }
    }
    var_28 = (!var_0);
    #pragma endscop
}
