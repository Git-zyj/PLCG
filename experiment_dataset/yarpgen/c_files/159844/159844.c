/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = 15;
        var_18 = var_13;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = (arr_0 [i_1]);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_2] [i_2] = 4294967295;

            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_19 = -var_13;
                    var_20 = (max(var_20, (((((((arr_12 [i_4]) == var_4))) == ((var_16 ? var_14 : -21010)))))));
                }

                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    var_21 ^= (((-1824773788986918285 ? (-32767 - 1) : (arr_5 [i_1] [i_1]))) != var_12);
                    arr_19 [i_5] [i_2] [i_2] [i_1 + 1] = (arr_5 [i_1 - 1] [i_3 + 3]);
                    arr_20 [i_2] [i_2] [i_3] [i_2] [i_2] [13] = ((var_0 ? -14 : (arr_4 [i_1 - 1])));
                }
                for (int i_6 = 3; i_6 < 11;i_6 += 1)
                {
                    var_22 = 16953938653545717702;

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_23 = 1824773788986918285;
                        arr_27 [0] [i_2] [i_3] [i_3] [i_3] [i_2] [0] = var_2;
                        var_24 += (((arr_5 [i_2] [i_3 + 1]) == (arr_8 [i_1] [i_1] [i_1])));
                        var_25 = (((arr_3 [i_2]) / 74));
                    }
                    var_26 = (max(var_26, (arr_16 [i_1] [i_2] [i_3 + 1] [i_3] [i_6])));
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    var_27 = ((var_16 / (arr_17 [i_8 - 1] [i_1] [i_1 - 2] [i_1 - 2])));
                    arr_31 [0] [10] [i_3 - 1] &= (1824773788986918285 ? (arr_4 [i_1 - 1]) : 1824773788986918294);
                }
                arr_32 [i_2] = ((~(arr_12 [i_2])));
                var_28 = ((var_11 ? -21031 : 123));
            }
            for (int i_9 = 2; i_9 < 13;i_9 += 1)
            {
                var_29 = (min(var_29, var_6));
                var_30 = -var_6;
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        arr_40 [i_10] = var_13;
        var_31 = ((255 ? var_11 : (arr_0 [i_10])));
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 19;i_11 += 1)
    {
        var_32 = ((3 <= (arr_41 [i_11 + 4])));
        var_33 = (var_8 == 0);
        var_34 += -109;
        arr_43 [22] = ((-3 ? (arr_41 [i_11 + 3]) : -109));
    }
    var_35 = (max(var_35, var_5));
    var_36 = (((((var_16 - (min(var_12, var_13))))) ? (((var_2 ? 16065201687929146021 : 4300339737306969905))) : ((min(-6597526737009754643, -7306135120397893329)))));
    #pragma endscop
}
