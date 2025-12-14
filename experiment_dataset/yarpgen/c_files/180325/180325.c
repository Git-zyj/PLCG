/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_14, ((((max(var_3, var_6))) ? (min(var_1, 10765392942290255193)) : (((178 ? var_10 : 371014295)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = 10765392942290255193;
        var_18 &= var_9;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_4 [i_0] = 22087701;
            var_19 = (max(var_19, var_12));
        }
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            var_20 = var_6;
            var_21 = (arr_2 [i_2] [i_0] [i_0]);
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_22 = ((((((16380 >> (((arr_7 [i_0]) + 1850467239))))) ? ((7681351131419296408 ? 7681351131419296427 : var_4)) : (var_8 ^ var_13))));

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_23 = (min((((!(arr_9 [i_0] [i_0] [i_0])))), (((((!(arr_17 [i_0] [i_3] [i_4] [i_3] [i_6])))) - var_4))));
                        var_24 = 112963021873125480;
                    }
                    for (int i_7 = 4; i_7 < 12;i_7 += 1)
                    {
                        arr_22 [i_0] [i_3] [i_0] [i_4 + 2] [i_5] [i_7] = var_15;
                        var_25 = (max(var_25, 22287));
                        var_26 *= (((((~(arr_9 [5] [i_5] [i_0]))))) ? var_14 : (((arr_10 [i_4 - 1] [i_7 - 1] [i_7 - 1]) << (-12256 + 12295))));
                        var_27 = (!(((var_1 ? (max(var_10, (arr_18 [i_0] [i_0] [i_3] [i_4 - 1] [i_0] [i_0] [i_7 - 2]))) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                    arr_23 [i_0] [i_4 - 1] [i_3] [i_0] = var_9;
                    var_28 = var_10;
                    var_29 = (max(var_29, (((max(38107, ((min(74, (arr_16 [i_0] [i_0] [6] [i_0]))))))))));
                }
                var_30 ^= (((min((arr_0 [i_3]), (max(var_6, 4042999986)))) << ((var_1 ? (((((arr_19 [i_0] [i_0] [i_3] [i_0] [i_0]) || var_3)))) : ((var_15 ? var_15 : (arr_0 [i_3])))))));
            }
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                var_31 = ((~((~(arr_0 [i_0])))));
                var_32 *= (arr_9 [1] [i_3] [i_8]);

                /* vectorizable */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_33 -= var_9;
                    var_34 = (((arr_27 [i_8 - 1] [i_0] [i_8 - 1]) & (arr_11 [i_8 - 1] [i_8] [i_0])));
                    arr_28 [i_0] [i_0] [i_8] [1] [1] = (((~(arr_12 [i_0] [0] [i_9] [i_8 - 1]))));
                }
            }
            arr_29 [i_0] = var_10;

            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                arr_32 [i_0] [i_3] [i_0] = var_8;
                var_35 = (min((arr_11 [i_0] [3] [i_0]), ((251967310 ? ((-(arr_19 [i_0] [i_0] [i_0] [i_3] [i_10]))) : ((min(77, (arr_20 [i_0] [2] [i_0] [1] [i_0]))))))));
            }
            arr_33 [i_0] = var_12;

            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {

                /* vectorizable */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    arr_39 [i_0] [i_0] [i_11] = (((arr_18 [i_12] [i_0] [i_11] [i_3] [i_3] [i_0] [i_0]) - (((arr_27 [i_0] [i_0] [i_11]) ? 30748 : var_5))));
                    var_36 = ((!(arr_13 [6] [i_3] [7] [i_12])));
                    var_37 = ((-(arr_0 [i_0])));
                    var_38 += 19195;
                }
                arr_40 [i_0] [i_0] [i_0] [i_0] = (((((~((min((arr_36 [i_0] [i_11]), (arr_38 [i_0] [i_0] [i_3] [i_0]))))))) ? ((-(arr_10 [4] [i_3] [5]))) : (((var_14 ? ((min(var_12, 32760))) : ((max(27, var_2))))))));
                var_39 += ((var_9 ? ((min((((arr_0 [i_3]) ? 8670053782994103572 : var_9)), var_15))) : (arr_10 [1] [i_3] [i_11])));
            }
        }
    }
    #pragma endscop
}
