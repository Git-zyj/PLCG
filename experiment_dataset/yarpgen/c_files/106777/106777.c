/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((var_7 ? var_10 : (((((max(var_1, var_2))) ? var_0 : var_0))))))));
    var_21 = ((-((var_8 ? 1 : var_0))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_22 += (max(((32765 ? ((((arr_2 [i_0] [i_0 - 1]) != var_8))) : (arr_3 [i_0]))), (((((var_3 ? var_14 : var_1))) ? var_5 : (var_17 >= var_14)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_13 [i_2] [i_3] [i_3] [i_3] = ((var_17 ? (((var_8 + ((6144 ? 1 : -17426))))) : (arr_2 [i_2] [i_1])));
                        arr_14 [i_2] [i_3 - 1] = var_18;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_23 = ((~(1 << 1)));
        arr_17 [i_4] = (-32755 & 32767);
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        arr_26 [i_7] [i_4] [i_4] = ((!(var_17 || var_9)));
                        arr_27 [i_4] [i_5] [i_6] [i_5] [i_5] = var_11;

                        for (int i_8 = 4; i_8 < 20;i_8 += 1)
                        {
                            var_24 += ((-(~var_2)));
                            var_25 = 5688664515122163344;
                            var_26 = (max(var_26, (arr_24 [i_6] [i_5] [i_6] [i_7] [i_8])));
                            var_27 = (((arr_24 [i_7] [i_5] [i_8 - 4] [i_7] [i_5 - 1]) >> (((184 | 235557546) - 235557521))));
                        }
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            arr_32 [i_4] [i_4] [i_5] [i_7] [i_9] [i_9] [i_9] = (13497968694589665664 ? 883260213 : 29);
                            var_28 = (arr_16 [i_5]);
                            arr_33 [i_9] [i_5] [i_7] [i_7] [i_9 + 4] [i_9] = ((-10324 ? 230 : 1));
                            var_29 = (min(var_29, 10493360837649160005));
                        }
                    }

                    for (int i_10 = 4; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_10] = 1;
                        arr_39 [i_10] [i_6] [20] [i_6] [i_6] [i_6] = var_1;
                    }
                    for (int i_11 = 4; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        var_30 = (max(var_30, -1100419983));
                        var_31 = (min(var_31, (((4576834488680797118 ? (max((arr_23 [i_4] [i_11] [i_6] [i_4] [i_5]), (arr_23 [i_4] [i_4] [i_5] [i_6] [i_11 - 2]))) : (((var_7 ? (arr_20 [i_5 + 1] [i_6]) : var_0))))))));
                        var_32 = (arr_19 [i_5] [1]);
                    }
                    arr_43 [i_4] [i_4] [i_4] [i_4] = ((var_17 ^ (((-(var_9 % -117))))));
                    arr_44 [i_4] [i_5] [i_6] = (~12758079558587388272);
                }
            }
        }
        arr_45 [i_4] |= ((max(var_2, -78)));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_33 = (max((arr_31 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]), (!235557541)));
        arr_49 [1] = (((((((0 | (arr_28 [i_12] [i_12] [i_12])))) - (max((arr_42 [i_12]), 7953383236060391609)))) <= (arr_19 [i_12] [i_12])));

        for (int i_13 = 4; i_13 < 10;i_13 += 1) /* same iter space */
        {
            arr_53 [i_12] [i_12] [i_13] = ((var_13 || (max(1, (arr_28 [i_13 - 2] [i_13 - 4] [i_13 - 3])))));
            var_34 -= (!34394);
            arr_54 [i_13] [i_12] = ((~(~-295427173)));
        }
        /* vectorizable */
        for (int i_14 = 4; i_14 < 10;i_14 += 1) /* same iter space */
        {
            var_35 = 46057;
            var_36 = (max(var_36, 31));
            arr_59 [i_14] [i_12] [i_12] = (~(7364386661932573491 || var_8));
        }
        var_37 = 7953383236060391604;
    }
    #pragma endscop
}
