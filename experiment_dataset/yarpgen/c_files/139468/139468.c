/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (max(((43 | (0 + 1))), (arr_0 [i_0])));
        var_18 -= (max((min((max(213, var_15)), (arr_0 [i_0]))), (((201 ? (((arr_0 [i_0]) ? 48 : (arr_1 [i_0]))) : var_16)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_19 ^= (((((arr_5 [i_1] [8]) >= (((((-2147483647 - 1) == 201)))))) ? ((min(((min(1, 142))), 0))) : (arr_4 [i_1] [10])));
        arr_7 [i_1] = 0;

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_1] [i_1] [i_1] = (-32767 - 1);
            var_20 = (-(min(551696431833220572, (arr_9 [i_1] [i_2] [i_2]))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_21 = (min((((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : 207)), (max((arr_5 [i_1] [i_1]), (arr_5 [1] [i_1])))));
            var_22 = (min(var_22, ((max(114, (201 + -7))))));
            arr_14 [i_1] = 1;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_23 = ((137 ? (arr_8 [i_1]) : (arr_16 [1] [7] [i_1])));
            var_24 = (((~var_15) && var_9));
            var_25 = (max(var_25, 9004557449623339150));
        }
        var_26 = ((((max((arr_12 [i_1] [i_1] [i_1]), (arr_12 [i_1] [i_1] [i_1])))) ? (~54009) : ((var_9 ? 32767 : 0))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_27 = (min(var_27, ((max(((((max(852896067, (arr_18 [i_5] [i_5])))) + (arr_18 [10] [i_5]))), ((max((arr_17 [3] [17]), -1))))))));
        var_28 -= (min(1, (min((10582696642264610475 * var_12), (((arr_17 [i_5] [i_5]) / (arr_19 [i_5])))))));
        var_29 = 3809858247;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {
                    {
                        var_30 -= ((((((arr_31 [18] [i_7] [i_6] [18]) ? (arr_31 [20] [i_6] [i_5] [i_5]) : -1349051788))) != (max((min(var_13, var_15)), var_8))));

                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            arr_35 [4] [1] [18] [i_6] [i_6] = (max(((((~(arr_31 [i_6] [i_6] [i_8] [2]))))), (min((max(741678841, (arr_25 [i_5] [i_5] [i_5] [i_5]))), (arr_28 [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9 - 1] [i_9 - 1])))));
                            var_31 = (min(((((127 & (arr_20 [i_6] [i_6]))) % (max(var_14, (arr_30 [i_5] [i_5] [0] [i_8] [3] [9]))))), (((~(~var_2))))));
                            arr_36 [i_6] = ((((0 != (arr_20 [i_7 + 1] [i_6]))) && ((((((-7 ? var_16 : 1))) ? 1 : (arr_22 [i_8 + 2] [i_6] [i_7 + 1]))))));
                        }
                    }
                }
            }
        }
    }
    var_32 = (max(var_7, var_2));
    var_33 = min(var_4, -1);
    #pragma endscop
}
