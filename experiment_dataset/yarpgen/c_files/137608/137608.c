/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 14702084672243701112;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_19 = var_13;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    {
                        var_20 = 69;
                        var_21 += (((var_10 || var_9) ? (((var_16 ? var_16 : var_13))) : (((((-1502496554765032291 + (arr_14 [i_3 + 1] [i_0] [i_0] [i_0]))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_20 [i_0] [23] [i_0] [i_0] = -1502496554765032310;
                    var_22 = var_10;
                    var_23 &= ((((var_5 ? 9223372036854775807 : (arr_13 [i_0] [i_4 - 1] [i_4 - 1] [i_5])) % 1)));
                    arr_21 [i_0 - 1] [i_0] [i_0 + 1] = (((((!(arr_8 [i_4 - 2] [i_4 - 2] [i_4])))) << var_5));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        var_24 += ((var_5 || (((var_0 ? -1502496554765032291 : var_8)))));
        arr_25 [i_6 + 1] [i_6] = (min((min((arr_8 [i_6] [i_6] [i_6]), (min(var_14, var_5)))), (((86 ? (arr_2 [i_6 + 1]) : (arr_2 [i_6 + 1]))))));
        var_25 += (min(((var_9 ? (((((arr_6 [i_6] [i_6]) || 13777990944943076292)))) : (arr_12 [i_6 + 1]))), (((-25132 ? 186 : 243)))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_26 = ((-(((min(var_11, var_8)) * (var_5 == 3744659401465850499)))));
                    var_27 = (((arr_26 [i_6] [i_6 + 1]) ? ((10456 ? 1 : 1)) : (var_4 || var_5)));
                    arr_31 [i_6] [1] [i_7] = (min(((32767 + ((1 ? 1 : var_5)))), ((((var_7 ? -2734589382612511354 : var_10)) >> (((min(var_6, (arr_16 [1] [10]))) + 8843337728744443138))))));
                    arr_32 [i_6] [i_8] [i_8] [i_8] = (((((arr_2 [i_6 + 1]) ? 2851323891755612502 : 14702084672243701107)) * (((~((-(arr_24 [i_6]))))))));
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 9;i_9 += 1)
    {
        var_28 = ((~(!1)));
        var_29 = ((!(((min((-32767 - 1), var_7))))));
        arr_36 [8] [i_9] &= (((min(((1 ? (arr_33 [i_9]) : var_10)), 1)) << (min(((min((arr_26 [i_9] [i_9]), var_14))), ((7094111978888884819 ? 1 : 2613))))));
    }
    #pragma endscop
}
