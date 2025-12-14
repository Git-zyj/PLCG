/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [12] &= ((((arr_0 [16] [16]) ? (arr_0 [6] [i_0]) : var_7)));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_11 = (arr_1 [i_0]);
            arr_6 [4] [i_0] [i_1] = ((!((((min(var_6, var_2)))))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_12 += 1;
            var_13 += ((-(arr_8 [i_0])));
            var_14 = (max(var_14, var_2));
            arr_9 [i_0] = (((20969 ? 44575 : 18446744073709551598)));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_15 = ((((~(240 && var_10)))) != (((-127 - 1) ? 9223372036854775807 : ((((6006588330969856750 == (-127 - 1))))))));
            var_16 = (min(var_16, (!-var_0)));
            var_17 = ((((-32767 - 1) ? -1 : 14559)));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        var_18 -= ((+((+(((arr_15 [i_4]) ? var_10 : (arr_13 [19])))))));
                        var_19 = var_9;
                        var_20 = 967773739;
                        var_21 -= (((~((max(110, (arr_12 [i_4] [i_4])))))));
                    }
                }
            }
            var_22 = var_5;
            arr_18 [i_0] = (((~(arr_15 [i_0]))));
        }
        var_23 = (min(((min(((max(var_4, 44567))), ((1 >> (((arr_15 [5]) + 22216))))))), (~var_4)));
        var_24 |= (((arr_8 [i_0]) == ((min(((1 ? -1197759748 : 7)), 230)))));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        arr_21 [i_7] = (((max((6006588330969856743 + -110), 127)) >= ((60 ? 1042114038 : 8225097987773417560))));
        var_25 += var_8;
        var_26 = ((1 < ((~(arr_20 [i_7] [i_7])))));
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {
                arr_28 [i_8 - 1] [i_8] = ((((44567 ? -1859425648 : 132)) == ((min(var_4, var_6)))));
                var_27 = (arr_27 [i_8]);
            }
        }
    }
    #pragma endscop
}
