/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132558
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
    var_18 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19423))) & (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((1113099422U) >> ((((+(-1))) + (18)))));
        var_19 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [10LL])) ? (arr_1 [(unsigned short)0]) : (arr_1 [8])));
    }
    for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 1113099430U)) ? (17ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))))) * (var_1)));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_9 [i_1]) / (((/* implicit */int) arr_8 [i_2] [i_1 + 1]))))) ? (((/* implicit */int) (short)-20706)) : (((((((/* implicit */int) var_12)) << (((((/* implicit */int) arr_6 [i_2])) + (13770))))) | (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2])) == (((/* implicit */int) var_6)))))))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                arr_14 [i_2] [i_1] = ((/* implicit */short) (((+(max((2925376664U), (((/* implicit */unsigned int) arr_4 [i_1])))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_2) : (11U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1])) && (((/* implicit */_Bool) (unsigned short)58473))))) : (((/* implicit */int) (unsigned short)58461)))))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 3; i_4 < 12; i_4 += 2) 
                {
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((unsigned long long int) max((arr_12 [i_2]), (((/* implicit */unsigned int) arr_15 [i_4 - 3] [i_3])))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (max((((unsigned int) (unsigned char)48)), (((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_12))))) & (((unsigned int) var_9))))))));
                    arr_18 [i_4 - 3] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */int) var_14)) % (((/* implicit */int) (short)13370))))));
                }
                for (signed char i_5 = 3; i_5 < 12; i_5 += 4) 
                {
                    arr_21 [i_1] [i_2] [i_3] [i_5] [i_1] = (((((+(arr_10 [i_3] [i_2] [i_1]))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29258))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1033)) ? (((/* implicit */int) arr_8 [i_1] [i_5 + 1])) : (((/* implicit */int) arr_6 [i_1]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 3; i_6 < 13; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) arr_4 [i_1]);
                        var_24 = ((/* implicit */_Bool) arr_22 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]);
                        arr_24 [i_1] [i_1] [7LL] [i_5] [i_5] [i_5] = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) (signed char)-28)), (4294967276U))), (((/* implicit */unsigned int) arr_9 [i_3]))));
                        arr_25 [i_1] [i_1] [i_1] = ((/* implicit */short) (signed char)112);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1054)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-3010))) & (1113099403U)))) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (unsigned short)64482))))) : (334954517U)));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_9 [i_1])) > (var_2)))) < (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)40))))))))))));
                        var_27 *= ((/* implicit */unsigned long long int) ((unsigned short) (~(max((((/* implicit */long long int) var_16)), (var_4))))));
                    }
                    arr_28 [i_1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (588145786U)))))) ? (((/* implicit */int) arr_6 [i_1])) : (((int) max((((/* implicit */int) var_7)), (arr_5 [i_5] [i_3]))))));
                }
                arr_29 [i_2] [0U] [i_2] [i_3] &= ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)88))))))));
                var_28 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) var_15)) - (40373))))), (((((/* implicit */int) var_13)) >> (((((/* implicit */int) arr_19 [i_3] [i_3] [(unsigned short)6] [i_1])) - (104)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_1])) || (((/* implicit */_Bool) var_11))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [(unsigned short)1] [i_1])) ? (((/* implicit */int) (unsigned short)44436)) : (arr_5 [i_1] [i_1 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) & (4294967295U)))) : (((((/* implicit */_Bool) arr_5 [i_2] [i_3])) ? (((/* implicit */long long int) var_5)) : (var_4)))))));
                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) var_9))));
            }
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                var_30 |= ((/* implicit */_Bool) 63LL);
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) || (var_14)))) : (((((/* implicit */int) (short)13380)) + (((/* implicit */int) arr_6 [i_1]))))));
            }
        }
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            arr_35 [i_1] [i_9] = ((/* implicit */long long int) ((3181867873U) << (((2925376680U) - (2925376662U)))));
            /* LoopSeq 4 */
            for (unsigned short i_10 = 1; i_10 < 10; i_10 += 4) 
            {
                arr_38 [i_9] |= ((/* implicit */unsigned short) var_2);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_11 = 2; i_11 < 13; i_11 += 4) 
                {
                    var_32 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_39 [i_1] [i_9] [i_9] [i_11])) - (((/* implicit */int) var_10)))) % (((/* implicit */int) arr_39 [i_10 - 1] [i_9] [i_11 + 1] [i_1 + 1]))));
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) var_14))));
                    var_34 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_36 [i_11 + 1] [i_1 + 1] [i_1])) >= (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)13370)) : (((/* implicit */int) arr_8 [i_11] [i_9]))))));
                    arr_41 [i_1] [i_1] [i_9] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_9] [i_9] [i_10 + 3])) ? (((var_14) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))))) : (((/* implicit */unsigned long long int) var_3))));
                }
                arr_42 [i_1] = ((/* implicit */unsigned char) 4294967293U);
            }
            for (signed char i_12 = 1; i_12 < 12; i_12 += 4) 
            {
                arr_46 [i_12] [i_9] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_12 + 1] [i_1 - 1])))))));
                arr_47 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_16))));
                arr_48 [i_1] [i_1] = ((/* implicit */_Bool) (unsigned short)53979);
            }
            for (signed char i_13 = 1; i_13 < 11; i_13 += 4) 
            {
                var_35 = ((/* implicit */signed char) arr_8 [i_1] [i_1]);
                var_36 = ((/* implicit */unsigned char) var_9);
            }
            /* vectorizable */
            for (signed char i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                var_37 = ((/* implicit */unsigned short) (unsigned char)99);
                /* LoopNest 2 */
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)111)) / (((/* implicit */int) var_11))));
                            var_39 = ((/* implicit */unsigned long long int) arr_26 [i_1] [i_1 + 1] [i_1 + 1] [i_15 - 1] [i_15] [i_16]);
                        }
                    } 
                } 
            }
            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) max((((var_17) >= (((/* implicit */unsigned long long int) arr_22 [i_1] [i_1 + 1] [i_9] [i_1 - 1] [i_1 + 1] [i_9] [i_9])))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [4U] [i_9] [i_9] [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_56 [i_1] [i_1 - 1] [1U] [1U]))))))))))));
        }
    }
}
