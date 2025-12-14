/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_20 = (max((((9223372036854775807 ? 1044480 : 227))), ((((max(var_12, var_3))) ? (((max(1, var_12)))) : (((arr_2 [i_0 - 1] [i_0]) ? var_11 : var_0))))));
            var_21 = var_12;
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_15 [6] [i_5] [i_3 + 3] &= 1;
                            arr_16 [i_0] [i_2] [i_2] [i_4] [i_0] = ((var_10 ? ((((~1) > (var_15 < 1)))) : (max(-1357776919, 1))));
                        }
                    }
                }
            }

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    var_22 = (min(var_22, (((var_0 ? (min(((((arr_6 [6] [i_2] [i_7 + 1]) << var_6))), (var_13 % -39))) : 1)))));
                    var_23 += (max((min(-414389675, (0 | 2097151))), 1));
                    var_24 += max((max((arr_14 [i_0] [i_2 - 1] [i_6] [i_7 + 1] [i_0 - 1]), (arr_18 [i_0] [i_2 - 1] [5] [i_7 + 1]))), (((arr_14 [i_0] [i_2 - 1] [i_6] [i_7 + 1] [i_0 - 1]) >> (var_5 - 1070217967))));
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-1616170370 ? 1 : 80));
                    var_25 = (min(var_25, ((max((((arr_11 [6] [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? var_5 : (arr_11 [12] [i_0 + 1] [i_0 + 1] [i_0 + 1]))), 1)))));
                    var_26 = ((+(max((arr_0 [i_0 - 1]), 1))));
                    var_27 = (max(var_27, (max((!var_12), (max(var_10, (max(8845663401871948951, (arr_19 [8] [1] [i_6])))))))));
                    var_28 = 0;
                }
                for (int i_9 = 3; i_9 < 12;i_9 += 1)
                {
                    var_29 = (min(var_29, ((min(2080490718, ((((arr_23 [i_6]) ? (arr_3 [i_0] [i_2]) : (-166172874 && 59)))))))));
                    arr_27 [i_0] = (max((max((arr_25 [i_0] [i_9 - 1]), (arr_25 [i_0] [i_9 + 4]))), var_5));
                    arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 106;
                }
                arr_29 [i_0] [i_0] = 1;

                for (int i_10 = 1; i_10 < 15;i_10 += 1)
                {
                    var_30 = (min(var_30, ((((((1 ? 1 : (~1)))) > (1324740616 | 4294967295))))));
                    arr_34 [i_0] [i_2] [i_2 - 1] = ((((arr_18 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1]) > 1)));
                    arr_35 [i_0] [i_2] [10] [i_2] [i_2] = var_9;
                    var_31 = (max(((min(1, (max(-1346077975, -49))))), (((arr_1 [i_6]) ? (arr_13 [i_10 + 1] [i_0] [i_6] [i_0] [i_0 - 1]) : ((-(arr_0 [i_2])))))));
                }
            }
            arr_36 [i_0] [12] = ((arr_17 [i_0 - 1] [i_0] [i_0] [i_0 - 1]) ? ((max(1, var_0))) : (((((var_2 ? (arr_13 [i_0] [i_2] [i_2] [i_0] [3]) : var_12))) ? 1 : ((107 << (var_1 - 111))))));
        }
        arr_37 [i_0] [i_0] = ((((+(((arr_22 [i_0] [i_0]) ? 236 : var_15)))) % ((min((arr_20 [i_0 - 1] [i_0] [i_0 + 1]), 1)))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 14;i_12 += 1)
            {
                {
                    arr_43 [15] [i_11] [i_12 + 2] [i_0] = (max(((((arr_41 [i_0] [11] [15]) > var_19))), var_8));
                    arr_44 [i_12 - 1] [4] [i_0] |= (-((max((max(1, var_15)), (arr_22 [i_0] [5])))));
                }
            }
        }
    }
    var_32 = (max(var_32, (var_18 | var_16)));
    var_33 = var_14;
    #pragma endscop
}
