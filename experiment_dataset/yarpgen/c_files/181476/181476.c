/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 += var_16;
    var_21 = var_9;
    var_22 += (((!var_9) ? ((77 ? ((max(188, 67))) : var_18)) : (min(((max(var_13, var_13))), (var_2 - var_9)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_23 = var_7;
        arr_3 [i_0] = var_10;
        arr_4 [i_0] = var_12;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_24 = ((+(((arr_12 [i_0] [i_0] [i_2] [i_3]) ? 68 : 243))));
                        var_25 ^= 65535;
                    }
                }
            }
        }
        var_26 = (max(var_26, (187 && 0)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_27 = (min(var_27, (arr_7 [i_4])));
        arr_15 [i_4] &= (arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_28 = (max(5382262237903079940, ((min(1, 0)))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    arr_26 [i_6] = var_12;
                    arr_27 [i_5] [i_6] = (!111);
                    arr_28 [i_5] [0] = 5382262237903079940;
                    arr_29 [i_5] [i_6] [6] = ((+((18670 ? (65535 + 111) : 1))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                {
                    arr_35 [i_8] [i_8] [i_9 - 1] = 111;
                    var_29 = (max((((arr_10 [i_9] [i_9 + 3] [i_9] [i_9 + 1] [i_9 - 1] [i_9]) ? (arr_10 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9] [i_9 + 3] [i_9]) : (arr_10 [i_9] [i_9 - 2] [i_9 + 3] [i_9 - 2] [i_9 - 2] [i_9]))), ((~(((9223372036854775807 < (arr_6 [i_8]))))))));
                    arr_36 [i_8] [i_8] [i_8] [i_5] = max(((((!var_13) ? 0 : (96 && var_6)))), (max(1418332508278666265, var_16)));
                    var_30 = 4123168604160;
                }
            }
        }
        arr_37 [i_5] [i_5] = (max((((var_7 >= 17028411565430885351) ? (arr_16 [i_5]) : (!var_14))), var_17));
    }
    #pragma endscop
}
