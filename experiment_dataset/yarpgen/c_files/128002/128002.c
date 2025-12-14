/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_21 |= (max((!81), (arr_3 [i_0])));
                var_22 &= var_11;
                var_23 += (32756 != var_10);
                arr_5 [i_0] [i_1] [i_1] = (((-32761 ? -94 : -81)));
            }
        }
    }
    var_24 = (min(var_24, -1));

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_25 = (max(var_25, ((min(((~(arr_12 [i_2] [i_3] [i_3]))), var_2)))));
            var_26 = (min(var_26, (((~(max(((var_13 ? -81 : 65514)), ((var_8 ? 21629 : 7)))))))));
            var_27 = (((((((max((arr_13 [i_2]), var_6))) ? (((arr_7 [i_3]) ? 79 : 590799696)) : (max((arr_10 [i_2]), var_18))))) ? var_16 : var_6));
            arr_14 [i_2] [i_3] [i_3] = (7936 ? -2147483646 : 53480);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_28 *= ((!(~4722852901611404563)));
                            arr_21 [i_2] [i_2] [4] [i_2] [i_5] &= ((((~((var_1 ? var_11 : 2351709712830459565))))) ? var_19 : 220);
                            arr_22 [i_2] [i_3] [i_4] [i_5] [i_3] = (max(((((arr_19 [i_2] [i_3]) ? var_5 : (arr_19 [i_2] [i_2])))), (max(1376508227, var_0))));
                            var_29 = (18 - 18446744073709551610);
                        }
                    }
                }
            }
        }
        arr_23 [i_2] [i_2] = (((max(var_0, (arr_16 [10] [i_2] [16]))) * (!-30226)));
        var_30 = (min(var_30, var_0));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_31 = 13;
        arr_28 [i_7] = (((((max(var_8, (arr_27 [i_7]))))) ? (max(0, (arr_24 [i_7]))) : var_2));
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_32 [i_8] |= ((!(((max(var_8, (arr_10 [i_8])))))));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        arr_41 [i_8] [i_8] [i_9] [i_10] [i_11] &= -var_8;
                        var_32 = var_16;
                        var_33 = ((4294967280 ? 0 : 49714));
                    }
                }
            }
            var_34 = ((~(arr_33 [i_8] [i_8] [i_9])));
        }
        for (int i_12 = 3; i_12 < 18;i_12 += 1)
        {
            var_35 = ((32758 >> (((arr_36 [4] [i_12 + 3] [20] [16]) + 7913))));
            var_36 = 147393061;
            arr_44 [i_8] [i_8] = -117;
            arr_45 [i_8] = ((!(arr_30 [i_12 + 1] [i_12 - 1])));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 19;i_14 += 1)
                {
                    {
                        var_37 = var_1;
                        arr_53 [8] [i_12] [i_12] |= ((((max((arr_9 [i_12] [i_13]), 22))) ? var_1 : -var_10));
                        var_38 = var_3;
                        var_39 += (max(-105, (max((min(37349, var_11)), (min(27531, -11043))))));
                        arr_54 [i_8] [i_12] [i_13] [8] = ((-var_9 || ((((arr_46 [i_12 - 3] [i_14 - 1]) ? (arr_46 [i_12 + 1] [i_14 - 1]) : (arr_46 [i_12 - 1] [i_14 + 2]))))));
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        var_40 = ((((((!(arr_24 [i_15]))))) >= (min(1, (arr_24 [i_15])))));
        var_41 += ((((max(((1288061948 ? var_7 : 52107)), var_16))) ? (arr_48 [i_15] [i_15] [i_15] [i_15]) : (max((473853593 * 0), var_0))));
        var_42 = 13428;
        var_43 = (max(-19605, 473853623));
        var_44 = -var_19;
    }
    #pragma endscop
}
