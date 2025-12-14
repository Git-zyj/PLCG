/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117995
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min(((signed char)-80), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)79)) && (((/* implicit */_Bool) 4243445737892904916ULL)))))))) : (((/* implicit */int) (signed char)-80)))))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) (signed char)72))), (((((/* implicit */int) (unsigned char)34)) / (((/* implicit */int) arr_0 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((5211002059605029568ULL), (5211002059605029568ULL)));
    }
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((max((min((((/* implicit */unsigned long long int) (signed char)-103)), (arr_4 [i_3]))), (((/* implicit */unsigned long long int) (signed char)28)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)0))))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 4; i_4 < 12; i_4 += 1) 
                    {
                        var_18 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 13235742014104522048ULL))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((((/* implicit */_Bool) var_14)) ? (arr_9 [i_4] [i_4] [i_3]) : (arr_9 [i_2] [i_3 - 1] [2ULL]))) % (((((/* implicit */_Bool) (short)-9456)) ? (7722181706244659250ULL) : (((/* implicit */unsigned long long int) 3956136198706448554LL)))))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_0))) >> (((((13235742014104522048ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) - (249730981398198511ULL)))))))))));
                        var_20 -= ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_14)), (var_4)))), (4863541882288821801ULL)))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_21 |= ((/* implicit */unsigned long long int) (signed char)-30);
                        var_22 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_5), (((/* implicit */short) arr_6 [i_1] [i_5]))))) && (((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) (unsigned char)31)))))) && ((!(((/* implicit */_Bool) ((short) arr_14 [i_5] [i_3] [i_2] [i_2] [i_1])))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) (short)-32678);
                        var_23 -= ((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)19097)) | (((/* implicit */int) (unsigned char)227))))))) & (((((/* implicit */_Bool) arr_6 [i_3 - 2] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)50)) & (((/* implicit */int) (unsigned short)19097))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))) | (8616381724139263669ULL))))));
                    }
                }
            } 
        } 
        arr_20 [i_1] [i_1] |= ((/* implicit */signed char) ((((long long int) var_11)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224)))));
        var_24 *= min((((unsigned short) ((short) (unsigned char)120))), (arr_2 [i_1]));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        arr_23 [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42))) != (4863541882288821799ULL))))) / (((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (-3956136198706448559LL)))));
        arr_24 [i_7] = ((/* implicit */short) ((unsigned char) (signed char)80));
        var_25 ^= ((/* implicit */unsigned char) ((arr_21 [i_7]) != (((/* implicit */long long int) ((/* implicit */int) (short)-23)))));
        arr_25 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_6))) && ((!(((/* implicit */_Bool) var_3))))));
    }
    var_26 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)31)) || (((/* implicit */_Bool) (unsigned char)255)))))));
    var_27 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (var_8))))) >= (((unsigned long long int) var_14))))), (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)175)) - (((/* implicit */int) var_14))))), (min((var_12), (((/* implicit */long long int) (unsigned short)46439))))))));
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_10 = 3; i_10 < 14; i_10 += 4) 
                {
                    arr_35 [i_8] [i_8] [i_9] &= ((/* implicit */long long int) (+(((/* implicit */int) arr_30 [i_8] [i_8] [i_8]))));
                    arr_36 [i_8] [i_9] [i_9] = ((/* implicit */short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)5]))) - (13235742014104522053ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)22380)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) var_9))))))) << (((((/* implicit */int) ((short) min(((unsigned char)179), ((unsigned char)134))))) - (107)))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        for (short i_12 = 0; i_12 < 16; i_12 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */short) ((max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59))) >= (arr_27 [i_9] [i_8])))), (max((((/* implicit */long long int) (unsigned short)29492)), (-3956136198706448564LL))))) + (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                                arr_42 [i_8] [i_9] [i_10 - 3] [i_11] [i_12] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (-3956136198706448554LL))))) != (arr_31 [14ULL])))), (arr_21 [i_11])));
                                var_29 -= ((/* implicit */unsigned char) (short)5036);
                            }
                        } 
                    } 
                    var_30 *= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_10 - 2] [i_10 - 3]))) + (368168483812865178LL))) % (((/* implicit */long long int) ((/* implicit */int) max((arr_41 [i_10 - 3] [i_10 - 3]), (arr_41 [i_10 + 1] [i_10 - 3])))))));
                    arr_43 [14ULL] [i_9] [14ULL] [i_9] |= ((/* implicit */short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) max((arr_28 [i_9]), (((/* implicit */long long int) (unsigned char)196)))))));
                }
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    arr_47 [i_8] [i_9] = ((((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_8]))) ? (((((((/* implicit */int) arr_38 [i_8] [i_8] [9ULL])) < (((/* implicit */int) (signed char)-77)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))) : (min((((/* implicit */unsigned long long int) arr_45 [i_8] [i_8] [i_8])), (arr_31 [i_8]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) var_6))))));
                    var_31 = ((/* implicit */short) max((var_31), (((short) ((unsigned short) arr_0 [i_9])))));
                }
                var_32 &= ((/* implicit */unsigned char) min((min((((((/* implicit */int) (signed char)73)) - (((/* implicit */int) (signed char)82)))), (((((/* implicit */_Bool) arr_26 [i_9])) ? (((/* implicit */int) (unsigned short)46444)) : (((/* implicit */int) (signed char)76)))))), (((/* implicit */int) (unsigned char)65))));
            }
        } 
    } 
}
