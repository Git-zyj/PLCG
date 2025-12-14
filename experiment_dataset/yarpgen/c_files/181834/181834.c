/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((var_13 | (var_8 | 55240))), ((4294967295 ? 536854528 : 32767))));
    var_19 = ((((((!(((var_17 ? var_0 : var_0))))))) ^ ((var_5 ? -1465085999 : ((-458777424 ? 201 : 4294967295))))));
    var_20 = ((((min(-60, -2939659663))) ? (~var_10) : var_6));
    var_21 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 += (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = (((((4428211717057326160 ? 3316841876 : 1355307632))) ? ((-61 ? 823228756 : -27729)) : 110));
        arr_4 [i_0] [i_0] = (((arr_2 [i_0]) * (arr_2 [i_0])));
        var_23 = (min(var_23, -29807));

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [10] [i_0] [i_0] [i_0] [i_0] |= ((((((arr_7 [i_0] [14] [i_2] [10]) ? (arr_8 [2] [2]) : 1281716124))) ? ((var_5 ? (arr_7 [i_0] [8] [i_2] [i_3]) : 4294967295)) : (((136902082560 ? 1 : (arr_11 [i_0] [i_1 - 3] [1] [i_3] [i_3]))))));
                        arr_13 [i_1] [i_1 - 1] [i_1] [i_3] [i_2] = -var_5;
                        var_24 = (min(var_24, 136279149));
                    }
                }
            }
            arr_14 [i_1] = (arr_11 [i_1 + 2] [0] [i_1] [i_1 + 1] [i_1 - 3]);
            var_25 = ((~(arr_1 [i_1 - 3])));
        }
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_26 = (min(var_26, ((min(175, 65535)))));
                    arr_23 [i_4] [i_5] [i_5] [i_5] = (((((arr_0 [10] [i_6]) >> (((6785775887778694504 != (arr_2 [i_5])))))) < (((~(arr_15 [i_6]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_31 [i_8] [i_7] [i_5] [i_5] [i_4] [i_5] [i_4] = (!(arr_11 [i_8 - 1] [i_8 - 1] [i_5] [i_8 + 1] [i_8]));
                                arr_32 [i_4] [i_5] [i_4] [i_4] [i_6] [i_6] [i_8] |= (max(((min(var_0, var_17))), ((-(arr_27 [i_4] [i_5] [i_5] [i_5] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
        var_27 = (max(var_10, (arr_25 [i_4])));
        arr_33 [i_4] = (((arr_10 [i_4] [i_4] [i_4]) == (~652399159)));
    }
    #pragma endscop
}
