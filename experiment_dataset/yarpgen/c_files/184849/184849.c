/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (max((max(6072479735659590291, (min(-6072479735659590291, -6072479735659590268)))), var_11))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = 21;
                    var_14 = ((var_9 << (((min((arr_5 [i_2] [1]), ((6072479735659590291 ? (arr_0 [i_1] [14]) : var_8)))) - 11026946776885505947))));
                }
            }
        }
        var_15 = ((((((var_6 ? var_1 : (arr_1 [i_0] [i_0])))) ? (((((arr_1 [i_0] [i_0]) > var_10)))) : var_7)));
        arr_9 [i_0] = (((arr_7 [i_0] [i_0] [i_0]) & (min(-1533083405, (arr_5 [i_0] [i_0])))));
        var_16 = ((max((max(2147483647, (arr_5 [i_0] [i_0]))), (!1186911758))) < (667337952 && -120));
        var_17 = max(var_8, ((min((arr_1 [5] [i_0]), (arr_1 [i_0] [i_0])))));
    }
    var_18 ^= var_6;

    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        var_19 = ((((((min(var_4, var_7))) ? var_11 : -var_8)) | (((max((arr_11 [i_3 + 2]), (arr_12 [i_3] [i_3 + 2])))))));
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    {
                        var_20 |= (max((((5189529126539749320 || 5189529126539749320) ? (max(0, var_12)) : ((max((arr_11 [i_5]), var_6))))), var_11));
                        arr_21 [i_5] [i_5] [0] [i_4] = ((~(max(987836582, (arr_18 [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_4])))));
                    }
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 11;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = var_4;
        arr_25 [i_7] = (-2147483647 - 1);
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        arr_28 [8] [i_8] = ((!((max((arr_7 [i_8] [i_8] [i_8]), (min(var_6, var_2)))))));
        var_21 = (((((max(var_8, var_3)))) || (((var_4 ? -5189529126539749291 : var_9)))));
        var_22 = (max(var_22, ((min(var_6, var_6)))));
        var_23 = ((((((max(5189529126539749308, var_9))) ? ((var_1 ? (arr_0 [i_8] [4]) : var_5)) : ((min(1630609037, var_3))))) + var_6));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        arr_33 [0] = ((((max(var_5, (arr_14 [i_9])))) ? (((((arr_4 [i_9] [i_9]) > var_5)))) : (~1099511627775)));
        arr_34 [i_9] = (-1203784942 <= var_4);
        var_24 = (max(var_24, ((min((!-48), 6072479735659590291)))));
        var_25 &= ((!(((var_5 ? (arr_11 [i_9]) : (arr_11 [i_9]))))));
    }
    var_26 = var_0;
    #pragma endscop
}
