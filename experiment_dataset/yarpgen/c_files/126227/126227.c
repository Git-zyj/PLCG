/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_1 ? var_4 : var_11))) ? var_11 : var_4));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [24] = (((min((arr_2 [i_0]), (arr_0 [i_0])))));
        var_14 = ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? ((max(-111, 350736315))) : 3944230991));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (max((min((arr_1 [i_1]), 2606106540)), ((((arr_0 [i_1]) ? (!var_11) : var_4)))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_21 [i_1] [i_4 - 1] [i_1] [i_2] [i_1] = (350736297 || (((var_12 << (((arr_12 [i_1] [i_2]) - 5283213291073917695))))));
                            var_15 = (((arr_13 [i_1] [i_2] [i_3]) ? 1583859489 : (arr_18 [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 + 3] [i_4])));
                            arr_22 [i_5] [i_3] [i_2] [10] &= (104 ? 350736315 : -66);
                        }
                    }
                }

                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {
                    arr_26 [i_6] [i_2] [i_3] [i_6] = ((((((arr_23 [i_1] [i_6] [10] [i_1] [i_1] [i_1]) << 0))) ? var_10 : var_2));
                    var_16 = var_1;
                    var_17 -= var_3;
                    arr_27 [i_1] [i_1] [i_6] [i_6] = ((3844876827 ? 3844876818 : (((arr_16 [i_1] [i_2] [i_3] [i_6] [i_2]) ? var_4 : 3944230981))));
                }
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    arr_30 [i_1] [i_1] [i_3] [i_3] = ((255 ? (arr_13 [i_7] [i_7 - 1] [i_7 - 1]) : (arr_10 [i_3])));
                    arr_31 [i_1] [i_2] [i_3] [i_2] = -var_7;
                    arr_32 [i_1] [i_2] [i_2] [i_2] [i_1] [i_2] = ((450090473 ? 1 : -54));
                    var_18 = (((arr_0 [i_7 + 1]) != (arr_0 [i_7 + 1])));
                    var_19 *= (arr_6 [i_1] [i_1]);
                }
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    var_20 = (((arr_12 [i_1] [i_2]) != (arr_10 [i_1])));
                    arr_36 [i_8] [i_8] [i_8] [i_1] = (((arr_1 [i_8 - 2]) >= (var_1 == 3844876838)));
                    var_21 *= (((arr_20 [i_8 + 1]) ^ (arr_20 [i_8 - 1])));
                    var_22 = (((arr_28 [i_8 - 1] [i_2] [i_1]) ^ (((arr_12 [2] [i_1]) ? (-2147483647 - 1) : var_6))));
                    arr_37 [i_1] [i_2] [i_3] [i_8] = -3997228918;
                }
            }

            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                arr_42 [7] [7] [i_1] [i_1] = ((3944230971 ? var_10 : (arr_6 [i_1] [i_1])));
                var_23 = ((((var_3 || (arr_2 [i_2]))) && (((arr_7 [i_9]) || var_2))));
            }
            var_24 = ((3944230991 ? 15 : 10607090209237659058));
        }
    }
    var_25 = var_10;
    var_26 = (min(450090473, 89475602));
    var_27 -= ((var_9 || ((((((450090472 ? var_4 : var_4))) ? var_8 : ((var_2 ? var_3 : var_11)))))));
    #pragma endscop
}
