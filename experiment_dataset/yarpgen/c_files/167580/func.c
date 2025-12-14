/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167580
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)63)) || (((/* implicit */_Bool) (unsigned char)237))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 *= ((unsigned int) (+(((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) var_2))))));
        var_18 = ((/* implicit */short) arr_1 [i_0] [(_Bool)1]);
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)5724))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) ^ (var_14))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_5 [3LL] [i_1] [i_0] &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0]))));
            var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))));
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [11LL] = ((/* implicit */unsigned short) arr_7 [i_2] [(_Bool)1]);
        var_21 = ((/* implicit */long long int) arr_7 [i_2] [i_2]);
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 576865731)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)-22))));
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_23 += ((((/* implicit */long long int) (~(3725800197U)))) == (7202183650825592423LL));
            arr_12 [(short)8] [i_2] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4937780333307265787ULL)) ? (3248558767U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121)))))) || (((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_3])))))));
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -2112939335)) ? (1879048192U) : (943937929U)))) % (max((arr_11 [i_2] [i_2]), (((/* implicit */long long int) var_7))))));
            /* LoopSeq 3 */
            for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                var_25 = ((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [i_2]);
                var_26 += ((/* implicit */short) (!(((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3]))) == (((((/* implicit */_Bool) arr_11 [i_2] [i_3])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                arr_17 [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)6883))) / (arr_10 [i_3] [i_3])));
                arr_18 [i_4] = ((/* implicit */unsigned char) var_13);
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                var_27 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) -2112939335)))) ? (((/* implicit */long long int) 576865731)) : (((((/* implicit */_Bool) arr_14 [i_5] [i_3] [i_2] [i_2])) ? (((/* implicit */long long int) var_13)) : (arr_10 [i_2] [i_2])))));
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    var_28 = ((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_6] [i_6]))));
                    arr_25 [i_3] [i_3] [i_6] [i_5] = ((/* implicit */unsigned long long int) arr_13 [i_2] [i_2]);
                    var_29 = ((/* implicit */int) (~(arr_11 [i_6] [i_6])));
                }
                for (unsigned short i_7 = 1; i_7 < 15; i_7 += 1) 
                {
                    var_30 = ((/* implicit */_Bool) arr_10 [i_2] [i_2]);
                    var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */int) arr_19 [i_7] [i_3])) : (((/* implicit */int) arr_16 [i_5] [i_5] [i_5]))))) | ((+(arr_21 [i_2])))));
                }
                /* LoopSeq 1 */
                for (long long int i_8 = 2; i_8 < 17; i_8 += 2) 
                {
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (~(((/* implicit */int) var_0)))))));
                    arr_31 [i_2] [i_3] [(short)2] [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)10643)) ? (((/* implicit */int) (short)10648)) : (((/* implicit */int) (short)-27754)))) & (((((/* implicit */int) arr_29 [i_8 + 2] [(short)8] [i_3] [i_2])) << (((((/* implicit */int) arr_15 [i_3] [i_3])) - (29633)))))));
                }
                var_33 = ((/* implicit */unsigned int) arr_16 [i_3] [i_3] [i_5]);
            }
            /* vectorizable */
            for (short i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_3] [i_9]))));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    var_35 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_2] [i_3] [18U] [7U] [i_10]))) : (((arr_11 [i_3] [i_3]) >> (((1305163731330151903LL) - (1305163731330151892LL)))))));
                    var_36 = ((/* implicit */unsigned char) arr_30 [i_2] [i_3] [i_2] [i_10]);
                }
            }
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_37 &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) -946991515)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)187))) : (2004917361U)))));
            arr_41 [14LL] &= ((/* implicit */unsigned long long int) ((((arr_37 [i_2]) ? (((/* implicit */int) arr_37 [i_11])) : (((/* implicit */int) arr_34 [i_2] [i_11] [i_11] [i_11])))) ^ (((arr_37 [i_2]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_34 [i_11] [i_11] [i_11] [i_11]))))));
        }
        /* vectorizable */
        for (short i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_2] [i_12])))))) ? ((+(arr_21 [i_12]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_12] [i_12] [i_12] [i_12])))));
            arr_45 [(unsigned char)4] [i_12] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_35 [i_2] [i_12] [i_12] [i_2] [i_2] [i_2]))));
            arr_46 [i_2] [i_12] [i_12] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_38 [(unsigned char)2] [i_12] [i_12] [7U])) % (((/* implicit */int) var_2))))));
            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_12] [i_12])) ? (((((/* implicit */_Bool) arr_36 [i_12] [i_12] [13] [i_2] [i_2] [i_2])) ? (arr_14 [18U] [i_12] [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_12] [i_2]))))) : (((((/* implicit */_Bool) (short)-10644)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [(short)18] [i_12]))) : (arr_39 [i_12])))));
        }
        var_40 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_2] [i_2])) || (((/* implicit */_Bool) arr_7 [i_2] [i_2])))) && (((/* implicit */_Bool) min((arr_30 [i_2] [i_2] [i_2] [i_2]), (arr_30 [i_2] [i_2] [i_2] [i_2]))))));
    }
    for (long long int i_13 = 1; i_13 < 16; i_13 += 4) 
    {
        arr_49 [i_13] = ((/* implicit */long long int) max((arr_6 [i_13] [i_13 - 1]), (((/* implicit */unsigned short) arr_48 [i_13]))));
        arr_50 [i_13] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_7 [i_13] [i_13 - 1])), (arr_39 [(unsigned char)10])))), (((unsigned long long int) arr_22 [i_13] [i_13] [i_13] [i_13])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)26686)) : (((/* implicit */int) arr_47 [i_13]))))) - (((long long int) arr_10 [i_13] [11LL])))))));
        var_41 = ((/* implicit */int) min((((/* implicit */long long int) 2305738679U)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3735038520872971532ULL)) ? (((/* implicit */int) (short)-19760)) : (((/* implicit */int) (unsigned short)35214))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))) : (943252234219438726LL)))));
    }
    /* vectorizable */
    for (signed char i_14 = 1; i_14 < 20; i_14 += 3) 
    {
        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_14 - 1] [i_14 + 1])) ? (((/* implicit */int) arr_52 [i_14 + 1] [i_14 - 1])) : (((/* implicit */int) arr_52 [i_14 + 1] [i_14 + 1])))))));
        /* LoopSeq 1 */
        for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
        {
            var_43 = ((/* implicit */unsigned short) (+(((-2929610485196846116LL) / (((/* implicit */long long int) ((/* implicit */int) (short)15071)))))));
            arr_57 [i_14] &= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 29360128U)) ? (((/* implicit */int) arr_52 [(unsigned short)15] [i_14])) : (((/* implicit */int) arr_53 [i_14 - 1] [i_15])))));
            arr_58 [i_15] = ((/* implicit */unsigned char) (+((+(arr_55 [(_Bool)1] [i_15])))));
        }
        arr_59 [i_14] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_52 [i_14] [i_14])) != (((/* implicit */int) arr_51 [i_14]))))) == ((~(arr_55 [i_14] [(unsigned short)6])))));
        /* LoopSeq 1 */
        for (short i_16 = 2; i_16 < 20; i_16 += 2) 
        {
            var_44 |= ((/* implicit */short) arr_62 [i_14 + 1] [i_14 - 1]);
            var_45 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)31427))) == (92318845U)))) % (((/* implicit */int) arr_56 [i_14 + 1]))));
        }
    }
    var_46 = (((-(4778941819315032342LL))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((-2219184708472893171LL) != (((/* implicit */long long int) var_13)))))) : (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
}
