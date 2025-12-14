/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (-12251880003740748196 ^ var_4);
        var_13 = var_10;
        var_14 = var_10;
        var_15 = (min(var_15, ((((var_11 ? 810789631 : var_12))))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_16 = (min(var_16, ((((max(1488333353, 35878)))))));
        var_17 = (max(var_17, 13083011784356353326));
    }

    for (int i_2 = 4; i_2 < 16;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_12 [i_2] [i_3] = var_2;
            arr_13 [i_2] [i_2] [i_3] = ((2777691949 > (arr_9 [i_2 + 3] [i_2 + 3] [i_2])));
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_2] [i_4] = ((((arr_9 [i_5] [i_4] [i_2]) - (arr_10 [i_5]))));
                        var_18 = ((((arr_7 [i_2]) * 0)));
                        var_19 = var_3;
                        var_20 = -3678397444;
                        var_21 = (arr_7 [i_2 - 2]);
                    }
                }
            }
        }
        arr_20 [i_2] [i_2] = arr_8 [i_2];
        arr_21 [i_2] = (arr_9 [i_2] [i_2] [i_2]);
    }
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        var_22 = var_7;
        var_23 = (i_6 % 2 == 0) ? ((((((11 * (!616569864)))) || ((min((min(var_12, (arr_23 [i_6]))), ((var_2 << (((arr_22 [i_6]) - 11036456149562188359)))))))))) : ((((((11 * (!616569864)))) || ((min((min(var_12, (arr_23 [i_6]))), ((var_2 << (((((arr_22 [i_6]) - 11036456149562188359)) - 6014105622475295814))))))))));
        arr_26 [i_6] = (((((~(arr_16 [i_6] [i_6] [i_6])))) ? 1 : (((((arr_24 [i_6]) ? (arr_7 [i_6]) : var_9)) % 23))));
    }
    var_24 *= var_6;
    #pragma endscop
}
