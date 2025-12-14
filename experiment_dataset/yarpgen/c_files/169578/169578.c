/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = (min(14802955237347278557, 32768));
    var_22 = (max(((var_1 ? var_3 : var_0)), var_11));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] |= 32768;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                arr_8 [i_0] = ((max(((var_5 ? var_5 : (arr_3 [i_2] [i_2] [i_2]))), (arr_5 [i_0] [i_1] [i_2]))));

                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_14 [i_3] [i_3] [i_2] [3] [3] [i_3] [i_3] = (min((((!(arr_13 [i_2 + 2] [1] [i_2 + 1] [i_3] [i_2])))), ((+(max((arr_6 [i_0] [i_1] [i_1]), (arr_11 [i_0] [i_0 - 2] [i_0] [i_3] [i_3])))))));
                        var_23 = (max(((49 ? -18155 : 32)), ((min(121, 32761)))));
                        var_24 = (arr_10 [i_0] [i_1] [i_2 + 3] [i_3] [i_4]);
                    }
                    arr_15 [17] [i_3] [i_2] = (((((((max(var_11, (arr_11 [i_3] [i_1] [i_2] [i_1] [i_3])))) ? (5089432398083345496 != var_5) : (!0)))) ? (((arr_11 [1] [i_3 + 2] [i_3] [i_3 + 1] [i_3]) & (arr_11 [i_3] [i_3 + 2] [i_3 + 1] [i_3 + 2] [i_3]))) : ((+((var_12 ? (arr_4 [7]) : (arr_6 [13] [i_1] [i_1])))))));
                    arr_16 [i_3] [i_3] [i_3] [i_3] = ((-(max((min((arr_12 [i_0] [i_1] [i_3] [i_3] [i_2 + 4]), (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [i_3 + 2]))), (((32752 ? var_12 : 32778)))))));
                    var_25 = -1;
                }
                for (int i_5 = 4; i_5 < 19;i_5 += 1)
                {
                    arr_21 [i_0] [0] [i_2] [i_5] = (max(((min((-32767 - 1), 120))), (min(-126, (arr_1 [i_0 - 2])))));
                    var_26 += ((((((max((arr_5 [13] [i_1] [i_2 + 3]), var_9))) ? (arr_7 [i_2] [i_2] [i_2] [i_2 + 2]) : var_18)) >> (((max(((59 ? var_0 : (arr_11 [16] [10] [i_5] [i_5] [6]))), (arr_5 [i_0 - 2] [i_2 + 4] [i_5]))) - 37192))));
                    var_27 = (+-1);
                }
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    arr_24 [18] [18] &= ((~(((arr_6 [i_0 - 2] [i_2 + 4] [i_6 - 1]) ? var_14 : (arr_6 [i_0 - 1] [i_2 - 1] [i_6 + 1])))));
                    var_28 &= (max((~var_7), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])));
                    var_29 = var_7;
                }
            }
            var_30 = (((arr_0 [i_0] [12]) ? (((-1 ? 984867690 : 194))) : var_3));
        }
    }
    for (int i_7 = 4; i_7 < 20;i_7 += 1)
    {
        var_31 = var_5;
        var_32 = (arr_27 [i_7 - 1]);
        var_33 *= (max(((min(39424, -123))), var_1));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 20;i_10 += 1)
                {
                    {
                        var_34 = -120;
                        var_35 = var_4;
                        var_36 = ((8623784917520829726 ? ((((!(!-27121))))) : ((var_9 ? (arr_37 [i_7] [10] [i_7 - 2] [i_10] [i_10] [i_10]) : (arr_36 [i_10] [i_8] [i_7])))));
                    }
                }
            }
        }
    }
    var_37 = ((var_19 == (9822959156188721889 ^ 76)));
    #pragma endscop
}
