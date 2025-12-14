/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170179
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_17 = (-(max((arr_4 [i_0 - 1] [i_1] [i_1]), (var_0))));
            var_18 += ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) arr_2 [i_0 + 2] [i_0] [i_1])))));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_0 [i_0 + 1] [i_1])))))) & (((/* implicit */int) var_3))));
        }
        /* LoopSeq 4 */
        for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) ((long long int) (signed char)97));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_2] [i_3]))))) ? ((+(((/* implicit */int) arr_3 [i_2] [i_2 + 2] [i_3 + 2])))) : (((/* implicit */int) ((signed char) 8822900591290473134LL)))));
            }
            for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0] [i_0])) >> (((((/* implicit */int) (unsigned short)65535)) - (65524)))));
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    arr_19 [i_0] [i_4] [i_5] [i_0 - 1] [i_0 + 1] [i_0] = var_6;
                    arr_20 [i_0 - 1] [i_2 + 1] [i_4] [i_5] |= ((/* implicit */unsigned long long int) var_3);
                }
                for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    var_23 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_9)))) ? (min((((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5475)))))), (min((((/* implicit */unsigned long long int) arr_1 [i_4] [i_2 - 2])), (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_2 + 1] [i_4]), (arr_22 [i_2] [i_2] [i_4] [i_2])))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_5 [i_0] [i_2])))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        arr_25 [i_0 + 2] [i_0] [i_0 + 1] [i_6] [i_0] [i_0 - 1] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_2] [i_4] [i_7]))))) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0 - 1] [i_2] [i_6] [i_6] [i_6])) : (((unsigned long long int) arr_17 [i_2 - 1])))) * (((/* implicit */unsigned long long int) ((arr_22 [i_0 - 1] [i_0 - 1] [i_6] [i_0 - 1]) - (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                        var_24 = ((/* implicit */unsigned long long int) var_3);
                        var_25 = var_6;
                        var_26 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_7] [i_6] [i_6] [i_4] [i_4] [i_2 + 1] [i_0]))) > (arr_14 [i_7] [i_6] [i_4] [i_0]))) ? (((/* implicit */unsigned long long int) var_9)) : (max((((((/* implicit */_Bool) 8046116661046598634ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_2 - 2] [i_4] [i_6] [i_7] [i_7] [i_7]))) : (14191805021855834563ULL))), (((/* implicit */unsigned long long int) var_3))))));
                    }
                }
                var_27 = ((/* implicit */long long int) ((unsigned short) max((arr_4 [i_0 - 1] [i_0 + 2] [i_0]), (arr_14 [i_0 - 1] [i_0 + 2] [i_0] [i_0 - 1]))));
            }
            arr_26 [i_0] = ((/* implicit */signed char) 8716184738806584390LL);
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_8] [i_2] [i_0]) + (arr_9 [i_0] [i_8])))) ? (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 + 1] [i_2 - 2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_5)))))))))));
                arr_29 [i_8] = min((((((/* implicit */_Bool) min((-8190291967444676844LL), (arr_6 [i_0 + 2] [i_0 - 1])))) ? (min((((/* implicit */long long int) var_13)), (arr_8 [i_8]))) : (((var_9) % (-711167569658132309LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_0 + 1] [i_2] [i_8] [i_2] [i_8] [i_8] [i_2 - 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2 + 1])) ? (3735928357325658157LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))))));
                /* LoopNest 2 */
                for (long long int i_9 = 2; i_9 < 19; i_9 += 4) 
                {
                    for (signed char i_10 = 4; i_10 < 21; i_10 += 3) 
                    {
                        {
                            arr_35 [i_8] [i_8] [i_9 - 2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_32 [i_10 - 4] [i_9 - 1] [i_2] [i_0 + 1]))))) != (((/* implicit */int) ((((/* implicit */_Bool) (+(-9223372036854775804LL)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)59520)), (arr_22 [i_0] [i_2] [i_8] [i_0])))))))));
                            var_29 -= ((/* implicit */unsigned short) ((long long int) (+(var_0))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            var_30 = ((/* implicit */long long int) (signed char)-116);
            var_31 = ((/* implicit */unsigned short) -8321595833595862331LL);
            var_32 = ((/* implicit */unsigned short) ((unsigned long long int) var_16));
            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_6 [i_0] [i_11])))) ? (((((/* implicit */_Bool) -5244104857763110175LL)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
        }
        for (signed char i_12 = 1; i_12 < 19; i_12 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_13 = 1; i_13 < 19; i_13 += 2) 
            {
                for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    for (long long int i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned short) ((signed char) (+(arr_10 [i_12 + 1] [i_12 + 2] [i_13 + 2]))));
                            var_35 = (i_12 % 2 == 0) ? (((max((var_12), (((/* implicit */long long int) var_7)))) * (((((/* implicit */long long int) ((/* implicit */int) var_2))) * (((-8174735990173494615LL) / (arr_34 [i_0 - 1] [i_12] [i_13] [i_12] [i_15]))))))) : (((max((var_12), (((/* implicit */long long int) var_7)))) / (((((/* implicit */long long int) ((/* implicit */int) var_2))) * (((-8174735990173494615LL) / (arr_34 [i_0 - 1] [i_12] [i_13] [i_12] [i_15])))))));
                            arr_48 [i_0] [i_12 + 1] [i_13] [i_14] [i_12] [i_15] = ((((((var_15) + (var_16))) == ((~(1843875775902139869LL))))) ? (((long long int) max((var_6), (arr_22 [i_0] [i_12] [i_12] [i_15])))) : (((/* implicit */long long int) (~((+(((/* implicit */int) arr_44 [i_12 + 2] [i_14] [i_15]))))))));
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) 4754452618587764489ULL))));
                        }
                    } 
                } 
            } 
            arr_49 [i_12] [i_12] = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned short) var_13))), ((+(arr_4 [i_12] [i_0] [i_0])))));
            var_37 = ((/* implicit */signed char) min(((~(var_1))), (min(((~(arr_34 [i_0] [i_12] [i_12] [i_12] [i_0 + 1]))), (((((/* implicit */_Bool) 31744LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2] [i_12] [i_0]))) : (arr_1 [i_0] [i_12])))))));
        }
        for (signed char i_16 = 1; i_16 < 19; i_16 += 1) /* same iter space */
        {
            arr_53 [i_0 + 1] [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_40 [i_0] [i_0 + 1] [i_16])), ((-(((/* implicit */int) var_7)))))))));
            var_38 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) var_3)))) - (((/* implicit */int) ((var_14) >= (arr_14 [i_0] [i_16] [i_16] [i_16]))))))));
        }
        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) -1LL))) ? (((arr_47 [i_0] [i_0] [i_0 + 1] [i_0 + 1]) - (arr_47 [i_0] [i_0] [i_0 + 1] [i_0 - 1]))) : ((+(arr_47 [i_0] [i_0 + 2] [i_0 - 1] [i_0 - 1])))));
        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_12), (((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) ? ((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_27 [(unsigned short)10] [i_0]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_38 [i_0 + 2] [i_0 + 1])))))));
        arr_54 [i_0 + 1] = var_10;
    }
    /* vectorizable */
    for (unsigned short i_17 = 3; i_17 < 12; i_17 += 1) 
    {
        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_46 [i_17] [i_17] [i_17] [i_17] [i_17])) ? (9223372036854775807LL) : (((long long int) 2155741376591768685LL))));
        var_42 = arr_24 [i_17] [i_17] [i_17 - 1] [i_17];
    }
    var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) var_10))));
}
