/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((((((((var_11 ? 21849 : var_6))) ? 43695 : ((var_17 ? var_10 : 37096))))) ? 649603805971417600 : var_12));
    var_21 = (min((var_7 && var_19), var_9));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_22 &= (((((~((min(var_16, (arr_0 [15] [i_0]))))))) ? (arr_1 [i_0] [i_0]) : ((-((~(arr_1 [i_0 + 1] [i_0])))))));
        arr_2 [i_0] = (arr_0 [i_0] [15]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = var_9;
        var_23 = (-4272 % 1091714145);
        var_24 = 43687;
        arr_6 [i_1] |= var_7;
        arr_7 [i_1] = 21861;
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        arr_10 [13] = ((~((-((((arr_4 [i_2] [18]) >= 0)))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_17 [i_2] [i_2] [i_3] = ((((arr_8 [i_2 - 1] [i_3]) != 0)) ? (((((21840 ? 220421791 : 0)) % ((var_17 ? var_18 : 255))))) : var_10);
                        arr_18 [i_2] [i_4] [i_2] [i_4] |= (arr_0 [i_2] [19]);
                    }
                }
            }
        }
        var_25 += (((arr_15 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [4]) >= ((min((arr_15 [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2] [16]), var_14)))));
        var_26 = 0;
    }
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_25 [i_7] [i_6] [i_6] = ((-21842 ? ((-97 ? 43670 : 3920427987)) : (((-((var_9 ? (arr_23 [14] [i_7]) : 0)))))));
            var_27 = (((min(((max(-24, var_13))), (arr_24 [i_6] [i_6]))) - (max(var_1, -108))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_28 = (arr_20 [i_6] [i_6]);
            arr_28 [i_6] [14] [i_6] = var_3;
            var_29 *= 1;
            arr_29 [i_6] [i_6] [i_6] = (((arr_19 [i_6]) == (arr_23 [i_6] [i_8])));
        }
        arr_30 [i_6] [i_6] = (((((var_10 ? var_11 : (arr_3 [i_6 - 1])))) ? ((min(827666252, 2618106271))) : ((var_4 ? (arr_3 [i_6 + 1]) : (arr_3 [i_6 - 1])))));
        arr_31 [i_6] = (min(2540697144, 3514077749));
    }
    #pragma endscop
}
