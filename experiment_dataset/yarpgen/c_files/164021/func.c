/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164021
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((short) var_13))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 9105802573291412382ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) var_6)))))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (short)-26811)))))) ? (max((((/* implicit */int) min(((short)-1), (((/* implicit */short) var_4))))), ((-(((/* implicit */int) var_4)))))) : (((/* implicit */int) ((short) arr_4 [i_1] [i_1])))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (((arr_4 [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9)))))));
        var_18 *= ((unsigned long long int) min(((short)-1), (((/* implicit */short) (unsigned char)221))));
        /* LoopSeq 2 */
        for (short i_2 = 1; i_2 < 9; i_2 += 3) /* same iter space */
        {
            arr_10 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) 9105802573291412364ULL))));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
            {
                arr_14 [i_1] [i_2 + 1] [i_3] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_2 + 3]);
                arr_15 [i_1] [i_2 + 2] [i_1] = ((unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (9340941500418139225ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16822)))));
            }
            for (short i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
            {
                var_19 = ((((/* implicit */_Bool) var_9)) ? (arr_4 [i_2] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                arr_18 [2ULL] [2ULL] [2ULL] |= var_9;
                arr_19 [i_1] [i_4] [i_1] [(unsigned char)4] = ((/* implicit */short) ((18446744073709551615ULL) << (((((((/* implicit */int) var_6)) - (((/* implicit */int) arr_6 [(unsigned char)6] [(unsigned char)6])))) - (40143)))));
                var_20 += ((/* implicit */unsigned char) (-(((((((/* implicit */int) arr_6 [i_1] [i_2 - 1])) + (2147483647))) >> (((((/* implicit */int) var_9)) + (12707)))))));
                var_21 ^= ((/* implicit */short) 14810937178527856868ULL);
            }
        }
        /* vectorizable */
        for (short i_5 = 1; i_5 < 9; i_5 += 3) /* same iter space */
        {
            arr_22 [i_1] [i_5] = ((/* implicit */unsigned char) 3635806895181694766ULL);
            arr_23 [0ULL] [i_5] = ((/* implicit */unsigned long long int) arr_9 [i_1] [i_1]);
            arr_24 [i_1] [i_5] [i_1] = (short)-2579;
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                arr_29 [i_5] [i_5] [i_5] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_5])) ? (arr_13 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
            }
            for (short i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_8 = 2; i_8 < 11; i_8 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_27 [i_5 - 1] [(short)5] [i_5 + 1] [i_8 - 2]))));
                    var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_30 [i_1] [i_1])))) * (((/* implicit */int) var_8))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_9 = 1; i_9 < 8; i_9 += 2) 
                {
                    var_25 *= ((/* implicit */short) (-(((/* implicit */int) arr_34 [8ULL] [i_5] [i_5] [i_5 + 2] [i_7] [(short)10]))));
                    arr_39 [(short)6] [i_7] [i_7] [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)166)) && (((/* implicit */_Bool) 9105802573291412390ULL))))) - (((/* implicit */int) (short)8064))));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        var_26 = var_10;
                        arr_42 [i_1] [i_5] [i_7] [i_9] [i_9] = ((/* implicit */unsigned char) (-((-(511ULL)))));
                        arr_43 [i_9] [i_5] [i_7] [i_5] [i_7] [i_1] [i_5] = ((/* implicit */unsigned char) ((((arr_11 [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_9 + 1] [i_5 - 1])))));
                        var_27 = ((/* implicit */short) (-(((/* implicit */int) arr_36 [i_5 + 2] [i_5] [i_5 + 2] [i_9 + 3] [i_10] [i_10]))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_37 [i_1] [i_1]))))) == (((51000727412714732ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1])))))));
                    }
                }
                for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_20 [i_5 + 3] [(short)5] [i_11]))));
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((arr_17 [i_7]) * (9340941500418139233ULL)))));
                }
            }
        }
    }
}
