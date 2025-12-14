/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142751
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
    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), (((unsigned int) var_15))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_21 &= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-6)) <= (((/* implicit */int) ((unsigned short) arr_1 [6U])))));
        arr_2 [(signed char)5] [3LL] |= ((/* implicit */unsigned int) var_15);
        arr_3 [i_0 + 1] [(short)12] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219))) + (((494792340U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)89))))));
    }
    for (long long int i_1 = 3; i_1 < 7; i_1 += 4) 
    {
        arr_7 [i_1] = (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1]))))), (min((380834371677330425LL), (((/* implicit */long long int) (unsigned char)219)))))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) 4141119451U))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                arr_19 [i_4] [i_3] [i_3] = ((/* implicit */unsigned int) ((4294967277U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57284)))));
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((unsigned char) arr_15 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_3])))));
                arr_20 [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1]))));
            }
            arr_21 [i_2] [i_3] = ((/* implicit */unsigned int) (unsigned char)169);
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                var_24 = ((/* implicit */unsigned int) var_8);
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    arr_26 [i_2] [(short)3] [5U] [i_2] [(short)3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */unsigned int) 377552730)) : (((1518716764U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5])))))));
                    arr_27 [i_5] [i_5] [i_5] [5U] = ((/* implicit */_Bool) var_8);
                }
                for (unsigned short i_7 = 2; i_7 < 8; i_7 += 1) 
                {
                    arr_32 [(short)1] [i_3] [i_3] [i_5] [i_7 + 1] = ((/* implicit */signed char) (short)32767);
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)208))))) <= (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) arr_17 [8LL])) : (((/* implicit */int) (short)-32767)))))))));
                    arr_33 [i_2] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) (short)-8071);
                }
                var_26 = ((/* implicit */unsigned char) (signed char)12);
                arr_34 [i_2] [i_5] [i_5] = ((/* implicit */long long int) (signed char)89);
                var_27 -= (signed char)5;
            }
            for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 3) 
            {
                arr_38 [i_8] [i_3] [i_8 - 1] = ((/* implicit */short) arr_28 [i_8] [i_3] [i_8 - 1] [i_8]);
                arr_39 [i_8] [i_3] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)89)) && (((/* implicit */_Bool) (unsigned char)127))))) & (((/* implicit */int) (unsigned char)17))));
                var_28 = (+(((/* implicit */int) ((short) arr_10 [i_8]))));
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    var_29 -= ((/* implicit */short) (unsigned char)47);
                    var_30 += ((/* implicit */signed char) var_14);
                    var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)48)) == (((/* implicit */int) (unsigned char)132)))) ? (((1023U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))))) : (23U)));
                }
            }
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_28 [(short)8] [i_2] [(unsigned char)10] [i_3])))) ? (((/* implicit */unsigned int) 377552753)) : (arr_31 [i_2] [i_3] [i_2] [i_3] [i_2] [i_2])));
        }
        for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            var_33 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (short)15225)) >> (((((/* implicit */int) (short)27342)) - (27321)))))) < (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) - (arr_14 [i_2])))));
            arr_45 [i_10] [i_10] = (unsigned char)201;
        }
        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [7U])) <= (((/* implicit */int) arr_24 [i_11] [6U] [i_11] [i_2] [i_2] [i_2]))))) : (((/* implicit */int) (unsigned char)252))));
            arr_49 [i_2] [2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_11] [i_11] [i_11] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10983))) : (arr_40 [4LL])));
        }
        for (int i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            arr_54 [i_2] [i_2] = arr_1 [i_12];
            arr_55 [i_2] [i_2] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -377552731)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10969))) : (9223372036854775807LL)));
        }
        var_35 = ((unsigned int) arr_22 [(short)8] [i_2]);
        /* LoopSeq 1 */
        for (short i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            arr_58 [i_2] [i_13] = ((((/* implicit */_Bool) arr_36 [i_2] [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_2] [i_13] [i_13]))) : (var_14));
            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */int) (unsigned char)238)) << (((18446744073709551599ULL) - (18446744073709551594ULL))))))));
            arr_59 [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_2])) ? ((-(((/* implicit */int) (unsigned short)29)))) : (((/* implicit */int) (unsigned char)223))));
            arr_60 [i_2] [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */unsigned int) ((arr_25 [i_13] [i_13] [0] [i_2] [i_2] [i_2]) ? (-711388246) : (711388258)))) / (((((/* implicit */_Bool) -890771419)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [10ULL] [i_2]))) : (var_12)))));
        }
        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-20820)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) : (-380834371677330412LL))) / (((/* implicit */long long int) ((int) arr_46 [i_2] [i_2] [i_2]))))))));
    }
}
