/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((min(var_11, var_2))) ? (var_6 % var_1) : ((max(var_3, var_3))))) * var_2));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (max((max(47, (~13))), ((((((arr_5 [i_0 - 2] [i_1]) | var_4))) ? ((max((arr_1 [i_0]), (arr_4 [i_0] [i_0] [1] [i_0])))) : (var_6 | 13)))));
                    arr_8 [i_0] = (((((var_2 + var_2) & -5251)) << ((-(!var_5)))));
                }
            }
        }
        arr_9 [i_0] = (arr_4 [i_0 + 1] [i_0] [i_0] [i_0 + 1]);
        arr_10 [i_0] [i_0] = (-4332907251719274419 > 16128);
        var_13 *= (!(((((min((arr_6 [i_0] [i_0]), (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])))) ? ((var_0 ? 9223372036854775780 : 4332907251719274426)) : (((var_2 << (((arr_6 [i_0] [i_0 - 2]) + 6784)))))))));
        var_14 = (min((((((var_5 ? var_0 : (arr_6 [i_0 + 1] [i_0]))) <= (arr_1 [i_0])))), (4332907251719274418 + var_6)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            arr_16 [i_4] [19] [i_4] = (((-4332907251719274419 == 2950502181871349147) % (arr_11 [20] [i_3])));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_21 [i_6] [i_4] [i_4] [i_4] [14] = (((arr_20 [i_3] [i_4 - 1] [i_4] [i_4] [i_3]) | (arr_20 [1] [i_4 - 1] [i_4] [i_4] [i_6])));
                        arr_22 [i_4] [i_4] = ((var_8 && (arr_20 [i_4 - 1] [i_5 + 1] [i_4] [i_5 - 2] [i_6 + 1])));
                    }
                }
            }
        }
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            var_15 = ((-((var_8 ? var_2 : 166))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_33 [i_3] [i_3] [i_8] [i_9] [i_10] = (arr_20 [i_10 + 2] [i_10 + 4] [i_9] [i_10] [i_10 + 4]);
                            var_16 = var_1;
                        }
                    }
                }
            }
        }
        arr_34 [i_3] = 18167;
        arr_35 [i_3] [i_3] = 184;
    }
    var_17 |= ((!9223372036854775755) == (~var_10));
    #pragma endscop
}
