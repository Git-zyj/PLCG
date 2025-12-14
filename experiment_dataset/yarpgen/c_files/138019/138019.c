/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_19 = 312664646;
        arr_3 [i_0] [11] &= ((((min((arr_0 [i_0]), (arr_1 [i_0])))) ? ((-(arr_0 [i_0]))) : ((((!(arr_0 [i_0])))))));
        var_20 = ((+(((arr_1 [i_0]) ? ((max(var_3, (arr_2 [i_0])))) : (-5644256310025649943 & var_14)))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_21 += ((((!(arr_0 [i_3]))) ? (arr_0 [i_2 - 1]) : (((arr_0 [i_2 - 1]) ? (arr_0 [i_1]) : 2147483647))));
                                var_22 = (!((!(arr_2 [i_4 - 1]))));
                            }
                        }
                    }
                    arr_18 [i_2] [11] = -17;
                }
            }
        }
        var_23 = (min((((arr_17 [13] [i_1] [i_1] [i_1] [i_1]) - (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]))), ((((((arr_5 [i_1]) ? 5644256310025649943 : (arr_8 [i_1])))) ? (!9223372036854775807) : (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1])))));
    }

    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {

        for (int i_7 = 2; i_7 < 9;i_7 += 1)
        {
            arr_25 [i_6] = (((arr_19 [i_7 + 2]) ? (arr_19 [i_6]) : var_9));
            var_24 = (arr_24 [1] [i_7] [3]);
            arr_26 [i_6] = (((((((min(1, 2))) ? var_8 : (arr_13 [i_6] [i_6] [10] [i_7 + 2])))) ? (!9615999009039815230) : (arr_24 [i_7] [i_7] [i_7])));
            var_25 += ((((((~var_17) ? ((min((arr_13 [8] [i_7] [i_7] [8]), 2147483647))) : (((arr_1 [i_7]) ? 5787234627322155542 : var_1))))) ? (((arr_17 [i_6] [i_6] [i_6] [i_7] [5]) ? 1 : 7189580801102677820)) : ((((!(arr_20 [i_7])))))));
        }
        var_26 = ((((18 < var_14) ? 1 : (min((arr_1 [i_6]), 2)))) % (max(1, 681675435)));
    }
    #pragma endscop
}
