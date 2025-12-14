/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((var_11 >= (var_10 / var_5))), (((~var_3) || (65533 << 2)))));
    var_19 = ((!(var_6 & 18446744073709551605)));
    var_20 = ((var_4 ? -var_1 : ((~(!3)))));
    var_21 += 65532;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = 31;

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_0] = (~65535);
                    var_22 ^= ((~((~(((-127 - 1) ^ 186))))));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_23 ^= (max((!65532), (((arr_2 [i_0] [i_0]) ? (arr_2 [4] [i_0]) : (arr_3 [i_0])))));
                    var_24 = 109;
                    arr_14 [i_1] = ((~(arr_7 [i_1] [i_1] [3] [i_3])));
                    arr_15 [i_0] [i_0] = (((((min(65533, 48591)) * ((7183 | (arr_0 [1])))))));
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        arr_20 [i_0] [i_1] [i_1] [i_5 + 2] [i_5 + 2] [i_4] |= 2047;
                        arr_21 [i_0] [i_1] [i_4] [i_5] = ((((((arr_11 [i_1] [i_0]) * (~var_15)))) ? ((((arr_19 [i_0] [i_0] [3] [i_5 + 3] [i_5] [i_5]) ? 511 : (arr_19 [i_5 - 2] [i_5] [i_5] [i_5 + 3] [i_5] [i_5])))) : (arr_19 [i_5 + 1] [i_1] [i_1] [i_1] [i_0] [i_4])));

                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            arr_25 [3] [3] [3] [i_5] = ((64 | ((-19412 ^ (arr_19 [i_6] [4] [4] [i_5] [i_6 - 1] [7])))));
                            arr_26 [i_5] = (4 / 240);
                            arr_27 [11] [11] [11] [i_5 - 1] [i_5] [12] = (-19 % 18446744073709551615);
                        }
                        var_25 = 22;
                    }
                    var_26 &= (max((~0), (min(255, -3928623521313771621))));
                    arr_28 [9] [i_4] [i_4] = ((!(~65529)));
                    arr_29 [i_1] [i_1] [i_4] [i_4] = ((((arr_3 [i_4]) ? -4 : ((((arr_1 [i_0]) == 2047))))) - (((!(((2147352576 / (arr_1 [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
