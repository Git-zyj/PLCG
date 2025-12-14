/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~((4294967295 ? var_1 : var_2)));
    var_16 = ((((-(min(var_5, var_7)))) + ((((((min(var_2, 4044218915))) || (var_3 * 4044218915)))))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_17 = (arr_0 [8]);
        arr_4 [i_0] [i_0] = 1836067537536203321;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 = 0;
        var_19 = 4044218915;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_12 [i_2] = (((0 * 17064490004999269109) ? (arr_3 [i_2]) : (-2147483647 - 1)));

        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_20 -= (!2929308083);
            arr_15 [i_2] [i_3] [i_3] = var_2;
            arr_16 [i_2] [i_3] &= 0;
            var_21 = 0;
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_22 *= (min(14724147556785531, var_14));
                var_23 = 2237979645;
            }
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_24 = (max(var_24, ((0 ? (max((arr_25 [i_6] [i_4]), (4492968380701582039 <= 250748361))) : ((min(var_3, (arr_10 [i_4]))))))));
                        var_25 = (arr_28 [14] [14] [15] [i_6] [4]);
                    }
                    /* vectorizable */
                    for (int i_9 = 4; i_9 < 16;i_9 += 1)
                    {
                        var_26 &= (((!195) * (((0 <= (arr_27 [i_2] [i_4] [i_6] [i_4] [i_7] [i_9]))))));
                        var_27 ^= ((-50744 ? ((1745462456 | (arr_21 [9] [i_6] [i_4]))) : (arr_10 [i_9 + 3])));
                        var_28 = (max(var_28, (((arr_24 [i_9 - 3] [i_9 + 3]) ? (arr_3 [i_4]) : 62519))));
                    }
                    var_29 -= (((min(var_9, 0))) ? 0 : (((((var_11 == (arr_34 [i_2] [i_2]))) ? ((-(arr_0 [1]))) : ((0 ? var_12 : 54385))))));
                }

                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_30 = (max(var_30, 0));
                    var_31 = 0;
                    var_32 = (min((max(((72 ? 9223372036854775798 : 11126)), (((var_13 ? 1 : 4044218935))))), ((1 ? ((61905 ? (-9223372036854775807 - 1) : 61)) : 250748361))));
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_33 ^= var_7;
                    var_34 = (max(var_34, var_2));
                }
            }
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                arr_42 [i_2] [i_4] [i_12] [i_12] = ((((~195) ? var_11 : (min(4294967295, -9223372036854775796)))));

                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    var_35 *= var_4;
                    var_36 -= (max((((((max(var_12, 205))) + -2147483647))), var_2));
                }
                arr_45 [i_2] [i_2] [i_12] [i_2] = (arr_9 [2]);
                var_37 = var_5;
                var_38 = (arr_21 [i_2] [i_4] [i_12]);
            }
            var_39 = (max(var_39, (((1470767496 ? 49099 : (((4044218934 && (arr_24 [i_2] [i_2])))))))));
            arr_46 [7] [7] = (!var_1);
            var_40 = (!var_13);
            var_41 -= (min((((1 ? ((max((arr_30 [i_4]), (arr_23 [i_2] [i_4] [i_4])))) : ((var_11 ? 60 : 1745462460))))), (-112 * 626766791)));
        }
        for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
        {
            arr_51 [i_2] [13] = ((((min((-32767 - 1), var_0))) && (((0 ? var_7 : (((min(var_6, 255)))))))));
            arr_52 [i_14] = (arr_1 [i_14]);
            var_42 = 4488375144403039097;
        }
        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            arr_55 [i_2] [i_15] [i_2] = 4488375144403039088;
            var_43 = (min(var_43, 1));
            arr_56 [i_2] |= ((~((-(((arr_23 [i_15] [i_15] [7]) ? 0 : (arr_33 [i_2] [i_15])))))));
            var_44 = (max(var_44, 626766809));
        }
        arr_57 [i_2] = (((min(1745462450, 1))) ? ((var_3 ? -2936990210181046704 : -32741)) : (arr_2 [i_2]));
    }
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        arr_61 [i_16] = (((arr_59 [18] [i_16]) ? ((var_12 ? 205 : var_8)) : ((min((arr_59 [i_16] [i_16]), var_13)))));
        var_45 &= (((min(0, 32741)) <= 626766809));
        var_46 = (arr_60 [i_16]);
        arr_62 [i_16] [i_16] &= (min((((((min(var_11, -4527)))) / (((arr_2 [i_16]) ? (arr_60 [i_16]) : 0)))), (((var_11 ? -32750 : 105)))));
    }
    #pragma endscop
}
