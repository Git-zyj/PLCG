/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [2] = -var_9;
        arr_3 [4] [i_0] = var_6;
        var_14 = -1744;
        arr_4 [i_0] = ((((max(((-2485756022788894015 ? 4675979184800791530 : (arr_1 [i_0]))), (arr_0 [i_0] [i_0])))) ? ((((221 != 67108863) == (arr_1 [i_0])))) : -6));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_15 += (min(var_2, -var_7));
        arr_7 [i_1] = 8597183120568486553;
        var_16 = -67108863;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_17 = 9085695276258742865;
        var_18 *= ((67108882 >> (var_4 + 19419)));
        var_19 = (((arr_8 [i_2]) / 7500304128896202491));
    }

    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        arr_12 [i_3] = max(67108853, ((-(-1 < 20728))));
        var_20 = var_12;
        var_21 ^= ((((((arr_9 [i_3] [i_3 + 1]) >= 6539770521740679626))) >> (((((arr_9 [i_3] [i_3 + 1]) << (((arr_9 [i_3 - 1] [i_3 + 1]) - 15)))) - 8650748))));
        arr_13 [12] = (min((arr_11 [i_3 - 1]), 255));
        arr_14 [4] [i_3] = -127;
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                var_22 = (((148 <= 20728) ? ((-(arr_17 [i_4] [i_4]))) : ((-(((13297825094598551844 && (arr_17 [i_4] [i_5]))))))));
                arr_19 [i_5] [i_5] = (((((-((6539770521740679610 ? (arr_17 [i_4] [10]) : (arr_16 [i_4])))))) ? 1 : (((arr_18 [16]) ? (-32407 != var_12) : -1))));
            }
        }
    }

    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        arr_22 [i_6] = (max((((+(((arr_16 [3]) ? -1 : 23438))))), (((arr_18 [i_6]) ? (arr_16 [i_6]) : (arr_15 [i_6] [i_6])))));
        arr_23 [i_6] [i_6] = ((((((((-1257212809725320878 % (arr_20 [i_6])))) ? -20721 : (arr_20 [i_6])))) ? (((arr_15 [i_6] [18]) % ((min(24, 1674823634))))) : 25403));
    }
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 22;i_9 += 1)
            {
                {
                    arr_31 [1] [1] [i_9 - 1] [i_9 - 1] = (min((((231474118 << (6539770521740679625 - 6539770521740679625)))), (max((arr_18 [i_7 - 1]), (arr_18 [i_7 - 1])))));
                    var_23 = (arr_24 [i_7 + 1]);
                }
            }
        }
        var_24 += (max(-74790442456728824, 14388146580007124268));
    }
    #pragma endscop
}
