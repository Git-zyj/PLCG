/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (((((arr_1 [i_0]) ? var_9 : (arr_1 [i_0]))) <= var_2));
        arr_3 [i_0] = (min((((!(((1 ? 1 : (arr_2 [i_0]))))))), ((var_6 ? (var_0 + 4033540753308913860) : (((1 ? 1 : 203)))))));
        var_13 = min(((min((min((arr_0 [1]), 109)), (arr_2 [i_0])))), (((arr_1 [i_0]) | (((((arr_1 [i_0]) > var_7)))))));
        var_14 = ((((arr_0 [i_0]) ? 36 : ((-(arr_0 [10]))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] = (arr_2 [i_1]);

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_2] = 0;
            arr_11 [i_1] [i_2] &= (min(((((((arr_0 [i_1]) % 76)) | var_6))), (((arr_4 [i_2]) ? (arr_1 [i_1]) : (arr_5 [i_1])))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_15 = (arr_9 [i_2]);
                        arr_18 [i_1] [12] [i_3] [i_4] [i_2] [i_1] = (min(((~(arr_8 [i_3] [i_2] [i_1]))), (((arr_8 [i_2] [i_3] [i_4]) ^ (arr_8 [i_1] [i_2] [i_3])))));
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_16 = (((((arr_22 [i_5] [i_5] [i_7] [i_8]) & (min(41256, 17977674139393571515)))) | var_5));
                            var_17 &= ((((((214 ? 49633 : var_3))) ? ((min(var_0, var_0))) : (arr_8 [i_7] [i_5 + 3] [i_5 + 3]))));
                            var_18 ^= ((((var_1 ? (111 == 3) : (arr_12 [i_5] [i_5 + 1]))) != (((~(arr_2 [i_5 + 1]))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 9;i_9 += 1)
                        {
                            arr_31 [i_1] [i_5] [i_6] [i_7] [i_9] = (!1761939462);
                            arr_32 [i_1] [5] [i_1] [i_1] [i_1] = (((arr_4 [i_5 + 1]) && 2066943307));
                        }
                        var_19 ^= ((1 ? (((((-(arr_16 [i_1] [i_5 - 1] [i_6] [i_7] [i_7])))) ? (min(9223372036854775807, 39)) : (((var_2 ? -3318 : 2))))) : (((min((arr_22 [i_5 + 2] [4] [i_5 + 3] [i_5 + 2]), ((min(85, 1)))))))));
                        var_20 *= (min(32536, (arr_22 [i_1] [i_5 + 3] [i_1] [i_7])));
                    }
                }
            }
            var_21 &= ((~(var_4 && -1023157330)));
        }
        for (int i_10 = 2; i_10 < 10;i_10 += 1)
        {
            var_22 |= (~72);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    {
                        var_23 = (max(var_23, (min(214, var_6))));
                        var_24 = (((((((-9187559266772627322 && (arr_17 [i_1] [i_10] [i_11] [i_12]))) ? 1 : (~15492751102679879720)))) ? ((((arr_13 [i_1] [i_1] [i_11] [i_12]) ? (112 / 1) : (arr_2 [8])))) : ((((min((arr_39 [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_4 [i_10 + 3])))) ? (arr_12 [i_1] [i_10 - 1]) : ((min(var_8, var_0)))))));
                    }
                }
            }
            var_25 = 124;
            var_26 |= ((+(((arr_13 [i_1] [0] [i_1] [0]) ? var_0 : (13156259787013488225 * 228)))));
        }
        /* vectorizable */
        for (int i_13 = 3; i_13 < 12;i_13 += 1)
        {
            var_27 = (min(var_27, (((((-127 - 1) ^ 4294967293))))));
            arr_43 [i_13] = (arr_2 [i_1]);
        }
        var_28 ^= (min((((4294967288 ? (arr_25 [i_1] [i_1] [i_1] [i_1]) : (min(1761939465, 1))))), (((var_5 ? var_3 : (arr_33 [i_1] [i_1] [i_1]))))));
    }
    var_29 = (((var_5 != 4294967293) ? ((((var_7 <= (min(var_6, var_0)))))) : ((60 ? ((var_8 ? 6413237905478934901 : var_9)) : -var_0))));
    var_30 = var_4;
    #pragma endscop
}
