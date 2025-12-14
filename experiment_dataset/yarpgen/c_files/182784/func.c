/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182784
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            arr_4 [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned char)133)), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)14975)) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */int) (unsigned short)51192))))), (((long long int) var_2))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) : (var_15)))));
                        var_19 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))) ? (-1548833030) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        var_20 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)247)))) ? ((((!(((/* implicit */_Bool) (unsigned short)0)))) ? ((-(7ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_2] [i_0 + 1])) : (((/* implicit */int) (unsigned short)17))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)15649)) < (((/* implicit */int) var_9))))))))));
                    }
                } 
            } 
        }
        arr_10 [i_0] |= ((/* implicit */unsigned short) min(((-(((((/* implicit */int) var_14)) >> (((/* implicit */int) (unsigned char)0)))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) < (arr_1 [i_0 - 1]))))));
        arr_11 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) var_17))))))));
        arr_12 [i_0 - 1] = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned long long int) ((short) (unsigned short)65526)))));
        var_21 = ((/* implicit */unsigned char) var_16);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)9)) << (((((/* implicit */int) (short)-24381)) + (24390)))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 20; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 3) 
            {
                {
                    var_22 |= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)41931))));
                    arr_21 [i_5] = ((/* implicit */signed char) arr_20 [i_4] [i_4]);
                    arr_22 [i_5] [i_5] = ((/* implicit */signed char) var_6);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                {
                    var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23810)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (var_2)))) ? (((unsigned int) (unsigned short)23604)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54888)))));
                    arr_30 [i_8] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_15 [i_7] [i_8])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8] [i_8] [i_4]))) : (arr_24 [i_7] [i_8])))));
                    arr_31 [i_8] [i_7] [i_7] = ((/* implicit */unsigned int) arr_17 [15U] [15U]);
                    var_24 = ((/* implicit */unsigned long long int) (+(arr_23 [0U])));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) ((var_11) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23801)))))) >= (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)41931)) : (((/* implicit */int) (unsigned short)63929)))))))));
    }
    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) 
    {
        arr_36 [i_9] [i_9] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_9 [i_9] [i_9]))) & (((/* implicit */unsigned int) ((/* implicit */int) min((arr_13 [(short)13]), (((/* implicit */unsigned short) (signed char)-1)))))))) ^ (((/* implicit */unsigned int) max((((int) var_5)), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)233))))))))));
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) arr_2 [i_9] [i_9] [i_9]))));
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((153385993U) > (arr_25 [i_9] [i_9] [i_9]))))));
        arr_37 [i_9] = var_2;
    }
    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            for (long long int i_12 = 1; i_12 < 8; i_12 += 4) 
            {
                for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    {
                        arr_48 [i_13] [i_12] [i_10] [i_12] [i_10] = ((/* implicit */_Bool) arr_26 [i_10] [i_10] [i_10]);
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_5)), (var_14))))) : (min((((unsigned long long int) (unsigned short)12583)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)12)))))))));
                        arr_49 [i_12] = ((/* implicit */short) max((arr_8 [(unsigned char)14] [i_11] [i_12] [7U]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_44 [i_12] [i_12 + 1] [i_12 + 1])) : (((/* implicit */int) arr_41 [i_12 - 1])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_14 = 1; i_14 < 9; i_14 += 4) 
        {
            var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 2159133623U))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_14 - 1]))) - (arr_0 [i_14 - 1] [i_14 + 1]))) : (max((((/* implicit */unsigned long long int) (unsigned char)9)), (arr_0 [i_14 - 1] [i_14 + 1])))));
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 1; i_15 < 9; i_15 += 4) 
            {
                for (int i_16 = 0; i_16 < 10; i_16 += 3) 
                {
                    {
                        arr_59 [i_10] [i_14] [i_14] [(short)3] [i_10] [i_15] = ((/* implicit */long long int) var_10);
                        arr_60 [6U] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_14 + 1] [i_16])) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (max((arr_44 [i_15] [1U] [(unsigned char)9]), (((/* implicit */unsigned short) var_8))))))) : (((/* implicit */int) (short)-24381))));
                    }
                } 
            } 
        }
        var_30 = ((/* implicit */unsigned long long int) min((min((0LL), (((/* implicit */long long int) (unsigned short)23604)))), (((/* implicit */long long int) (unsigned char)44))));
        arr_61 [i_10] [(unsigned short)6] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_0)), (var_11)));
    }
    var_31 -= (+(((((/* implicit */_Bool) ((long long int) var_17))) ? ((-(var_11))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-3))))))));
}
