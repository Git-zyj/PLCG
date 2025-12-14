/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_7 [i_1] [i_1] [i_1] = 46;
            arr_8 [i_1] = var_8;
            var_16 += var_13;
        }
        arr_9 [i_0] = ((!(((((((arr_4 [12]) & 0))) ? 65535 : (arr_1 [i_0 + 3]))))));
        var_17 = var_2;
        var_18 = (max(0, (arr_0 [i_0])));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_19 *= (arr_1 [i_2 - 1]);
                            var_20 = (max(var_20, ((((((((min((arr_3 [i_0]), 1582942945))) ? var_10 : ((((arr_14 [i_0]) * (arr_13 [i_0] [4] [i_0 + 3] [i_4]))))))) || ((((arr_12 [i_0 + 3] [i_0] [i_0 + 3] [i_0 + 3]) ? 15122426800074174125 : 0))))))));
                            arr_22 [i_0] [0] [i_0 + 3] [i_0] &= max(27298, 225);
                        }
                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            var_21 = (((-(arr_18 [i_2]))));
                            var_22 = (max(var_22, (((((((((!(arr_21 [1] [i_2] [i_3 + 1] [i_4] [1] [i_3 + 2] [i_2])))) + var_2))) && (((~(((arr_5 [i_0] [i_0]) % 15122426800074174132))))))))));
                            var_23 += ((-(arr_3 [i_0])));
                            var_24 = (((arr_11 [i_2 + 2] [i_2 + 3] [i_2 - 1]) * -var_3));
                        }
                        arr_27 [i_2] = (~var_12);
                        var_25 = ((~(~19920)));
                        arr_28 [i_4] [1] [i_2] [8] [7] = var_2;

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_26 = ((((((3221225472 | 23) ? var_9 : 84))) ? var_2 : (((((-2756 % -27861) + 2147483647)) >> (var_12 - 819420956148808984)))));
                            var_27 |= ((15122426800074174125 ^ (-124 ^ var_1)));
                            var_28 -= (min(((-(arr_2 [i_2 + 2] [i_0 + 3]))), (arr_30 [i_0] [i_2 + 2] [i_3] [i_4] [i_4] [i_7])));
                            var_29 ^= (arr_26 [i_0] [i_2] [i_2] [i_3] [8] [i_7] [i_7]);
                        }
                        for (int i_8 = 3; i_8 < 9;i_8 += 1) /* same iter space */
                        {
                            var_30 = ((((((((max(115, var_0))) == (arr_30 [i_8] [i_8] [i_8] [i_8] [i_8 + 4] [i_3 + 3]))))) * (~8184)));
                            var_31 = (max(185, 2764));
                            arr_34 [1] [i_2] [i_3] [i_4] [i_2] = (((((arr_30 [i_2 + 1] [i_4] [0] [i_3 + 2] [i_2 + 1] [i_0]) ? (arr_5 [i_2 + 1] [i_2]) : (arr_2 [i_0 + 1] [i_0]))) - (((-(arr_30 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [8]))))));
                        }
                        for (int i_9 = 3; i_9 < 9;i_9 += 1) /* same iter space */
                        {
                            arr_38 [i_2] [i_4] = ((((var_15 ? var_1 : -58)) > (((((-8556738884396065345 || var_5) > var_0))))));
                            arr_39 [1] [i_2 + 1] [i_2 + 1] [i_4] [i_2] = (3324317273635377518 % 15122426800074174091);
                            arr_40 [i_0] [i_2] [i_0] [i_9] = (min((arr_29 [i_2] [i_4] [i_3 - 1] [i_2]), (((~(0 == var_5))))));
                            var_32 = (max(var_32, ((((arr_14 [i_0]) / (((arr_16 [i_0] [i_0] [i_0 + 1] [i_2] [12]) / (arr_16 [i_0] [i_3] [i_0 + 1] [i_2] [i_3]))))))));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        arr_44 [i_10] = var_2;
        var_33 -= (~var_9);
    }
    var_34 |= var_10;
    var_35 = (max(var_35, ((((~1) ? (var_15 * var_3) : ((((var_8 != (63976 || var_5))))))))));
    var_36 *= (((((min(1, 16777215)) | (!var_7)))) * (max(var_12, var_1)));
    var_37 ^= var_9;
    #pragma endscop
}
