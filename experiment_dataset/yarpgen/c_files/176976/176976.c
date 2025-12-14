/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((((((var_11 ? var_15 : 9))) < var_5)));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((((arr_1 [i_0 + 2]) ? 1 : ((var_12 ? -55 : 133)))));
        var_17 = (min(var_17, 3815888142));
    }
    var_18 = -59;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_19 = (~var_7);

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_20 = (max(var_20, (((-69 || (var_12 / -3561410421618575216))))));
                        arr_14 [i_1] [i_1] |= (arr_11 [i_1] [i_3 - 2] [1] [12] [i_2]);
                    }
                }
            }
            var_21 = (min(var_21, var_12));
        }
        var_22 = ((-1888365097 ? var_9 : (arr_12 [i_1] [i_1])));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_23 = (var_5 ? ((((min(var_6, var_9)) < (((-2147483647 - 1) ? -63 : var_11))))) : ((((((-95 || (arr_16 [i_5])))) > var_10))));
        arr_18 [i_5] = (!(arr_9 [14] [i_5] [i_5] [i_5]));
        arr_19 [i_5] = (min((arr_10 [i_5] [i_5] [i_5]), (-9223372036854775807 - 1)));
    }
    for (int i_6 = 4; i_6 < 8;i_6 += 1)
    {
        var_24 = ((((((-55 ? (arr_16 [i_6]) : 139))) ? -1888365097 : (arr_4 [i_6 - 2]))));
        var_25 = (min((~9223372036854775792), ((((((arr_20 [i_6] [i_6 - 1]) + 2147483647)) >> (((arr_12 [i_6] [i_6]) + 1802214779)))))));
        arr_22 [i_6] [i_6] = (0 < 2147483647);
    }
    #pragma endscop
}
