/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (arr_1 [i_0]);

                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        var_21 = ((min((arr_6 [i_1 + 3] [20] [i_2 + 2] [i_3 - 2] [i_3]), var_6)));
                        var_22 = (arr_1 [0]);
                        var_23 = (min(((~((min((arr_7 [i_0] [i_0] [i_0]), (arr_4 [1] [1] [1] [17])))))), (arr_5 [i_0] [i_1] [i_3])));
                    }
                    arr_8 [i_0] [i_1] [17] [i_0] = ((~(((arr_5 [i_0] [i_2 + 2] [16]) | (arr_6 [i_1 + 3] [i_1 + 3] [i_1 - 2] [i_1 - 1] [i_2 - 1])))));
                    arr_9 [i_0] [i_0] [i_0] = arr_5 [i_0] [i_1] [i_0];
                }
            }
        }
        var_24 = (min(var_24, (((((((arr_3 [i_0] [17]) ? (arr_6 [i_0] [14] [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_6 [i_0] [i_0] [i_0] [i_0] [8]) : ((~(arr_7 [i_0] [i_0] [i_0]))))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {

                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        arr_20 [i_7] [i_6] [i_5] [5] = arr_19 [i_7 - 2] [i_5 - 1] [i_5] [i_5 + 1];
                        var_25 = (((((-(arr_3 [i_4] [i_4])))) ? -144 : ((1 ? -1 : 253))));
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_26 = (-9223372036854775807 - 1);
                        arr_23 [i_4] [i_5] [i_5] [i_8] = ((9223372036854775807 & (arr_4 [i_5 - 1] [i_5 - 1] [i_6] [i_4])));
                        var_27 = ((1 ? (arr_16 [i_8] [i_5] [i_5] [i_4]) : (arr_15 [i_4] [i_5 - 2])));
                    }
                    var_28 = ((((arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]) ? (!var_17) : var_5)));
                    var_29 = arr_4 [5] [i_6] [5] [i_4];
                }
            }
        }
        var_30 = (arr_17 [i_4] [i_4] [i_4] [i_4]);
        var_31 = ((-((var_5 ? var_2 : ((1 ? 9223372036854775799 : 11978448294405292924))))));
        var_32 ^= var_8;
    }
    var_33 = var_2;
    #pragma endscop
}
