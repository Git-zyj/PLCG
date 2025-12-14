/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189193
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) 18446744073709551615ULL))));
    var_18 = ((/* implicit */long long int) 13240767626363727271ULL);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (max((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (arr_0 [i_0]))))))), (arr_0 [i_0])))));
        var_20 = ((/* implicit */long long int) ((max(((~(14436339168636539903ULL))), (3940298333104753462ULL))) + (((((/* implicit */_Bool) (short)32767)) ? (((14506445740604798183ULL) >> (((4294967276U) - (4294967245U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(arr_1 [i_0]))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_4 [i_1]);
            var_22 &= ((/* implicit */signed char) ((((((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) var_16)))) || (((/* implicit */_Bool) (unsigned short)53068)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 336607057405516681LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1]))) : (arr_2 [i_1 - 2]))))));
        }
        for (unsigned short i_2 = 3; i_2 < 21; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 1; i_3 < 21; i_3 += 3) 
            {
                arr_12 [i_0 - 2] [i_2] [i_0 - 2] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((arr_9 [i_0 - 2] [i_0] [i_0 - 2] [i_3 + 3]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32640))))))));
                arr_13 [i_3 + 2] [i_2 - 3] [i_3] = ((/* implicit */long long int) 4010404905073011716ULL);
                var_23 = ((/* implicit */long long int) (unsigned short)48211);
            }
            arr_14 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)32640)) ? (arr_3 [i_2 - 2] [i_2 - 3] [i_2 + 2]) : (((((/* implicit */_Bool) 14436339168636539916ULL)) ? (arr_3 [i_2 - 2] [i_2 - 3] [i_2 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 - 2] [i_2 - 3] [i_2 + 2] [i_2 - 3])))))));
            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((2897104142U), (min((8388607U), (((/* implicit */unsigned int) arr_11 [i_0] [i_2 - 3] [i_2 + 1] [i_0]))))))) ? (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)19435)))) * (((/* implicit */int) min(((short)(-32767 - 1)), (var_11))))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 - 2] [i_0 + 2])), ((+(4010404905073011713ULL)))))));
        }
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            var_25 ^= ((/* implicit */unsigned int) (~((-(((/* implicit */int) var_14))))));
            var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551594ULL)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (arr_7 [i_0 + 1]))))));
            var_27 = ((/* implicit */unsigned int) var_2);
            var_28 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 6808194249862698871LL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 + 1])))))));
        }
    }
    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
        {
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) var_6))));
            var_30 = var_12;
            arr_22 [(short)3] [i_6] [i_6] = ((short) ((((/* implicit */_Bool) 8251208525306141846LL)) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_5 + 2])) + (((/* implicit */int) var_6)))))));
        }
        for (short i_7 = 2; i_7 < 11; i_7 += 3) 
        {
            var_31 = ((/* implicit */long long int) var_10);
            /* LoopSeq 3 */
            for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                var_32 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_21 [i_5 + 2] [i_7 - 2] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5] [i_7])))))) ? (arr_21 [i_7 - 2] [i_7 + 1] [i_7 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)32767)), (arr_16 [i_5])))))))), (((((/* implicit */long long int) ((/* implicit */int) (short)-1))) ^ (arr_3 [i_5] [i_5 - 1] [i_7 - 1])))));
                arr_27 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned short)48184))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 336607057405516681LL)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (unsigned short)37435))))) ? (((/* implicit */long long int) 130944U)) : (((336607057405516681LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
            }
            for (unsigned int i_9 = 1; i_9 < 9; i_9 += 4) 
            {
                arr_32 [i_5] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((3940298333104753462ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_5] [i_7 - 1] [i_7]))))) * (((/* implicit */unsigned long long int) 33554431U))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_5] [i_5 + 1] [i_5 + 1] [i_9 + 4]))))) : (arr_9 [i_5 - 1] [i_5] [(short)8] [i_9])));
                arr_33 [i_5] [i_9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((3896409911U) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) < (((arr_2 [i_9]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_15))))))));
            }
            for (long long int i_10 = 3; i_10 < 11; i_10 += 1) 
            {
                var_33 = ((/* implicit */unsigned int) var_7);
                var_34 = (~(arr_1 [i_5 + 3]));
                arr_36 [i_5] [i_5] = ((/* implicit */long long int) var_1);
            }
        }
        for (short i_11 = 3; i_11 < 11; i_11 += 3) 
        {
            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6808194249862698884LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-22612))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65518)) ? (-6808194249862698876LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-30749)))))) : (8819074150679687807ULL)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_12 = 1; i_12 < 11; i_12 += 2) 
            {
                var_36 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_14))));
                var_37 = ((/* implicit */unsigned long long int) var_11);
            }
            for (short i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (unsigned short)65528))));
                arr_44 [i_5 + 2] [i_13] [i_5 + 2] [i_5] = ((/* implicit */short) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_10 [i_13] [(unsigned short)11] [(unsigned char)23] [(unsigned char)23])))))))));
            }
            var_39 ^= ((/* implicit */long long int) var_8);
            var_40 += ((/* implicit */unsigned long long int) arr_3 [i_5 + 2] [i_11 - 1] [i_5 + 2]);
        }
        arr_45 [i_5] = ((/* implicit */short) 6808194249862698871LL);
        var_41 -= ((/* implicit */long long int) var_7);
    }
}
