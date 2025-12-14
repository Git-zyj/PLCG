/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179175
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
    var_20 -= ((/* implicit */unsigned long long int) (~(max(((~(var_9))), (((/* implicit */unsigned int) var_4))))));
    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(4034478798191777ULL)))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_12))))), (var_16)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_22 = ((((/* implicit */_Bool) (~(((unsigned int) var_2))))) ? ((~(arr_2 [i_0] [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_14)))) ? (max((((/* implicit */long long int) var_6)), (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            arr_6 [i_1] = max((min((4477059973436906849ULL), (((/* implicit */unsigned long long int) (signed char)74)))), (((arr_2 [i_0 + 1] [i_1 + 3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
            arr_7 [i_0] [i_1] = ((/* implicit */signed char) (~(max((((/* implicit */long long int) arr_3 [i_0 - 1])), (arr_0 [i_0 - 1])))));
            arr_8 [i_1] [i_1] = ((/* implicit */long long int) var_2);
        }
    }
    for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) (~(((min((arr_10 [9LL]), (arr_9 [i_2]))) | (arr_10 [i_2])))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_10 [i_2 + 1])))) ? ((~(arr_9 [i_2 - 1]))) : (arr_10 [i_2 - 1])));
    }
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 4) 
    {
        var_25 = ((((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_3 + 1]))))) | (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_16))));
        var_26 = ((/* implicit */signed char) (~(((/* implicit */int) arr_12 [i_3 + 1] [i_3 - 1]))));
        arr_14 [i_3] = ((/* implicit */unsigned char) arr_12 [i_3] [i_3]);
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 4) 
        {
            arr_18 [i_4] [i_4] [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3]))) : (var_13)))));
            arr_19 [0ULL] |= ((/* implicit */unsigned long long int) var_7);
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((unsigned long long int) ((unsigned int) var_8)))));
            arr_20 [i_4] [i_4] [i_4] = ((/* implicit */long long int) arr_15 [i_4 - 2]);
            arr_21 [i_4] = var_5;
        }
        for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 2) 
        {
            arr_24 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (unsigned char)254))));
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (((((/* implicit */_Bool) arr_17 [i_6] [i_5 - 2] [i_3])) ? (((/* implicit */int) arr_12 [i_3] [i_5])) : (((/* implicit */int) arr_22 [i_3 + 1] [i_6])))) : (((/* implicit */int) ((unsigned char) var_11)))));
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    arr_30 [i_3] [i_3] [i_3] [i_3] [(signed char)6] [i_3 - 1] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7])) ? (((/* implicit */unsigned long long int) var_18)) : (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3 - 1]))) : (((((/* implicit */_Bool) var_11)) ? (arr_25 [i_3] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5 + 1] [i_6]))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 4; i_8 < 21; i_8 += 3) 
                    {
                        var_29 ^= ((/* implicit */long long int) var_12);
                        arr_34 [i_3] [17ULL] [i_6] [i_3] [i_8] [i_3] &= (+(arr_25 [i_3 + 1] [i_5 + 2]));
                        var_30 = ((/* implicit */long long int) arr_13 [i_8 - 3] [i_8 - 1]);
                    }
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) (+(((/* implicit */int) arr_15 [i_3 - 1]))));
                        arr_37 [i_3] [i_5] [i_6] [i_7] [i_9] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 5974550077482532375ULL)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) (signed char)-11))))));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_5 - 1] [i_3 + 1] [i_7])) * (((/* implicit */int) arr_23 [i_5 - 1] [i_3 + 1] [i_7]))));
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), ((-(arr_17 [i_3 + 1] [i_6] [4ULL])))));
                        arr_38 [i_7] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_33 [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) arr_33 [i_5] [i_5 + 1]))));
                    }
                }
                for (unsigned long long int i_10 = 1; i_10 < 23; i_10 += 4) 
                {
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3]))) - (var_16)))) ? (arr_40 [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    arr_41 [i_3] [i_3] [i_5 - 1] [6LL] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3 - 1])) ? (arr_11 [i_3 - 1]) : (arr_11 [i_3 + 1])));
                    var_35 += var_4;
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 4; i_11 < 22; i_11 += 2) 
                {
                    arr_44 [i_11] [10LL] [i_6] [i_6] [10LL] [i_3] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_3] [i_5] [i_6])) ? (((/* implicit */int) arr_16 [i_5] [i_6] [i_11])) : (((/* implicit */int) arr_29 [i_6] [i_6] [i_6] [i_11] [i_11 + 2]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        var_36 = var_7;
                        arr_47 [i_3 + 1] [i_11] [i_6] [i_11] = ((/* implicit */unsigned char) ((((var_18) + (9223372036854775807LL))) >> (((/* implicit */int) var_15))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 1; i_13 < 23; i_13 += 3) 
                    {
                        arr_50 [i_3 + 1] [i_13] [i_11] [i_13] = ((/* implicit */unsigned int) arr_36 [i_11 - 4] [i_11 - 4] [i_13] [i_13] [i_13 + 1]);
                        var_37 |= ((/* implicit */signed char) (+(var_14)));
                        var_38 = ((/* implicit */unsigned char) arr_32 [i_3 - 1] [i_3 - 1]);
                    }
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_5] [i_5]))) : (arr_32 [i_6] [5LL])))) ? (((((/* implicit */_Bool) arr_31 [i_3] [i_5] [i_5] [i_6] [i_5] [i_5 + 1])) ? (((/* implicit */long long int) var_8)) : (arr_26 [i_5] [i_5] [i_6]))) : (((/* implicit */long long int) arr_11 [i_3 - 1]))));
                    var_40 = (~(((unsigned int) var_17)));
                }
                arr_51 [i_3] [i_3] [i_5] [14ULL] = ((/* implicit */unsigned char) (~(arr_26 [i_3 + 1] [i_5 + 2] [i_5 - 2])));
                /* LoopSeq 2 */
                for (signed char i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    var_41 = var_2;
                    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_42 [i_3] [i_3] [i_6] [i_6])))) ? ((~(((/* implicit */int) arr_16 [i_3] [i_5] [i_6])))) : (((/* implicit */int) arr_23 [i_3] [i_3 - 1] [i_3 - 1]))));
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        var_43 -= ((/* implicit */unsigned int) ((arr_25 [i_3 - 1] [i_5 - 2]) - (arr_25 [i_3 + 1] [i_5 + 2])));
                        arr_58 [i_14] [i_6] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (var_16) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [14ULL] [i_6] [i_15])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_57 [i_5] [i_6] [i_14]))))));
                        var_44 -= arr_32 [i_3 - 1] [i_5 + 1];
                        arr_59 [i_14] [i_5] [i_14] [i_15] = ((/* implicit */unsigned long long int) arr_31 [i_15] [i_6] [i_6] [i_6] [i_5 + 1] [8LL]);
                    }
                    var_45 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_5 - 2] [i_5])) ? (((/* implicit */int) arr_13 [i_5 + 1] [15LL])) : (((/* implicit */int) arr_13 [i_5 + 1] [15ULL]))));
                    var_46 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_45 [i_3 - 1] [i_6] [i_14] [18U] [i_5 - 2]))));
                }
                for (signed char i_16 = 1; i_16 < 23; i_16 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        var_47 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))));
                        arr_64 [i_16] [i_16] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_3 + 1] [i_5 - 1] [i_16 - 1]))));
                    }
                    var_48 = ((/* implicit */unsigned long long int) (-(arr_62 [i_5 - 1])));
                    var_49 ^= arr_36 [i_3] [i_5] [i_6] [i_16] [i_3];
                }
            }
            for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 1) /* same iter space */
            {
                var_50 = ((/* implicit */long long int) (+(arr_42 [i_3 - 1] [i_3] [i_5] [i_3 - 1])));
                arr_69 [i_3] [i_18] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_3 + 1] [i_5 + 2])) ? (((/* implicit */int) arr_22 [i_3 + 1] [i_5 + 1])) : (((/* implicit */int) arr_22 [i_3 - 1] [i_5 - 1]))));
                arr_70 [i_3 - 1] [i_18] [i_18] [i_3 - 1] = ((/* implicit */unsigned long long int) (~((-9223372036854775807LL - 1LL))));
                arr_71 [i_18] [i_5 + 1] [i_18] = ((/* implicit */unsigned long long int) arr_45 [i_3] [i_3] [i_18] [21LL] [i_18]);
            }
            var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_27 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]) : (((/* implicit */unsigned long long int) 593238231U))));
            var_52 = ((/* implicit */unsigned long long int) ((signed char) 411505911229318331ULL));
        }
        for (long long int i_19 = 3; i_19 < 20; i_19 += 2) 
        {
            arr_74 [i_19] = ((/* implicit */signed char) arr_25 [i_3 + 1] [i_19 + 4]);
            arr_75 [i_19] = ((/* implicit */long long int) arr_73 [i_3 + 1] [i_19 + 3]);
            var_53 = arr_13 [i_3 + 1] [i_19 + 3];
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_20 = 1; i_20 < 12; i_20 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 1) 
        {
            var_54 = ((/* implicit */unsigned long long int) var_6);
            var_55 = ((/* implicit */unsigned long long int) max((var_55), (((((/* implicit */_Bool) arr_61 [i_20 + 1] [i_20 - 1] [i_20 - 1])) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_0))) : (((/* implicit */unsigned long long int) (+(var_18))))))));
            var_56 = ((unsigned long long int) arr_2 [i_20 + 1] [i_21]);
        }
        arr_81 [(unsigned char)2] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_20] [i_20]))) : (arr_28 [i_20])))) ? (((/* implicit */unsigned long long int) arr_46 [i_20] [i_20] [i_20] [i_20] [i_20 + 1] [i_20 + 1])) : (var_13)));
        var_57 = ((/* implicit */unsigned char) max((var_57), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_49 [i_20] [i_20] [i_20] [i_20] [i_20 + 1])))))));
    }
}
