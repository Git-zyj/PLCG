/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_7 << (((max(((252577125 << (15405 - 15403))), (var_6 != var_15))) - 1010308483))));
    var_19 = (min(var_19, var_4));
    var_20 *= (55808 < var_4);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_21 = ((((min(var_1, var_13))) ? var_12 : 33798));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_22 += (var_6 ? (arr_3 [i_0]) : (min(65535, var_14)));
                    arr_8 [i_0] = ((((var_16 ? 59751 : 62) << ((((var_2 << (193 - 181))) - 156528632)))));
                }
            }
        }
        var_23 = 70;
        var_24 = (min(var_24, 155));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {
                {
                    var_25 = (max(var_25, var_4));
                    var_26 = (min(var_26, -6138));
                    arr_18 [i_5] [i_5] [i_3] = (min((((!(((233 << (11673 - 11664))))))), 255));
                }
            }
        }
    }
    #pragma endscop
}
