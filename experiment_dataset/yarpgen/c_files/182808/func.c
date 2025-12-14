/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182808
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned int) var_15);
            var_20 = ((/* implicit */unsigned char) ((int) arr_2 [i_0]));
        }
        var_21 -= ((/* implicit */short) arr_3 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)44);
            var_22 -= ((/* implicit */signed char) ((unsigned int) (unsigned char)1));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_0 [i_2]))));
        }
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            arr_12 [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) arr_7 [i_0]);
            arr_13 [i_3] = ((/* implicit */unsigned short) (-(arr_1 [i_0])));
        }
    }
    var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)235)) >> (((((/* implicit */int) (unsigned char)237)) - (218)))))), (((var_16) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        var_25 *= ((/* implicit */unsigned short) ((arr_14 [i_4] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9))))));
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_16 [i_4]))));
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            var_27 = ((/* implicit */short) ((((/* implicit */int) var_13)) >= (((/* implicit */int) ((((/* implicit */_Bool) (short)-10202)) || (((/* implicit */_Bool) arr_14 [(short)0] [i_5])))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    var_28 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_4] [15U] [i_6] [i_4]))));
                    var_29 = ((/* implicit */int) ((arr_16 [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225)))));
                    arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned int) ((long long int) var_17)));
                }
                var_30 += ((/* implicit */_Bool) arr_15 [i_5]);
                arr_26 [16ULL] [i_5] [(unsigned short)10] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */unsigned int) arr_18 [i_4] [i_5])) : (arr_24 [i_4] [i_4])));
            }
            for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                var_31 = ((/* implicit */long long int) ((arr_14 [i_4] [19U]) != (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                arr_29 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_14 [i_4] [i_5]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 67108863U)))) : (var_4)));
            }
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) arr_21 [i_5]))));
            arr_30 [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (unsigned char)235))) / (((/* implicit */int) arr_19 [i_4] [i_5]))));
        }
        for (signed char i_9 = 4; i_9 < 16; i_9 += 4) 
        {
            var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (var_4)));
            arr_34 [(signed char)9] [i_4] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_9] [i_9 + 1] [i_9 + 3] [11LL] [(unsigned short)3] [i_9])) - (((/* implicit */int) arr_23 [i_9 - 2] [i_9 - 4] [i_4] [i_4] [i_4] [i_4]))));
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                arr_38 [i_4] [(unsigned char)0] [i_10] = ((/* implicit */signed char) ((var_14) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535))))) : (((unsigned int) (signed char)-118))));
                var_34 = ((/* implicit */short) ((11890467854663664661ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20)))));
            }
            for (short i_11 = 4; i_11 < 19; i_11 += 4) 
            {
                arr_43 [i_4] [i_9] [(unsigned char)10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                var_35 = ((/* implicit */unsigned char) ((int) var_16));
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_9 - 4] [i_9 - 2] [i_9 + 2])) ? (((/* implicit */int) arr_37 [i_9 - 3] [i_9 - 2] [i_9 + 1])) : (((/* implicit */int) arr_37 [i_9 - 4] [i_9 + 2] [i_9 - 1]))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned short) -263460528);
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((17104492724298735806ULL) << (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_0)));
                            var_39 = ((/* implicit */short) ((((int) var_13)) * (((/* implicit */int) arr_35 [i_9 - 2]))));
                        }
                    } 
                } 
            }
            var_40 = ((/* implicit */unsigned long long int) ((arr_23 [i_9 - 1] [i_9 - 4] [(short)0] [(short)5] [17LL] [i_4]) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5295))))) : (((/* implicit */int) arr_20 [i_9 + 3] [(short)15] [(short)14] [i_9 + 2]))));
        }
    }
    for (short i_14 = 0; i_14 < 19; i_14 += 2) 
    {
        arr_54 [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)25541)) ? (((((arr_45 [(unsigned char)3] [(unsigned char)3] [i_14] [i_14]) - (((/* implicit */int) var_2)))) / (((((/* implicit */int) (short)-17)) - (((/* implicit */int) (short)384)))))) : (min((max((((/* implicit */int) arr_35 [i_14])), (992))), (((/* implicit */int) (_Bool)0))))));
        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_14] [i_14] [i_14])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_14] [i_14] [i_14])) ? (arr_15 [i_14]) : (arr_31 [i_14] [i_14])))) : (((long long int) 2778637173871885211ULL))));
        var_42 = ((unsigned short) (signed char)114);
        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) var_7))));
    }
    var_44 = ((/* implicit */int) ((short) ((short) max((var_10), (var_7)))));
    var_45 = ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_12))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_17), (((/* implicit */short) (signed char)-116)))))) > (var_15))))));
}
