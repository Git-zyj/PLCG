/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185218
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) / (((/* implicit */int) (!(((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) var_11))))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max((max((max((var_6), (((/* implicit */unsigned int) (unsigned char)182)))), (((/* implicit */unsigned int) arr_2 [i_0] [i_1])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))))))))));
                    arr_9 [i_2] [i_1 + 1] [i_0] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1] [i_2 + 1] [i_0])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_0 [i_1 + 2])))));
                    arr_10 [i_0] [3U] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_0))) / (((/* implicit */int) ((unsigned short) arr_5 [i_1 + 2] [i_1 - 1])))));
                    var_22 -= ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_0 [i_1 + 1])))), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)2)), (arr_3 [i_0] [i_1 - 1]))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        var_23 += ((/* implicit */short) ((long long int) ((((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) arr_11 [i_3] [i_3])))) / (((/* implicit */int) var_18)))));
        arr_13 [(signed char)12] = ((/* implicit */short) min((var_17), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)62546)))))));
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (short i_5 = 1; i_5 < 24; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((max((arr_16 [i_3]), (((/* implicit */long long int) arr_19 [i_3] [i_4] [i_5] [(_Bool)1])))) == (max((((/* implicit */long long int) arr_14 [i_3] [i_4])), (arr_16 [i_3]))))) ? (((/* implicit */int) (signed char)121)) : (((((/* implicit */_Bool) (unsigned short)6289)) ? (((/* implicit */int) arr_19 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) arr_19 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1])))))))));
                        arr_23 [i_3] [i_4] [i_3] [i_5 - 1] [i_6] = var_14;
                    }
                } 
            } 
        } 
        arr_24 [i_3] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned short) arr_21 [i_3] [i_3] [i_3] [i_3])), (arr_12 [i_3]))), (min((((/* implicit */unsigned short) arr_21 [i_3] [i_3] [i_3] [i_3])), (arr_12 [i_3])))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_7 = 1; i_7 < 23; i_7 += 2) 
    {
        arr_28 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_20 [i_7] [i_7 + 2] [i_7] [i_7]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_7 + 2] [i_7 + 1])) == (((/* implicit */int) arr_11 [i_7 + 2] [i_7 - 1])))))) : (((long long int) arr_26 [i_7 + 1]))));
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (short i_9 = 2; i_9 < 21; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    {
                        var_25 += ((/* implicit */short) min((((/* implicit */long long int) min(((-(((/* implicit */int) arr_25 [i_7])))), (((((/* implicit */int) var_7)) >> (((var_10) - (894214013U)))))))), (((((arr_16 [i_7 - 1]) + (9223372036854775807LL))) >> (((arr_16 [i_7 + 2]) + (5500846895085343209LL)))))));
                        arr_37 [i_7] [i_8] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_10)))))) ? (((/* implicit */int) ((short) arr_21 [i_7] [i_7 + 1] [(_Bool)1] [i_10]))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_11 [i_7] [i_8])), (arr_34 [i_7] [i_7] [i_7 + 1])))) ? (((/* implicit */int) ((short) (unsigned short)59240))) : (((((/* implicit */int) (short)32760)) + (((/* implicit */int) arr_31 [(unsigned char)9] [(unsigned char)16]))))))));
                    }
                } 
            } 
        } 
        arr_38 [(_Bool)1] |= ((/* implicit */signed char) ((((((/* implicit */int) min(((unsigned char)81), ((unsigned char)132)))) == (((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))))) ? (((/* implicit */int) ((((/* implicit */int) max((var_16), (((/* implicit */short) var_11))))) == (((/* implicit */int) max((var_3), (arr_18 [(short)23]))))))) : ((~(((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (short)-32551))))))));
        arr_39 [24LL] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_34 [i_7 + 2] [i_7 - 1] [i_7 + 1]))) >> (((((max((var_10), (var_1))) >> (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)29324)) : (((/* implicit */int) var_18)))) - (29305))))) - (6274U)))));
        arr_40 [i_7] = ((/* implicit */long long int) min((((/* implicit */int) max(((short)8986), (((/* implicit */short) arr_17 [i_7 - 1] [i_7] [i_7 - 1]))))), (((((/* implicit */int) arr_15 [i_7 - 1] [i_7] [i_7])) * (((/* implicit */int) arr_15 [i_7 - 1] [i_7] [i_7 - 1]))))));
    }
    for (signed char i_11 = 3; i_11 < 7; i_11 += 4) 
    {
        arr_44 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_33 [i_11 - 1] [i_11 - 3] [(signed char)17]))) && (((((/* implicit */_Bool) min((var_8), (var_12)))) && (((((/* implicit */_Bool) arr_15 [i_11] [i_11] [i_11])) || (((/* implicit */_Bool) (unsigned short)6289))))))));
        arr_45 [i_11] |= ((/* implicit */unsigned short) ((signed char) min(((+(((/* implicit */int) (unsigned short)13772)))), (((/* implicit */int) ((short) 4243312605U))))));
    }
    for (signed char i_12 = 2; i_12 < 20; i_12 += 3) 
    {
        var_26 = ((/* implicit */_Bool) min((var_26), (((((((long long int) (_Bool)1)) / (((/* implicit */long long int) ((/* implicit */int) var_8))))) == (((min((((/* implicit */long long int) var_17)), (1023LL))) * (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)241)) / (((/* implicit */int) (signed char)107)))))))))));
        arr_49 [i_12] = ((/* implicit */short) min((var_10), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_12] [i_12])) : (((/* implicit */int) (unsigned char)31)))), (((/* implicit */int) arr_30 [i_12 - 1] [i_12 + 2])))))));
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_12] [i_12 - 2])) * (((/* implicit */int) arr_36 [i_12 + 2] [i_12 + 1]))))) ? (((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) min((((((((/* implicit */int) (short)-23432)) + (2147483647))) >> (((((/* implicit */int) var_13)) + (28952))))), (((/* implicit */int) min((((/* implicit */short) arr_48 [i_12 - 2] [i_12])), (var_16))))))))))));
        arr_50 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_12 - 1] [i_12 + 2] [i_12 - 1])) ? (((/* implicit */int) min((min((((/* implicit */unsigned short) (_Bool)1)), (arr_46 [i_12] [i_12]))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_12] [i_12])) && (((/* implicit */_Bool) arr_48 [(short)13] [(short)13])))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_20 [i_12] [i_12] [i_12] [i_12])) * (((/* implicit */int) var_15))))))));
        arr_51 [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_32 [i_12 + 1] [i_12 + 2] [i_12])) == (((/* implicit */int) arr_32 [i_12 + 2] [i_12 + 2] [i_12 + 2])))))) == (min((var_10), (((/* implicit */unsigned int) arr_12 [i_12 - 1]))))));
    }
}
