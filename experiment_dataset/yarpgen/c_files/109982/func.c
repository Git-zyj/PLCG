/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109982
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
    var_15 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_16 *= ((short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)14768)), (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 531975029)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)5842)))))));
        var_17 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) == (((((/* implicit */_Bool) -211619733628336231LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0] [i_0]))))))) * (((((((/* implicit */int) var_12)) < (((/* implicit */int) (_Bool)0)))) ? (arr_0 [i_0] [i_0]) : (2388139521726518487ULL))));
        arr_4 [i_0] = ((/* implicit */long long int) ((unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) -4307519051548127054LL)) ? (1457085553274381225ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
    }
    for (int i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            var_18 = ((/* implicit */_Bool) var_1);
            var_19 = ((/* implicit */_Bool) (+(((int) arr_1 [i_1 + 2] [i_2 - 1]))));
        }
        arr_9 [i_1] [i_1 + 3] = ((/* implicit */short) arr_3 [i_1]);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((_Bool) arr_11 [i_3]));
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 3) 
        {
            arr_15 [i_3] [i_3 - 1] [i_3 + 2] = ((/* implicit */_Bool) (-(arr_14 [i_3 + 2] [i_3] [i_4])));
            arr_16 [i_3] [i_4 - 3] = ((/* implicit */short) (_Bool)0);
            arr_17 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-22)) ? (-8753355840233391004LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-2415)))));
            arr_18 [i_4] [(short)14] |= ((/* implicit */_Bool) (-(arr_14 [i_3] [(signed char)10] [i_4 - 2])));
            arr_19 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_4 - 2])) ? (((/* implicit */int) (unsigned short)29884)) : (((/* implicit */int) arr_10 [i_3 - 1] [i_4 + 1]))));
        }
        for (short i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            arr_24 [i_3] [i_3] = ((/* implicit */signed char) ((unsigned int) arr_20 [i_3]));
            var_21 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_21 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30621))) : (791518481U))) > (arr_12 [i_3 + 1])));
        }
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            var_22 += ((/* implicit */unsigned char) 3578821991312501052ULL);
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) arr_12 [i_3 + 2])))))));
            var_24 = ((((((/* implicit */_Bool) arr_25 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) : (-1LL))) + (((/* implicit */long long int) arr_12 [i_3])));
            var_25 = ((arr_25 [i_3]) * (((/* implicit */long long int) ((/* implicit */int) ((754838665U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))))))));
            var_26 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-81))));
        }
        arr_28 [(short)2] |= ((/* implicit */unsigned int) ((_Bool) ((long long int) arr_10 [i_3 + 1] [i_3 - 1])));
        var_27 = ((/* implicit */long long int) ((arr_14 [i_3] [i_3] [i_3 - 1]) ^ (((/* implicit */int) (short)-28610))));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 16; i_7 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned int i_8 = 2; i_8 < 17; i_8 += 4) 
        {
            var_28 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)20683))));
            arr_35 [i_7] [(_Bool)1] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)1)))));
            var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)84)) && (((/* implicit */_Bool) (unsigned short)25754))));
            var_30 |= ((/* implicit */long long int) arr_23 [i_7] [(_Bool)1]);
        }
        for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_10 = 2; i_10 < 17; i_10 += 1) 
            {
                arr_42 [i_7] [i_9] = ((/* implicit */unsigned long long int) ((arr_20 [i_7 - 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                var_31 = ((/* implicit */long long int) ((arr_20 [i_10 - 2]) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_7] [i_7 - 1])))))));
                var_32 ^= ((/* implicit */unsigned char) (((~(((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                arr_43 [i_7] [i_9] [(_Bool)1] [(unsigned char)14] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_7] [i_9])) ^ (((/* implicit */int) arr_39 [i_10 + 1] [i_9] [i_7 + 1] [i_10]))));
            }
            var_33 -= ((/* implicit */long long int) ((((long long int) arr_27 [i_9])) > (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_7 + 1] [i_7] [i_7 - 1])))));
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_36 [i_7] [i_7])) > (((/* implicit */int) (unsigned short)35658))))) * (((((/* implicit */int) arr_40 [i_7] [i_7] [i_7])) << (((((/* implicit */int) arr_39 [(signed char)0] [i_9] [5] [i_7])) - (43681)))))));
        }
        for (signed char i_11 = 3; i_11 < 15; i_11 += 2) 
        {
            arr_47 [i_7 + 2] [i_11] [i_7] = ((/* implicit */short) arr_20 [i_7 + 1]);
            arr_48 [(unsigned short)11] [(_Bool)1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(9LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((arr_20 [i_7]) | (((/* implicit */unsigned long long int) var_1))))));
        }
        for (unsigned char i_12 = 4; i_12 < 16; i_12 += 1) 
        {
            arr_52 [i_12 - 1] [(unsigned char)8] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (arr_29 [i_7 + 2])));
            arr_53 [i_7] [i_12] = ((/* implicit */short) arr_50 [i_12 + 1] [i_7 + 2]);
            arr_54 [12LL] [9LL] [i_7] = ((/* implicit */unsigned char) ((short) arr_20 [i_7 + 2]));
        }
        var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1218348836))));
        arr_55 [i_7] = ((/* implicit */signed char) arr_10 [i_7] [16U]);
    }
    for (int i_13 = 1; i_13 < 16; i_13 += 1) /* same iter space */
    {
        arr_58 [i_13] = ((/* implicit */unsigned char) ((arr_12 [i_13]) / (((/* implicit */unsigned int) -4))));
        var_36 = ((/* implicit */unsigned char) ((((((long long int) var_13)) / (((((/* implicit */_Bool) arr_49 [i_13 - 1])) ? (arr_27 [(unsigned short)8]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_13 + 2] [i_13]))))))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((0), (((/* implicit */int) (signed char)78)))))))));
    }
    var_37 = ((/* implicit */unsigned long long int) var_5);
}
